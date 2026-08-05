#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5C630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowCanvas_TypeDefinitionIndex = 76039;

	class ConfigFlowCanvas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>* data; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>* levelData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS__CTOR_OFFSET))(this);
		}
	};
}

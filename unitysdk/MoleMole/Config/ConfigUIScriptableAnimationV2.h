#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C466F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIScriptableAnimationV2_TypeDefinitionIndex = 83744;

	class ConfigUIScriptableAnimationV2 : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>* ConfigUIScriptableAnimationDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2__CTOR_OFFSET))(this);
		}
	};
}

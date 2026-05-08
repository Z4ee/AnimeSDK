#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionNode; }
namespace MoleMole::Config { class ConfigUIEndFunctionNode; }
namespace MoleMole::Config { class ConfigUIStartFunctionNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0C550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAnimationFunctionSet_TypeDefinitionIndex = 82711;

	class ConfigUIAnimationFunctionSet : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUIEndFunctionNode* EndNode; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAnimationFunctionNode*>* AnimationNodeList; // 0x18
		::MoleMole::Config::ConfigUIStartFunctionNode* StartNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONSET__CTOR_OFFSET))(this);
		}
	};
}

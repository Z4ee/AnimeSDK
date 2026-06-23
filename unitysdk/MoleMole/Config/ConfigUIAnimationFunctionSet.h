#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionNode; }
namespace MoleMole::Config { class ConfigUIEndFunctionNode; }
namespace MoleMole::Config { class ConfigUIStartFunctionNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0xE97A850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAnimationFunctionSet_TypeDefinitionIndex = 69453;

	class ConfigUIAnimationFunctionSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAnimationFunctionNode*>* AnimationNodeList; // 0x10
		::MoleMole::Config::ConfigUIEndFunctionNode* EndNode; // 0x18
		::MoleMole::Config::ConfigUIStartFunctionNode* StartNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONSET__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIBaseActionNode; }
namespace MoleMole::HollowChessboard { class ConfigHollowChessboardBehaviorGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGHOLLOWCHESSBOARDENTITYBEHAVIOR_BEHAVIORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92CAF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowChessboardEntityBehavior_BehaviorConfig_TypeDefinitionIndex = 71823;

	class ConfigHollowChessboardEntityBehavior_BehaviorConfig : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::ConfigHollowChessboardBehaviorGraph* EntityBehavior; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIBaseActionNode*>* configActions; // 0x18
		::System::String* behaviorKey; // 0x20
		::MoleMole::ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType configType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWCHESSBOARDENTITYBEHAVIOR_BEHAVIORCONFIG__CTOR_OFFSET))(this);
		}
	};
}

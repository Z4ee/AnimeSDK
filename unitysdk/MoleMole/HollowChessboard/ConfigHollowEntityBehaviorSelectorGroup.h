#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ConfigHollowEntityBehaviorSelectorGroup_Connectives.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class IConfigHollowEntityBehaviorSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTORGROUP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12BC5440)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTORGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC57B0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowEntityBehaviorSelectorGroup_TypeDefinitionIndex = 60261;

	class ConfigHollowEntityBehaviorSelectorGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IConfigHollowEntityBehaviorSelection*>* Conditions; // 0x10
		::MoleMole::HollowChessboard::ConfigHollowEntityBehaviorSelectorGroup_Connectives ConnectiveType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTORGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTORGROUP_EVALUATE_OFFSET))(this, entity);
		}
	};
}

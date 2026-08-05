#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7109EE9F6F5F9F64;
namespace MoleMole::HollowChessboard { class ConfigHollowBehaviorWithSelector; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x13843F80)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x13844260)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13844250)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardBehaviorWithSelector_TypeDefinitionIndex = 84208;

	class ConfigHollowChessboardBehaviorWithSelector : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ConfigHollowBehaviorWithSelector*>* Groups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}

		::System::Boolean MoleMole_HollowChessboard_IConfigHollowChessboardBehavior_InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORWITHSELECTOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}
	};
}

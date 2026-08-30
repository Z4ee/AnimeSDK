#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35D97E4754CF0C2B_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F45FB0)
#define CLASS_1_35D97E4754CF0C2B_GET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0x17F45E60)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17F466B0)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x17F46850)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x17F465B0)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_9995BC60352EC353_OFFSET UNITYSDK_OFFSET(0x17F463F0)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_D1776145424E0E7F_OFFSET UNITYSDK_OFFSET(0x17F461B0)
#define CLASS_1_35D97E4754CF0C2B_METHOD_1_E16AFF46180CED74_OFFSET UNITYSDK_OFFSET(0x17F46710)
#define CLASS_1_35D97E4754CF0C2B_SET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0x17F45E70)
#define CLASS_1_35D97E4754CF0C2B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F45E80)

inline static constexpr unsigned int Class_1_35D97E4754CF0C2B_TypeDefinitionIndex = 57964;

class Class_1_35D97E4754CF0C2B : public ::System::Object
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* MJBFIAAOMEM; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* OFPPCHFNLGH; // 0x18
	::System::Predicate_1<::RPG::GameCore::GameWorld*>* _ValidChecker_k__BackingField; // 0x20
	::System::String* JMAMNFPCOJH; // 0x28
	::System::Action_1<::RPG::GameCore::GameEntity*>* ECNKLKGHOEE; // 0x30
	::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x38
	::System::Int32 GMDBHJKEAEI; // 0x40
	::System::Single NDDPHDAIEJI; // 0x44
	::RPG::GameCore::EntityTypeMask HFFEAICCHAC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B__CTOR_OFFSET))(this);
	}

	::System::Predicate_1<::RPG::GameCore::GameWorld*>* get_ValidChecker()
	{
		return ((::System::Predicate_1<::RPG::GameCore::GameWorld*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_GET_VALIDCHECKER_OFFSET))(this);
	}

	::System::Void set_ValidChecker(::System::Predicate_1<::RPG::GameCore::GameWorld*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::RPG::GameCore::GameWorld*>*))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_SET_VALIDCHECKER_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_D1776145424E0E7F(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::GameCore::EntityTypeMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_D1776145424E0E7F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_E16AFF46180CED74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_E16AFF46180CED74_OFFSET))(this, a1);
	}

	::System::Void Method_1_9995BC60352EC353(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_9995BC60352EC353_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_35D97E4754CF0C2B_METHOD_1_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}
};

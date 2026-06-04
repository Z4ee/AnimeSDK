#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_71B383B2694DD99B_CLEAR_OFFSET UNITYSDK_OFFSET(0x138383E0)
#define CLASS_1_71B383B2694DD99B_METHOD_1_4C67662FAC8F9EB5_OFFSET UNITYSDK_OFFSET(0x13838220)
#define CLASS_1_71B383B2694DD99B_METHOD_1_F7EE1BC6F402AEF1_OFFSET UNITYSDK_OFFSET(0x13838450)
#define CLASS_1_71B383B2694DD99B__CTOR_OFFSET UNITYSDK_OFFSET(0x138387D0)

inline static constexpr unsigned int Class_1_71B383B2694DD99B_TypeDefinitionIndex = 50429;

class Class_1_71B383B2694DD99B : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_1; // 0x18
	::RPG::GameCore::TeamTypeMask Field_1_2; // 0x20
	::RPG::GameCore::EntityTypeMask Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71B383B2694DD99B__CTOR_OFFSET))(this);
	}

	static ::Class_1_71B383B2694DD99B* Method_1_4C67662FAC8F9EB5(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateConfig* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::TeamTypeMask a4)
	{
		return ((::Class_1_71B383B2694DD99B*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_71B383B2694DD99B_METHOD_1_4C67662FAC8F9EB5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71B383B2694DD99B_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_F7EE1BC6F402AEF1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_71B383B2694DD99B_METHOD_1_F7EE1BC6F402AEF1_OFFSET))(this, a1);
	}
};

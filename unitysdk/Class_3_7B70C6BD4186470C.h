#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"

namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroMonsterHitBoomProp; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7B70C6BD4186470C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F3C630)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_670A34363EE7FD61_OFFSET UNITYSDK_OFFSET(0x15F3DCC0)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_A219728EA4770DD8_OFFSET UNITYSDK_OFFSET(0x15F3DB80)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_AF763293E336368F_OFFSET UNITYSDK_OFFSET(0x15F3E1E0)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_C3848B3A27E2289E_OFFSET UNITYSDK_OFFSET(0x15F3D100)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_D4DD012F02999ED2_OFFSET UNITYSDK_OFFSET(0x15F3EF80)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_E35EF9C04461B5E8_OFFSET UNITYSDK_OFFSET(0x15F3DD60)
#define CLASS_3_7B70C6BD4186470C_METHOD_3_F1A0A4B21F8A4BF4_OFFSET UNITYSDK_OFFSET(0x15F3E5D0)
#define CLASS_3_7B70C6BD4186470C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F3C680)
#define CLASS_3_7B70C6BD4186470C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3C5C0)

inline static constexpr unsigned int Class_3_7B70C6BD4186470C_TypeDefinitionIndex = 56325;

class Class_3_7B70C6BD4186470C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroMonsterHitBoomProp*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C3848B3A27E2289E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_C3848B3A27E2289E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_670A34363EE7FD61(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_670A34363EE7FD61_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_3_A219728EA4770DD8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_A219728EA4770DD8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_3_E35EF9C04461B5E8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_E35EF9C04461B5E8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_3_AF763293E336368F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_AF763293E336368F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_3_F1A0A4B21F8A4BF4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_F1A0A4B21F8A4BF4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_D4DD012F02999ED2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_591DD46947F040CB a3, ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB, ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*))((::PBYTE)hIl2Cpp + CLASS_3_7B70C6BD4186470C_METHOD_3_D4DD012F02999ED2_OFFSET))(a1, a2, a3, a4);
	}
};

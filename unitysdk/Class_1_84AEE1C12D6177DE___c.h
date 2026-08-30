#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_84AEE1C12D6177DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE47CC0)
#define CLASS_1_84AEE1C12D6177DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE47CF0)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_0_OFFSET UNITYSDK_OFFSET(0xBE47D00)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_1_OFFSET UNITYSDK_OFFSET(0xBE47D60)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_2_OFFSET UNITYSDK_OFFSET(0xBE47DC0)

inline static constexpr unsigned int Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex = 59180;

class Class_1_84AEE1C12D6177DE___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__64_1()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x656A0);
	}
	static ::Class_1_84AEE1C12D6177DE___c** StaticGet___9()
	{
		return (::Class_1_84AEE1C12D6177DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x656A8);
	}
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__64_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x656B0);
	}
	static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__64_2()
	{
		return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x656B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayEntityHitAnim_b__64_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_0_OFFSET))(this, a1);
	}

	::System::Boolean _PlayEntityHitAnim_b__64_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_1_OFFSET))(this, a1);
	}

	::System::Void _PlayEntityHitAnim_b__64_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__64_2_OFFSET))(this, a1);
	}
};

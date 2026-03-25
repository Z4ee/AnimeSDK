#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_84AEE1C12D6177DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CBFBA0)
#define CLASS_1_84AEE1C12D6177DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBFBD0)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_0_OFFSET UNITYSDK_OFFSET(0x8CBFBE0)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_1_OFFSET UNITYSDK_OFFSET(0x8CBFC40)
#define CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_2_OFFSET UNITYSDK_OFFSET(0x8CBFCA0)

inline static constexpr unsigned int Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex = 47698;

class Class_1_84AEE1C12D6177DE___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__59_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x8A70);
	}
	static ::Class_1_84AEE1C12D6177DE___c** StaticGet___9()
	{
		return (::Class_1_84AEE1C12D6177DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x8A78);
	}
	static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__59_2()
	{
		return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x8A80);
	}
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__59_1()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE___c_TypeDefinitionIndex)->GetStaticField(0x8A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayEntityHitAnim_b__59_0(::RPG::GameCore::GameEntity* pMember)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_0_OFFSET))(this, pMember);
	}

	::System::Boolean _PlayEntityHitAnim_b__59_1(::RPG::GameCore::GameEntity* pMember)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_1_OFFSET))(this, pMember);
	}

	::System::Void _PlayEntityHitAnim_b__59_2(::RPG::GameCore::GameEntity* pMember)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE___C__PLAYENTITYHITANIM_B__59_2_OFFSET))(this, pMember);
	}
};

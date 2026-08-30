#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_5D17A25E1B993791___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7FC260)
#define CLASS_2_5D17A25E1B993791___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FC290)
#define CLASS_2_5D17A25E1B993791___C__ONTASKSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0xD7FC2A0)
#define CLASS_2_5D17A25E1B993791___C__ONTASKSUCCESS_B__7_1_OFFSET UNITYSDK_OFFSET(0xD7FC380)

inline static constexpr unsigned int Class_2_5D17A25E1B993791___c_TypeDefinitionIndex = 52679;

class Class_2_5D17A25E1B993791___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__7_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D17A25E1B993791___c_TypeDefinitionIndex)->GetStaticField(0x65740);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__7_1()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D17A25E1B993791___c_TypeDefinitionIndex)->GetStaticField(0x65748);
	}
	static ::Class_2_5D17A25E1B993791___c** StaticGet___9()
	{
		return (::Class_2_5D17A25E1B993791___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D17A25E1B993791___c_TypeDefinitionIndex)->GetStaticField(0x65750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskSuccess_b__7_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791___C__ONTASKSUCCESS_B__7_0_OFFSET))(this, a1);
	}

	::System::Boolean _OnTaskSuccess_b__7_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791___C__ONTASKSUCCESS_B__7_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_188534F009ABDD1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAFCCA0)
#define CLASS_2_188534F009ABDD1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFCCD0)
#define CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xBAFCCE0)
#define CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0xBAFCD60)
#define CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_2_OFFSET UNITYSDK_OFFSET(0xBAFCDE0)

inline static constexpr unsigned int Class_2_188534F009ABDD1B___c_TypeDefinitionIndex = 56422;

class Class_2_188534F009ABDD1B___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_2()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_188534F009ABDD1B___c_TypeDefinitionIndex)->GetStaticField(0x22610);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_1()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_188534F009ABDD1B___c_TypeDefinitionIndex)->GetStaticField(0x22618);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_188534F009ABDD1B___c_TypeDefinitionIndex)->GetStaticField(0x22620);
	}
	static ::Class_2_188534F009ABDD1B___c** StaticGet___9()
	{
		return (::Class_2_188534F009ABDD1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_188534F009ABDD1B___c_TypeDefinitionIndex)->GetStaticField(0x22628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _OnTaskBegin_b__3_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 _OnTaskBegin_b__3_2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B___C__ONTASKBEGIN_B__3_2_OFFSET))(this, a1, a2);
	}
};

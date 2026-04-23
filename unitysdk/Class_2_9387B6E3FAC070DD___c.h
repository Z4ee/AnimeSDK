#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_9387B6E3FAC070DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B412B0)
#define CLASS_2_9387B6E3FAC070DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B412E0)
#define CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x12B412F0)
#define CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0x12B41370)
#define CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_2_OFFSET UNITYSDK_OFFSET(0x12B413F0)

inline static constexpr unsigned int Class_2_9387B6E3FAC070DD___c_TypeDefinitionIndex = 52004;

class Class_2_9387B6E3FAC070DD___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_1()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9387B6E3FAC070DD___c_TypeDefinitionIndex)->GetStaticField(0x4D760);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_2()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9387B6E3FAC070DD___c_TypeDefinitionIndex)->GetStaticField(0x4D768);
	}
	static ::Class_2_9387B6E3FAC070DD___c** StaticGet___9()
	{
		return (::Class_2_9387B6E3FAC070DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9387B6E3FAC070DD___c_TypeDefinitionIndex)->GetStaticField(0x4D770);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9387B6E3FAC070DD___c_TypeDefinitionIndex)->GetStaticField(0x4D778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::GameEntity* x, ::RPG::GameCore::GameEntity* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_0_OFFSET))(this, x, y);
	}

	::System::Int32 _OnTaskBegin_b__3_1(::RPG::GameCore::GameEntity* x, ::RPG::GameCore::GameEntity* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_1_OFFSET))(this, x, y);
	}

	::System::Int32 _OnTaskBegin_b__3_2(::RPG::GameCore::GameEntity* x, ::RPG::GameCore::GameEntity* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD___C__ONTASKBEGIN_B__3_2_OFFSET))(this, x, y);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A5BBDAD85E6CC6A3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_4_2E0A1A668714B3CC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A96EE0)
#define CLASS_4_2E0A1A668714B3CC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A96F20)
#define CLASS_4_2E0A1A668714B3CC___C___FILLPLAYERACHIEVEMENTLIST_B__68_0_OFFSET UNITYSDK_OFFSET(0x14A96FF0)
#define CLASS_4_2E0A1A668714B3CC___C___GETACTIVESKILLINFOLIST_B__82_0_OFFSET UNITYSDK_OFFSET(0x14A97010)
#define CLASS_4_2E0A1A668714B3CC___C___INITPLAYER_B__47_0_OFFSET UNITYSDK_OFFSET(0x14A96F30)
#define CLASS_4_2E0A1A668714B3CC___C___INITPLAYER_B__47_1_OFFSET UNITYSDK_OFFSET(0x14A96FA0)

inline static constexpr unsigned int Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex = 35612;

class Class_4_2E0A1A668714B3CC___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>** StaticGet___9__47_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex)->GetStaticField(0x4E180);
	}
	static ::Class_4_2E0A1A668714B3CC___c** StaticGet___9()
	{
		return (::Class_4_2E0A1A668714B3CC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex)->GetStaticField(0x4E188);
	}
	static ::System::Comparison_1<::Struct_2_A5BBDAD85E6CC6A3>** StaticGet___9__82_0()
	{
		return (::System::Comparison_1<::Struct_2_A5BBDAD85E6CC6A3>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex)->GetStaticField(0x4E190);
	}
	static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__68_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex)->GetStaticField(0x4E198);
	}
	static ::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>** StaticGet___9__47_1()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2E0A1A668714B3CC___c_TypeDefinitionIndex)->GetStaticField(0x4E1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitPlayer_b__47_0(::RPG::GameCore::LittleGameComponentConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C___INITPLAYER_B__47_0_OFFSET))(this, a1);
	}

	::System::Boolean __InitPlayer_b__47_1(::RPG::GameCore::LittleGameComponentConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C___INITPLAYER_B__47_1_OFFSET))(this, a1);
	}

	::System::Int32 __FillPlayerAchievementList_b__68_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C___FILLPLAYERACHIEVEMENTLIST_B__68_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 __GetActiveSkillInfoList_b__82_0(::Struct_2_A5BBDAD85E6CC6A3 a1, ::Struct_2_A5BBDAD85E6CC6A3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_A5BBDAD85E6CC6A3, ::Struct_2_A5BBDAD85E6CC6A3))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C___GETACTIVESKILLINFOLIST_B__82_0_OFFSET))(this, a1, a2);
	}
};

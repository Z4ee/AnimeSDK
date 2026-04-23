#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B202CD093058243F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1238E420)
#define CLASS_1_B202CD093058243F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1238E460)
#define CLASS_1_B202CD093058243F___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0x1238E470)
#define CLASS_1_B202CD093058243F___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0x1238E490)
#define CLASS_1_B202CD093058243F___C__TOSTRING_B__1_2_OFFSET UNITYSDK_OFFSET(0x1238E4B0)
#define CLASS_1_B202CD093058243F___C__TOSTRING_B__1_3_OFFSET UNITYSDK_OFFSET(0x1238E4D0)

inline static constexpr unsigned int Class_1_B202CD093058243F___c_TypeDefinitionIndex = 62222;

class Class_1_B202CD093058243F___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B202CD093058243F___c_TypeDefinitionIndex)->GetStaticField(0x6B0B0);
	}
	static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B202CD093058243F___c_TypeDefinitionIndex)->GetStaticField(0x6B0B8);
	}
	static ::Class_1_B202CD093058243F___c** StaticGet___9()
	{
		return (::Class_1_B202CD093058243F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B202CD093058243F___c_TypeDefinitionIndex)->GetStaticField(0x6B0C0);
	}
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B202CD093058243F___c_TypeDefinitionIndex)->GetStaticField(0x6B0C8);
	}
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B202CD093058243F___c_TypeDefinitionIndex)->GetStaticField(0x6B0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_0(::RPG::Client::RogueFormulaData* f)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__TOSTRING_B__1_0_OFFSET))(this, f);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_1(::RPG::Client::RogueFormulaData* f)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__TOSTRING_B__1_1_OFFSET))(this, f);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_2(::RPG::Client::RogueTournHexData* m)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__TOSTRING_B__1_2_OFFSET))(this, m);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_3(::RPG::Client::RogueTournHexData* m)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___C__TOSTRING_B__1_3_OFFSET))(this, m);
	}
};

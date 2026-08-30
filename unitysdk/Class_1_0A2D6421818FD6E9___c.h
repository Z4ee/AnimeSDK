#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0A2D6421818FD6E9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC364BD0)
#define CLASS_1_0A2D6421818FD6E9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC364C10)
#define CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0xC364C20)
#define CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0xC364C40)
#define CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_2_OFFSET UNITYSDK_OFFSET(0xC364C60)
#define CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_3_OFFSET UNITYSDK_OFFSET(0xC364C80)

inline static constexpr unsigned int Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex = 67518;

class Class_1_0A2D6421818FD6E9___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex)->GetStaticField(0x44BC0);
	}
	static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex)->GetStaticField(0x44BC8);
	}
	static ::Class_1_0A2D6421818FD6E9___c** StaticGet___9()
	{
		return (::Class_1_0A2D6421818FD6E9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex)->GetStaticField(0x44BD0);
	}
	static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex)->GetStaticField(0x44BD8);
	}
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2D6421818FD6E9___c_TypeDefinitionIndex)->GetStaticField(0x44BE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_0(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_0_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_1(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_2(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_2_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_3(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9___C__TOSTRING_B__1_3_OFFSET))(this, a1);
	}
};

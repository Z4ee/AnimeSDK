#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_D2E90365D99FC7E6_6;
class Class_2_1BB8CA1042AACD99;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_09556BEFD9595DF2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D2E960)
#define CLASS_2_09556BEFD9595DF2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2E9A0)
#define CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_0_OFFSET UNITYSDK_OFFSET(0x17D2E9E0)
#define CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_1_OFFSET UNITYSDK_OFFSET(0x17D2E9C0)
#define CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_2_OFFSET UNITYSDK_OFFSET(0x17D2E9D0)
#define CLASS_2_09556BEFD9595DF2___C___APPLYTACTICSCARDMODIFIER_B__73_0_OFFSET UNITYSDK_OFFSET(0x17D2E9B0)

inline static constexpr unsigned int Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex = 34268;

class Class_2_09556BEFD9595DF2___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_3<::System::Int32, ::System::UInt32, ::Class_2_1BB8CA1042AACD99*>, ::System::Int32>** StaticGet___9__74_1()
	{
		return (::System::Func_2<::System::ValueTuple_3<::System::Int32, ::System::UInt32, ::Class_2_1BB8CA1042AACD99*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex)->GetStaticField(0x5E9F0);
	}
	static ::System::Func_2<::Class_1_D2E90365D99FC7E6_6*, ::System::String*>** StaticGet___9__74_0()
	{
		return (::System::Func_2<::Class_1_D2E90365D99FC7E6_6*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex)->GetStaticField(0x5E9F8);
	}
	static ::Class_2_09556BEFD9595DF2___c** StaticGet___9()
	{
		return (::Class_2_09556BEFD9595DF2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex)->GetStaticField(0x5EA00);
	}
	static ::System::Func_2<::System::Int32, ::RPG::GameCore::FixPoint>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::System::Int32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex)->GetStaticField(0x5EA08);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__74_2()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09556BEFD9595DF2___c_TypeDefinitionIndex)->GetStaticField(0x5EA10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __ApplyTacticsCardModifier_b__73_0(::System::Int32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C___APPLYTACTICSCARDMODIFIER_B__73_0_OFFSET))(this, x);
	}

	::System::Int32 _UseTacticsCard_b__74_1(::System::ValueTuple_3<::System::Int32, ::System::UInt32, ::Class_2_1BB8CA1042AACD99*> v)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::UInt32, ::Class_2_1BB8CA1042AACD99*>))((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_1_OFFSET))(this, v);
	}

	::System::Int32 _UseTacticsCard_b__74_2(::System::Int32 x)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_2_OFFSET))(this, x);
	}

	::System::String* _UseTacticsCard_b__74_0(::Class_1_D2E90365D99FC7E6_6* c)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_D2E90365D99FC7E6_6*))((::PBYTE)hIl2Cpp + CLASS_2_09556BEFD9595DF2___C__USETACTICSCARD_B__74_0_OFFSET))(this, c);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_CA70E0DDA9F5F1EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3512A0)
#define CLASS_2_CA70E0DDA9F5F1EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3512E0)
#define CLASS_2_CA70E0DDA9F5F1EA___C__GETLAUNCHRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C3512F0)

inline static constexpr unsigned int Class_2_CA70E0DDA9F5F1EA___c_TypeDefinitionIndex = 41455;

class Class_2_CA70E0DDA9F5F1EA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA70E0DDA9F5F1EA___c_TypeDefinitionIndex)->GetStaticField(0x1C540);
	}
	static ::Class_2_CA70E0DDA9F5F1EA___c** StaticGet___9()
	{
		return (::Class_2_CA70E0DDA9F5F1EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA70E0DDA9F5F1EA___c_TypeDefinitionIndex)->GetStaticField(0x1C548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetLaunchResult_b__8_0(::Struct_2_FFCEEED483D7C73B a1, ::Struct_2_FFCEEED483D7C73B a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_FFCEEED483D7C73B, ::Struct_2_FFCEEED483D7C73B))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA___C__GETLAUNCHRESULT_B__8_0_OFFSET))(this, a1, a2);
	}
};

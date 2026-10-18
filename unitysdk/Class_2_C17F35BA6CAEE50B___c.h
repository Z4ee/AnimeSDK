#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C17F35BA6CAEE50B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A1790)
#define CLASS_2_C17F35BA6CAEE50B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A17D0)
#define CLASS_2_C17F35BA6CAEE50B___C__GETLAUNCHRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C8A17E0)

inline static constexpr unsigned int Class_2_C17F35BA6CAEE50B___c_TypeDefinitionIndex = 43078;

class Class_2_C17F35BA6CAEE50B___c : public ::System::Object
{
public:
	static ::Class_2_C17F35BA6CAEE50B___c** StaticGet___9()
	{
		return (::Class_2_C17F35BA6CAEE50B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C17F35BA6CAEE50B___c_TypeDefinitionIndex)->GetStaticField(0x1D320);
	}
	static ::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C17F35BA6CAEE50B___c_TypeDefinitionIndex)->GetStaticField(0x1D328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetLaunchResult_b__8_0(::Struct_2_FFCEEED483D7C73B a1, ::Struct_2_FFCEEED483D7C73B a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_FFCEEED483D7C73B, ::Struct_2_FFCEEED483D7C73B))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B___C__GETLAUNCHRESULT_B__8_0_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DBF482F9F6F56036;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_19AD73A4C65C501E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C17A00)
#define CLASS_2_19AD73A4C65C501E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C17A40)
#define CLASS_2_19AD73A4C65C501E___C___SETUPORBS_B__14_0_OFFSET UNITYSDK_OFFSET(0x11C17A50)

inline static constexpr unsigned int Class_2_19AD73A4C65C501E___c_TypeDefinitionIndex = 66590;

class Class_2_19AD73A4C65C501E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_DBF482F9F6F56036*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_DBF482F9F6F56036*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19AD73A4C65C501E___c_TypeDefinitionIndex)->GetStaticField(0x33770);
	}
	static ::Class_2_19AD73A4C65C501E___c** StaticGet___9()
	{
		return (::Class_2_19AD73A4C65C501E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19AD73A4C65C501E___c_TypeDefinitionIndex)->GetStaticField(0x33778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_19AD73A4C65C501E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19AD73A4C65C501E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupOrbs_b__14_0(::Class_2_DBF482F9F6F56036* a, ::Class_2_DBF482F9F6F56036* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBF482F9F6F56036*, ::Class_2_DBF482F9F6F56036*))((::PBYTE)hIl2Cpp + CLASS_2_19AD73A4C65C501E___C___SETUPORBS_B__14_0_OFFSET))(this, a, b);
	}
};

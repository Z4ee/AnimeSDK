#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_714EC10B569D81C0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E4DD80)
#define CLASS_1_714EC10B569D81C0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4DDC0)
#define CLASS_1_714EC10B569D81C0___C__SORTBUNDLEBYOFFSET_B__17_0_OFFSET UNITYSDK_OFFSET(0x12E4DDD0)

inline static constexpr unsigned int Class_1_714EC10B569D81C0___c_TypeDefinitionIndex = 39320;

class Class_1_714EC10B569D81C0___c : public ::System::Object
{
public:
	static ::Class_1_714EC10B569D81C0___c** StaticGet___9()
	{
		return (::Class_1_714EC10B569D81C0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_714EC10B569D81C0___c_TypeDefinitionIndex)->GetStaticField(0x26820);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_91*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_714EC10B569D81C0___c_TypeDefinitionIndex)->GetStaticField(0x26828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortBundleByOffset_b__17_0(::Class_0_16E4307DCC419505_91* a1, ::Class_0_16E4307DCC419505_91* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_91*, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0___C__SORTBUNDLEBYOFFSET_B__17_0_OFFSET))(this, a1, a2);
	}
};

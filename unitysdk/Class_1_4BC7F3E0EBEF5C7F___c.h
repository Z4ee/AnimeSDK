#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_73;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4BC7F3E0EBEF5C7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B5EE50)
#define CLASS_1_4BC7F3E0EBEF5C7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5EE90)
#define CLASS_1_4BC7F3E0EBEF5C7F___C__SORTBUNDLEBYOFFSET_B__16_0_OFFSET UNITYSDK_OFFSET(0x17B5EEA0)

inline static constexpr unsigned int Class_1_4BC7F3E0EBEF5C7F___c_TypeDefinitionIndex = 37778;

class Class_1_4BC7F3E0EBEF5C7F___c : public ::System::Object
{
public:
	static ::Class_1_4BC7F3E0EBEF5C7F___c** StaticGet___9()
	{
		return (::Class_1_4BC7F3E0EBEF5C7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC7F3E0EBEF5C7F___c_TypeDefinitionIndex)->GetStaticField(0xD370);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_73*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC7F3E0EBEF5C7F___c_TypeDefinitionIndex)->GetStaticField(0xD378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortBundleByOffset_b__16_0(::Class_0_16E4307DCC419505_73* x, ::Class_0_16E4307DCC419505_73* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_73*, ::Class_0_16E4307DCC419505_73*))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F___C__SORTBUNDLEBYOFFSET_B__16_0_OFFSET))(this, x, y);
	}
};

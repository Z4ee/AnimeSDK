#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E1BAB16E47F2B8E6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14091E70)
#define CLASS_1_E1BAB16E47F2B8E6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14091EB0)
#define CLASS_1_E1BAB16E47F2B8E6___C__SORTBUNDLEBYOFFSET_B__18_0_OFFSET UNITYSDK_OFFSET(0x14091EC0)

inline static constexpr unsigned int Class_1_E1BAB16E47F2B8E6___c_TypeDefinitionIndex = 40193;

class Class_1_E1BAB16E47F2B8E6___c : public ::System::Object
{
public:
	static ::Class_1_E1BAB16E47F2B8E6___c** StaticGet___9()
	{
		return (::Class_1_E1BAB16E47F2B8E6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BAB16E47F2B8E6___c_TypeDefinitionIndex)->GetStaticField(0x12770);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_91*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BAB16E47F2B8E6___c_TypeDefinitionIndex)->GetStaticField(0x12778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortBundleByOffset_b__18_0(::Class_0_16E4307DCC419505_91* a1, ::Class_0_16E4307DCC419505_91* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_91*, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6___C__SORTBUNDLEBYOFFSET_B__18_0_OFFSET))(this, a1, a2);
	}
};

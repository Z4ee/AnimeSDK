#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E0608365BFC7E6EB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176C1CE0)
#define CLASS_1_E0608365BFC7E6EB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176C1D20)
#define CLASS_1_E0608365BFC7E6EB___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET UNITYSDK_OFFSET(0x176C1D30)

inline static constexpr unsigned int Class_1_E0608365BFC7E6EB___c_TypeDefinitionIndex = 77282;

class Class_1_E0608365BFC7E6EB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0608365BFC7E6EB___c_TypeDefinitionIndex)->GetStaticField(0x650A0);
	}
	static ::Class_1_E0608365BFC7E6EB___c** StaticGet___9()
	{
		return (::Class_1_E0608365BFC7E6EB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0608365BFC7E6EB___c_TypeDefinitionIndex)->GetStaticField(0x650A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0608365BFC7E6EB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0608365BFC7E6EB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetMergedItemIncomeList_b__9_0(::System::ValueTuple_2<::System::UInt32, ::System::Int32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_E0608365BFC7E6EB___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET))(this, a1, a2);
	}
};

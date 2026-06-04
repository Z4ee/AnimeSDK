#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B0F3B4A66A2BF7E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA897A0)
#define CLASS_1_B0F3B4A66A2BF7E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA897E0)
#define CLASS_1_B0F3B4A66A2BF7E5___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xAA897F0)

inline static constexpr unsigned int Class_1_B0F3B4A66A2BF7E5___c_TypeDefinitionIndex = 72273;

class Class_1_B0F3B4A66A2BF7E5___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0F3B4A66A2BF7E5___c_TypeDefinitionIndex)->GetStaticField(0x68B90);
	}
	static ::Class_1_B0F3B4A66A2BF7E5___c** StaticGet___9()
	{
		return (::Class_1_B0F3B4A66A2BF7E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0F3B4A66A2BF7E5___c_TypeDefinitionIndex)->GetStaticField(0x68B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0F3B4A66A2BF7E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3B4A66A2BF7E5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetMergedItemIncomeList_b__9_0(::System::ValueTuple_2<::System::UInt32, ::System::Int32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_B0F3B4A66A2BF7E5___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET))(this, a1, a2);
	}
};

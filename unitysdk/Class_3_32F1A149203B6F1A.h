#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_32F1A149203B6F1A_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13767B50)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_14D20794BC5A04FC_OFFSET UNITYSDK_OFFSET(0x13767B60)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x137674D0)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_1C79C55CF9C65BBD_1_OFFSET UNITYSDK_OFFSET(0x13768130)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_1C79C55CF9C65BBD_OFFSET UNITYSDK_OFFSET(0x13768030)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_2776BE952E91858D_OFFSET UNITYSDK_OFFSET(0x13767C50)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_3B000A390A450EC7_OFFSET UNITYSDK_OFFSET(0x13767E30)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_4038FE4A72B0ACDC_OFFSET UNITYSDK_OFFSET(0x13768480)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x137688E0)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13767F20)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x13768020)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x13768230)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13767C90)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_915FA1011590C065_OFFSET UNITYSDK_OFFSET(0x137686C0)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_9513835C64537273_OFFSET UNITYSDK_OFFSET(0x13768240)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_BCFE161307D6197E_OFFSET UNITYSDK_OFFSET(0x137688F0)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_BEFDECFA5BC01CF3_1_OFFSET UNITYSDK_OFFSET(0x137687F0)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_BEFDECFA5BC01CF3_OFFSET UNITYSDK_OFFSET(0x13767F30)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_E8C6ABD8121E8FDE_OFFSET UNITYSDK_OFFSET(0x13767A90)
#define CLASS_3_32F1A149203B6F1A_METHOD_3_F01FF1DAB59625C1_OFFSET UNITYSDK_OFFSET(0x13767CA0)
#define CLASS_3_32F1A149203B6F1A_ONATTACH_OFFSET UNITYSDK_OFFSET(0x13767470)
#define CLASS_3_32F1A149203B6F1A_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13767290)
#define CLASS_3_32F1A149203B6F1A_ONDETACH_OFFSET UNITYSDK_OFFSET(0x13767870)
#define CLASS_3_32F1A149203B6F1A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x137677F0)
#define CLASS_3_32F1A149203B6F1A_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x137679A0)
#define CLASS_3_32F1A149203B6F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x13767A00)

inline static constexpr unsigned int Class_3_32F1A149203B6F1A_TypeDefinitionIndex = 49674;

class Class_3_32F1A149203B6F1A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_32F1A149203B6F1A*>
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_3_0; // 0x20
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Field_3_2; // 0x90
	::System::String* Field_3_3; // 0x98
	::System::Boolean Field_3_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_ONCREATE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_ONATTACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_ONDETACH_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_ONVISITONE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E8C6ABD8121E8FDE(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_E8C6ABD8121E8FDE_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_3_14D20794BC5A04FC(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_14D20794BC5A04FC_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FGameplayTagContainer Method_3_2776BE952E91858D()
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_2776BE952E91858D_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_3_F01FF1DAB59625C1(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_F01FF1DAB59625C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3B000A390A450EC7(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_3B000A390A450EC7_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Boolean Method_3_BEFDECFA5BC01CF3(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_BEFDECFA5BC01CF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_1C79C55CF9C65BBD(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_1C79C55CF9C65BBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C79C55CF9C65BBD_1(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_1C79C55CF9C65BBD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_9513835C64537273(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_9513835C64537273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4038FE4A72B0ACDC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_4038FE4A72B0ACDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_915FA1011590C065(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_915FA1011590C065_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BEFDECFA5BC01CF3_1(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_BEFDECFA5BC01CF3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_BCFE161307D6197E(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_32F1A149203B6F1A_METHOD_3_BCFE161307D6197E_OFFSET))(this, a1, a2);
	}
};

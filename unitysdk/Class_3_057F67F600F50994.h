#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Struct_2_DAE1D00927065CC5.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_057F67F600F50994_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1378D0B0)
#define CLASS_3_057F67F600F50994_METHOD_3_14D20794BC5A04FC_OFFSET UNITYSDK_OFFSET(0x1378D0C0)
#define CLASS_3_057F67F600F50994_METHOD_3_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1378BD30)
#define CLASS_3_057F67F600F50994_METHOD_3_1C79C55CF9C65BBD_1_OFFSET UNITYSDK_OFFSET(0x1378D990)
#define CLASS_3_057F67F600F50994_METHOD_3_1C79C55CF9C65BBD_OFFSET UNITYSDK_OFFSET(0x1378C920)
#define CLASS_3_057F67F600F50994_METHOD_3_2776BE952E91858D_OFFSET UNITYSDK_OFFSET(0x1378D940)
#define CLASS_3_057F67F600F50994_METHOD_3_3B000A390A450EC7_OFFSET UNITYSDK_OFFSET(0x1378D680)
#define CLASS_3_057F67F600F50994_METHOD_3_4038FE4A72B0ACDC_OFFSET UNITYSDK_OFFSET(0x1378D2B0)
#define CLASS_3_057F67F600F50994_METHOD_3_6A2F803BFAE8CDA1_OFFSET UNITYSDK_OFFSET(0x1378DB60)
#define CLASS_3_057F67F600F50994_METHOD_3_7430D0C05608319B_OFFSET UNITYSDK_OFFSET(0x1378CE50)
#define CLASS_3_057F67F600F50994_METHOD_3_753C72F6628D4F42_OFFSET UNITYSDK_OFFSET(0x1378C600)
#define CLASS_3_057F67F600F50994_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1378C7E0)
#define CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1378D2A0)
#define CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1378D930)
#define CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1378D980)
#define CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1378CAF0)
#define CLASS_3_057F67F600F50994_METHOD_3_8925800DD193B2D8_OFFSET UNITYSDK_OFFSET(0x1378CB00)
#define CLASS_3_057F67F600F50994_METHOD_3_915FA1011590C065_OFFSET UNITYSDK_OFFSET(0x1378C7F0)
#define CLASS_3_057F67F600F50994_METHOD_3_BEFDECFA5BC01CF3_1_OFFSET UNITYSDK_OFFSET(0x1378D1B0)
#define CLASS_3_057F67F600F50994_METHOD_3_BEFDECFA5BC01CF3_OFFSET UNITYSDK_OFFSET(0x1378C2A0)
#define CLASS_3_057F67F600F50994_METHOD_3_F01FF1DAB59625C1_OFFSET UNITYSDK_OFFSET(0x1378D4F0)
#define CLASS_3_057F67F600F50994_METHOD_3_FEEFA38FF959DDD6_OFFSET UNITYSDK_OFFSET(0x1378C390)
#define CLASS_3_057F67F600F50994_METHOD_3_FF5C72821DA38808_OFFSET UNITYSDK_OFFSET(0x1378D770)
#define CLASS_3_057F67F600F50994_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1378BCD0)
#define CLASS_3_057F67F600F50994_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1378BAF0)
#define CLASS_3_057F67F600F50994_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1378C0D0)
#define CLASS_3_057F67F600F50994_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1378C050)
#define CLASS_3_057F67F600F50994_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x1378C200)
#define CLASS_3_057F67F600F50994__CTOR_OFFSET UNITYSDK_OFFSET(0x1378C260)

inline static constexpr unsigned int Class_3_057F67F600F50994_TypeDefinitionIndex = 49303;

class Class_3_057F67F600F50994 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_057F67F600F50994*>
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_3_3; // 0x20
	::System::String* Field_3_0; // 0x90
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Field_3_1; // 0x98
	::System::Boolean Field_3_2; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_ONCREATE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_ONATTACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_ONDETACH_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_ONVISITONE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BEFDECFA5BC01CF3(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_BEFDECFA5BC01CF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_FEEFA38FF959DDD6(::Foundation::Unreal::FGameplayTag a1, ::Foundation::Unreal::FGameplayTag a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_FEEFA38FF959DDD6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_915FA1011590C065(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_915FA1011590C065_OFFSET))(this, a1);
	}

	::System::Void Method_3_1C79C55CF9C65BBD(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_1C79C55CF9C65BBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_8925800DD193B2D8(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_8925800DD193B2D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7430D0C05608319B(::Foundation::Unreal::FGameplayTagContainer a1, ::Foundation::Unreal::FGameplayTagContainer a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_7430D0C05608319B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_3_14D20794BC5A04FC(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_14D20794BC5A04FC_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BEFDECFA5BC01CF3_1(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_BEFDECFA5BC01CF3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_4038FE4A72B0ACDC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_4038FE4A72B0ACDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F01FF1DAB59625C1(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_F01FF1DAB59625C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3B000A390A450EC7(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_3B000A390A450EC7_OFFSET))(this, a1);
	}

	::System::Void Method_3_FF5C72821DA38808(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_FF5C72821DA38808_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::Foundation::Unreal::FGameplayTagContainer Method_3_2776BE952E91858D()
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_2776BE952E91858D_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_1C79C55CF9C65BBD_1(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_1C79C55CF9C65BBD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_753C72F6628D4F42(::Struct_2_DAE1D00927065CC5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DAE1D00927065CC5))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_753C72F6628D4F42_OFFSET))(this, a1);
	}

	::System::Void Method_3_6A2F803BFAE8CDA1(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_057F67F600F50994_METHOD_3_6A2F803BFAE8CDA1_OFFSET))(this, a1, a2);
	}
};

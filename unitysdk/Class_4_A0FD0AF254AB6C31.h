#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B7FC057D30D5C12;
class Class_1_B7E341C5F1A6F199;
class Class_2_5C38134D4169B6E0;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_112EDABEE31E213B_1_OFFSET UNITYSDK_OFFSET(0x1649BC50)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_112EDABEE31E213B_OFFSET UNITYSDK_OFFSET(0x1649A540)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_1F35E689C8821CA8_OFFSET UNITYSDK_OFFSET(0x1649A950)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_26CFEDE224387403_OFFSET UNITYSDK_OFFSET(0x1649A010)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1649BEC0)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_55F7FEBC05A2DCD6_OFFSET UNITYSDK_OFFSET(0x1649AF60)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_678CD678BAA5EAC9_OFFSET UNITYSDK_OFFSET(0x1649A7B0)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x1649AF10)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1649A7A0)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1649A940)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1649AF00)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x1649B230)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1649A530)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1649BEB0)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x1649B240)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_D153EE3D0511EFF9_OFFSET UNITYSDK_OFFSET(0x1649A410)
#define CLASS_4_A0FD0AF254AB6C31_METHOD_4_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x1649BC40)
#define CLASS_4_A0FD0AF254AB6C31_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x164985D0)
#define CLASS_4_A0FD0AF254AB6C31_ONDETACH_OFFSET UNITYSDK_OFFSET(0x164986E0)
#define CLASS_4_A0FD0AF254AB6C31_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x164994F0)
#define CLASS_4_A0FD0AF254AB6C31_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16499270)
#define CLASS_4_A0FD0AF254AB6C31_ONEVENT_OFFSET UNITYSDK_OFFSET(0x16499770)
#define CLASS_4_A0FD0AF254AB6C31_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16499C40)
#define CLASS_4_A0FD0AF254AB6C31_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x16499E20)
#define CLASS_4_A0FD0AF254AB6C31__CTOR_OFFSET UNITYSDK_OFFSET(0x164982C0)

inline static constexpr unsigned int Class_4_A0FD0AF254AB6C31_TypeDefinitionIndex = 58896;

class Class_4_A0FD0AF254AB6C31 : public ::Class_3_627DF5C40DDAA45B<::Class_4_A0FD0AF254AB6C31*>
{
public:
	::Class_2_5C38134D4169B6E0* Field_4_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_1_BBE667D4A3124D9B<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x38
	::Class_2_000597E145D7A42A<::Foundation::Unreal::FGameplayTagContainer>* Field_4_2; // 0x40
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_4_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_000597E145D7A42A<::System::Single>*>*>* Field_4_6; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_1_BBE667D4A3124D9B<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_7; // 0x58
	::Class_1_BBE667D4A3124D9B<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_4_5; // 0x60
	::System::Boolean Field_4_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_26CFEDE224387403(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_26CFEDE224387403_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_112EDABEE31E213B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_112EDABEE31E213B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}

	::Class_1_BBE667D4A3124D9B<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_4_D153EE3D0511EFF9()
	{
		return ((::Class_1_BBE667D4A3124D9B<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_D153EE3D0511EFF9_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::Foundation::Unreal::FGameplayTagContainer>* Method_4_678CD678BAA5EAC9()
	{
		return ((::Class_2_000597E145D7A42A<::Foundation::Unreal::FGameplayTagContainer>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_678CD678BAA5EAC9_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_2_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_4_1F35E689C8821CA8(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_2C704E2262533CBD a2)
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_1F35E689C8821CA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_4_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void Method_4_55F7FEBC05A2DCD6(::Class_1_7B7FC057D30D5C12* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_55F7FEBC05A2DCD6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_4_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_4_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_112EDABEE31E213B_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_112EDABEE31E213B_1_OFFSET))(this, a1);
	}

	::System::Void Method_4_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_2_5C38134D4169B6E0* Method_4_43A46E5F9FAC62B8()
	{
		return ((::Class_2_5C38134D4169B6E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0FD0AF254AB6C31_METHOD_4_43A46E5F9FAC62B8_OFFSET))(this);
	}
};

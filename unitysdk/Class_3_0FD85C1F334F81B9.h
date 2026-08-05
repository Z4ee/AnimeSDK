#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/Container/MapHandle.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigColliderRegisterData.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_0FD85C1F334F81B9_METHOD_3_0B31F58CC25355A3_OFFSET UNITYSDK_OFFSET(0x1468B960)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_1A257BBEEB90EFE7_OFFSET UNITYSDK_OFFSET(0x1468C850)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_1EA0894A9616ED1B_OFFSET UNITYSDK_OFFSET(0x1468B250)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0x1468C7B0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_468FBDA97A415A44_OFFSET UNITYSDK_OFFSET(0x1468BC90)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1468A7C0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_5E7D66DB7C55FE25_OFFSET UNITYSDK_OFFSET(0x1468CA30)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1468BB70)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1468C830)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1468C840)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1468B950)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1468CBB0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_9246CF392538457E_OFFSET UNITYSDK_OFFSET(0x1468BB80)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0x1468AC90)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1468A610)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_AD9D42075F703AA2_1_OFFSET UNITYSDK_OFFSET(0x1468C7C0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_AD9D42075F703AA2_OFFSET UNITYSDK_OFFSET(0x1468B180)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x1468B1F0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_D6DD0510E6C1BC8E_OFFSET UNITYSDK_OFFSET(0x1468B2C0)
#define CLASS_3_0FD85C1F334F81B9_METHOD_3_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1468AE30)
#define CLASS_3_0FD85C1F334F81B9_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1468A8E0)
#define CLASS_3_0FD85C1F334F81B9_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1468A890)
#define CLASS_3_0FD85C1F334F81B9_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1468A770)
#define CLASS_3_0FD85C1F334F81B9_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1468A930)
#define CLASS_3_0FD85C1F334F81B9_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1468A320)
#define CLASS_3_0FD85C1F334F81B9_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1468AAB0)
#define CLASS_3_0FD85C1F334F81B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468A980)
#define CLASS_3_0FD85C1F334F81B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1468ADF0)

inline static constexpr unsigned int Class_3_0FD85C1F334F81B9_TypeDefinitionIndex = 74429;

class Class_3_0FD85C1F334F81B9 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_0FD85C1F334F81B9*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* Field_3_8; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigColliderRegisterData>* Field_3_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Collider*>* Field_3_6; // 0x30
	::MoleMole::EntityHandle Field_3_0; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_5; // 0x48
	::System::Boolean Field_3_10; // 0x50
	::System::Boolean Field_3_11; // 0x51
	::Foundation::ViewObject::Container::MapHandle Field_3_7; // 0x54
	::System::Int32 Field_3_4; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_A1ADC999CFACEB89_1_OFFSET))(this);
	}

	static ::System::Void Method_3_AD9D42075F703AA2(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_AD9D42075F703AA2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1EA0894A9616ED1B(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_1EA0894A9616ED1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_3_0B31F58CC25355A3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_0B31F58CC25355A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_D6DD0510E6C1BC8E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_D6DD0510E6C1BC8E_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_413472096512A213_OFFSET))(this);
	}

	static ::System::Void Method_3_AD9D42075F703AA2_1(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_AD9D42075F703AA2_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_1A257BBEEB90EFE7(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_1A257BBEEB90EFE7_OFFSET))(this, a1);
	}

	::System::Void Method_3_468FBDA97A415A44(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_468FBDA97A415A44_OFFSET))(this, a1);
	}

	::System::Void Method_3_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_3_9246CF392538457E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_9246CF392538457E_OFFSET))(this, a1);
	}

	::System::Void Method_3_5E7D66DB7C55FE25(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_5E7D66DB7C55FE25_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_0FD85C1F334F81B9_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1B8C1C279B44F3E7;
class Class_1_877AA22B04AFB81F;
class Class_1_ED81D7B77E420A69;
class Class_1_EEA0111A28582B57;
class Class_2_79AE422BA06F6D26_68;
class MonoUITableScrollV2;
namespace MoleMole { class MonoUIScrollViewCarousel; }
namespace MoleMole { class UIMainCityMenuPageController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_4BB05A089BD053DD_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11AA2EF0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x11AA21A0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_1_OFFSET UNITYSDK_OFFSET(0x11AA2E00)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x11AA2920)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11AA2DA0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11AA1E30)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11AA2980)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_3F7231A1A77A2A9D_OFFSET UNITYSDK_OFFSET(0x11AA2640)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x11AA2FA0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0x11AA2FF0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x11AA28D0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11AA3090)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_B9AE1C452C6EBDC5_OFFSET UNITYSDK_OFFSET(0x11AA1F10)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x11AA2E60)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_E10B4092FFA54980_OFFSET UNITYSDK_OFFSET(0x11AA2140)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_F647BBE115EC9E63_OFFSET UNITYSDK_OFFSET(0x11AA1EB0)
#define CLASS_1_4BB05A089BD053DD__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA1D90)

inline static constexpr unsigned int Class_1_4BB05A089BD053DD_TypeDefinitionIndex = 45640;

class Class_1_4BB05A089BD053DD : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3; // 0x0
	::MoleMole::MonoUIScrollViewCarousel* Field_1_3; // 0x10
	::Class_1_ED81D7B77E420A69* Field_1_5; // 0x18
	::Class_2_79AE422BA06F6D26_68* Field_1_2; // 0x20
	::MonoUITableScrollV2* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_877AA22B04AFB81F*>* Field_1_8; // 0x30
	::MoleMole::UIMainCityMenuPageController* Field_1_1; // 0x38
	::System::Boolean Field_1_9; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::Boolean Field_1_11; // 0x42
	::System::Single Field_1_12; // 0x44
	::Foundation::Coroutine::CoroutineHandle Field_1_10; // 0x48
	::System::Int32 Field_1_7; // 0x4C

	::System::Void _ctor(::MoleMole::UIMainCityMenuPageController* a1, ::Class_1_EEA0111A28582B57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityMenuPageController*, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_F647BBE115EC9E63(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_F647BBE115EC9E63_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9AE1C452C6EBDC5(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_B9AE1C452C6EBDC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10B4092FFA54980(::Class_1_877AA22B04AFB81F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_E10B4092FFA54980_OFFSET))(this, a1);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_AA08720895458700_OFFSET))(this, a1);
	}

	::Class_1_877AA22B04AFB81F* Method_1_16E792B668863BDD(::Class_1_1B8C1C279B44F3E7* a1)
	{
		return ((::Class_1_877AA22B04AFB81F*(*)(::PVOID, ::Class_1_1B8C1C279B44F3E7*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F7231A1A77A2A9D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_3F7231A1A77A2A9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_877AA22B04AFB81F* Method_1_16E792B668863BDD_1(::Class_1_1B8C1C279B44F3E7* a1)
	{
		return ((::Class_1_877AA22B04AFB81F*(*)(::PVOID, ::Class_1_1B8C1C279B44F3E7*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B176AC622BC2444(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_5B176AC622BC2444_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};

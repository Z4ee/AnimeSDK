#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_185CF183A4DBE553.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_FA793AB1D49D0132;
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8DBB9F995ED75BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123A1260)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x123A1360)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_087A774A085C8C1D_OFFSET UNITYSDK_OFFSET(0x123A2800)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_1DD0C1D5868509DB_OFFSET UNITYSDK_OFFSET(0x123A2C30)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_2D5CDC7AA6C1E8CC_OFFSET UNITYSDK_OFFSET(0x123A2E80)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_33AC7FC6F98CD847_OFFSET UNITYSDK_OFFSET(0x123A2ED0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x123A2B20)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_4E4621980C955843_OFFSET UNITYSDK_OFFSET(0x123A2210)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0x123A1FF0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_8F5FF5706F83BE92_OFFSET UNITYSDK_OFFSET(0x123A2B70)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x123A2DE0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x123A2D80)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_A2695D8CD567F710_OFFSET UNITYSDK_OFFSET(0x123A2670)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x123A18A0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x123A1F50)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123A1FB0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_DA915AA9D331912B_OFFSET UNITYSDK_OFFSET(0x123A1D80)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x123A29C0)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x123A3080)
#define CLASS_2_F8DBB9F995ED75BD_METHOD_2_F11A967D4A30B25B_OFFSET UNITYSDK_OFFSET(0x123A31A0)
#define CLASS_2_F8DBB9F995ED75BD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x123A12A0)
#define CLASS_2_F8DBB9F995ED75BD__CTOR_OFFSET UNITYSDK_OFFSET(0x123A1D20)

inline static constexpr unsigned int Class_2_F8DBB9F995ED75BD_TypeDefinitionIndex = 69266;

class Class_2_F8DBB9F995ED75BD : public ::Foundation::SingletonDisposable_1<::Class_2_F8DBB9F995ED75BD*>
{
public:
	::System::Action_2<::System::Action_1<::System::String*>*, ::System::Boolean>* Field_2_11; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_10; // 0x18
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_2; // 0x20
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_3; // 0x28
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_0; // 0x30
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_1; // 0x38
	::System::Action* Field_2_9; // 0x40
	::System::Single Field_2_4; // 0x48
	::System::Int32 Field_2_6; // 0x4C
	::Foundation::Coroutine::CoroutineHandle Field_2_13; // 0x50
	::System::Boolean Field_2_12; // 0x54
	::System::Boolean Field_2_7; // 0x55
	::System::Boolean Field_2_8; // 0x56
	::System::Boolean Field_2_5; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Void Method_2_4E4621980C955843(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_4E4621980C955843_OFFSET))(this, a1);
	}

	::System::Void Method_2_087A774A085C8C1D(::Enum_3_185CF183A4DBE553 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_185CF183A4DBE553, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_087A774A085C8C1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_8F5FF5706F83BE92(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_8F5FF5706F83BE92_OFFSET))(a1);
	}

	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* Method_2_1DD0C1D5868509DB()
	{
		return ((::MoleMole::UIGeneralLoginCheckDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_1DD0C1D5868509DB_OFFSET))(this);
	}

	::System::Void Method_2_A2695D8CD567F710(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_A2695D8CD567F710_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_2_DA915AA9D331912B(::System::String* a1, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_DA915AA9D331912B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Method_2_2D5CDC7AA6C1E8CC()
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_2D5CDC7AA6C1E8CC_OFFSET))(this);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Method_2_33AC7FC6F98CD847(::System::Boolean a1)
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_33AC7FC6F98CD847_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_F11A967D4A30B25B(::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8DBB9F995ED75BD_METHOD_2_F11A967D4A30B25B_OFFSET))(this, a1, a2);
	}
};

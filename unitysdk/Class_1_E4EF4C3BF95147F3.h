#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EC9E7818B91C3AA0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_307;
class Class_1_2BEAA93324417DF4;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIFormalVersionTipsPopWindowController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x1334C7C0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_4532AB28C1665E9B_OFFSET UNITYSDK_OFFSET(0x1334A9D0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_4BA0E333242074E4_OFFSET UNITYSDK_OFFSET(0x1334C050)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1334B1A0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x1334B070)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_595E641DF1B4387D_1_OFFSET UNITYSDK_OFFSET(0x1334C850)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x1334B390)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_64BC4B8E27F1E780_OFFSET UNITYSDK_OFFSET(0x1334B540)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_66F0204B23534F47_OFFSET UNITYSDK_OFFSET(0x1334B6C0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x13349FF0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_88891DD5C39F7A24_OFFSET UNITYSDK_OFFSET(0x1334B980)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1334C730)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_922310954C75D4D0_OFFSET UNITYSDK_OFFSET(0x1334A410)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1334A290)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_98A399CC8B751747_OFFSET UNITYSDK_OFFSET(0x1334A4D0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1334AE50)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0x1334BD80)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_B6AECBC638DC1B17_OFFSET UNITYSDK_OFFSET(0x1334A200)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_C3D33394915E8979_OFFSET UNITYSDK_OFFSET(0x1334B930)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1334C1E0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13349FB0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_D2EF5984500DDB97_OFFSET UNITYSDK_OFFSET(0x1334AFF0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1334B120)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_DCE2E9F9B8258F9D_OFFSET UNITYSDK_OFFSET(0x1334BEE0)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_E20F22E4C9209F61_OFFSET UNITYSDK_OFFSET(0x1334C230)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_E44EE5EE134229BF_OFFSET UNITYSDK_OFFSET(0x1334AC10)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_F06A20D41C3F8750_OFFSET UNITYSDK_OFFSET(0x1334B890)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_F2CAF9A2AF6A3554_OFFSET UNITYSDK_OFFSET(0x1334AA80)
#define CLASS_1_E4EF4C3BF95147F3_METHOD_1_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x1334C030)
#define CLASS_1_E4EF4C3BF95147F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1334A180)

inline static constexpr unsigned int Class_1_E4EF4C3BF95147F3_TypeDefinitionIndex = 66775;

class Class_1_E4EF4C3BF95147F3 : public ::System::Object
{
public:
	::MoleMole::UITransitionPanelPopWindowController* Field_1_5; // 0x10
	::Class_1_2BEAA93324417DF4* Field_1_8; // 0x18
	::MoleMole::UIFormalVersionTipsPopWindowController* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_307*>* Field_1_7; // 0x28
	::System::Boolean Field_1_0; // 0x30
	::System::Boolean Field_1_4; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::Foundation::Coroutine::CoroutineHandle Field_1_3; // 0x34
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_307* Method_1_B6AECBC638DC1B17()
	{
		return ((::Class_0_16E4307DCC419505_307*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_B6AECBC638DC1B17_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_922310954C75D4D0(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_922310954C75D4D0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_98A399CC8B751747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_98A399CC8B751747_OFFSET))(this, a1);
	}

	::System::Void Method_1_4532AB28C1665E9B(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_4532AB28C1665E9B_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIGeneralTipsPopWindowController* Method_1_F2CAF9A2AF6A3554(::System::String* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::MoleMole::UIGeneralTipsPopWindowController*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_F2CAF9A2AF6A3554_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E44EE5EE134229BF(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_E44EE5EE134229BF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Void Method_1_D2EF5984500DDB97(::Enum_3_EC9E7818B91C3AA0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_EC9E7818B91C3AA0))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_D2EF5984500DDB97_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_307*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_1_64BC4B8E27F1E780(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_64BC4B8E27F1E780_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_F06A20D41C3F8750(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_F06A20D41C3F8750_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3D33394915E8979(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_C3D33394915E8979_OFFSET))(this, a1);
	}

	::MoleMole::UITransitionPanelPopWindowController* Method_1_88891DD5C39F7A24(::System::Single a1, ::System::Action* a2, ::System::Action* a3, ::UnityEngine::AnimationCurve* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UITransitionPanelPopWindowController*(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_88891DD5C39F7A24_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B4B14845111E88EF(::Enum_3_EC9E7818B91C3AA0 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_EC9E7818B91C3AA0, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCE2E9F9B8258F9D(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_DCE2E9F9B8258F9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_F3FE4B1C21DCE6C1_OFFSET))(this);
	}

	::System::Void Method_1_4BA0E333242074E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_4BA0E333242074E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_66F0204B23534F47(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Boolean a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_66F0204B23534F47_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::UITransitionPanelPopWindowController* Method_1_E20F22E4C9209F61(::System::Single a1, ::System::Action* a2, ::System::Action* a3, ::UnityEngine::AnimationCurve* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UITransitionPanelPopWindowController*(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_E20F22E4C9209F61_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_307*))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_595E641DF1B4387D_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EF4C3BF95147F3_METHOD_1_595E641DF1B4387D_1_OFFSET))(this);
	}
};

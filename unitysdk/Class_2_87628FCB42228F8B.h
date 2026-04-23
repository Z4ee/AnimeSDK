#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_87628FCB42228F8B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x119D1DE0)
#define CLASS_2_87628FCB42228F8B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x119D1FD0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_050DB83B6873DE97_OFFSET UNITYSDK_OFFSET(0x119D1710)
#define CLASS_2_87628FCB42228F8B_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x119D10D0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_275E480D0795789A_OFFSET UNITYSDK_OFFSET(0x119D10C0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_1_OFFSET UNITYSDK_OFFSET(0x119D10B0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x119D10A0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x119D1970)
#define CLASS_2_87628FCB42228F8B_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x119D2210)
#define CLASS_2_87628FCB42228F8B_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x119D17D0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0x119D1A80)
#define CLASS_2_87628FCB42228F8B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x119D1CF0)
#define CLASS_2_87628FCB42228F8B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x119D19E0)
#define CLASS_2_87628FCB42228F8B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x119D1A30)
#define CLASS_2_87628FCB42228F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x119D2180)
#define CLASS_2_87628FCB42228F8B__ONBIND_OFFSET UNITYSDK_OFFSET(0x119D0F80)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x119D2280)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x119D22E0)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x119D21B0)

inline static constexpr unsigned int Class_2_87628FCB42228F8B_TypeDefinitionIndex = 66278;

class Class_2_87628FCB42228F8B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_7; // 0x0
	::RPG::Client::SPProgress* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::UI::Slider* Field_2_5; // 0x78
	::UnityEngine::UI::Image* Field_2_6; // 0x80
	::RPG::Client::SPProgress* Field_2_4; // 0x88
	::RPG::GameCore::GameEntity* Field_2_8; // 0x90
	::UnityEngine::UI::Image* Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF_1()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_1_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_275E480D0795789A()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_275E480D0795789A_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_050DB83B6873DE97(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_050DB83B6873DE97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

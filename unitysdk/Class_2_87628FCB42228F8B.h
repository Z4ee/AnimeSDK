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

#define CLASS_2_87628FCB42228F8B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x140150C0)
#define CLASS_2_87628FCB42228F8B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x140152D0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_050DB83B6873DE97_OFFSET UNITYSDK_OFFSET(0x14014940)
#define CLASS_2_87628FCB42228F8B_METHOD_2_275E480D0795789A_OFFSET UNITYSDK_OFFSET(0x14014000)
#define CLASS_2_87628FCB42228F8B_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x14014010)
#define CLASS_2_87628FCB42228F8B_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x14015530)
#define CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_1_OFFSET UNITYSDK_OFFSET(0x14013FF0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x14013FE0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x14014A00)
#define CLASS_2_87628FCB42228F8B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x14014BF0)
#define CLASS_2_87628FCB42228F8B_METHOD_2_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0x14014D00)
#define CLASS_2_87628FCB42228F8B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14015000)
#define CLASS_2_87628FCB42228F8B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x14014C60)
#define CLASS_2_87628FCB42228F8B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x14014CB0)
#define CLASS_2_87628FCB42228F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x140154A0)
#define CLASS_2_87628FCB42228F8B__ONBIND_OFFSET UNITYSDK_OFFSET(0x14013EC0)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14015590)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x140155F0)
#define CLASS_2_87628FCB42228F8B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x140154D0)

inline static constexpr unsigned int Class_2_87628FCB42228F8B_TypeDefinitionIndex = 67219;

class Class_2_87628FCB42228F8B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::RPG::GameCore::GameEntity* Field_2_2; // 0x68
	::RPG::Client::SPProgress* Field_2_3; // 0x70
	::UnityEngine::UI::Slider* Field_2_4; // 0x78
	::UnityEngine::UI::Image* Field_2_5; // 0x80
	::RPG::Client::SPProgress* Field_2_6; // 0x88
	::UnityEngine::UI::Image* Field_2_7; // 0x90
	::UnityEngine::UI::Image* Field_2_8; // 0x98

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

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_B06F516E4459C742_OFFSET))(this);
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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_87628FCB42228F8B_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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

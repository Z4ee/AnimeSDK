#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7C652F56D3757BE2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x136BEA70)
#define CLASS_2_7C652F56D3757BE2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x136BED30)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_050DB83B6873DE97_OFFSET UNITYSDK_OFFSET(0x136BD5B0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x136BDA30)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_275E480D0795789A_OFFSET UNITYSDK_OFFSET(0x136BCDE0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x136BD960)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x136BCDF0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_41A8FA2EB0C75B76_OFFSET UNITYSDK_OFFSET(0x136BDFB0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x136BDBA0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x136BF120)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136BF0C0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5BAC60F11A3CD798_OFFSET UNITYSDK_OFFSET(0x136BD7D0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x136BF060)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x136BD670)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_6CAC3AD3A865E090_OFFSET UNITYSDK_OFFSET(0x136BE020)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x136BE0F0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x136BCDD0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x136BE9D0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x136BD9C0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_CEA3E41971946EA7_OFFSET UNITYSDK_OFFSET(0x136BE390)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0x136BDCB0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x136BE8D0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x136BE810)
#define CLASS_2_7C652F56D3757BE2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x136BDC10)
#define CLASS_2_7C652F56D3757BE2_ONRETURN_OFFSET UNITYSDK_OFFSET(0x136BDC60)
#define CLASS_2_7C652F56D3757BE2__CTOR_OFFSET UNITYSDK_OFFSET(0x136BEFC0)
#define CLASS_2_7C652F56D3757BE2__ONBIND_OFFSET UNITYSDK_OFFSET(0x136BCB50)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x136BF180)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x136BF1E0)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x136BF000)

inline static constexpr unsigned int Class_2_7C652F56D3757BE2_TypeDefinitionIndex = 67220;

class Class_2_7C652F56D3757BE2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::UI::Image* Field_2_5; // 0x60
	::UnityEngine::Transform* Field_2_6; // 0x68
	::RPG::Client::SPProgress* Field_2_7; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x78
	::UnityEngine::UI::Image* Field_2_9; // 0x80
	::UnityEngine::UI::Image* Field_2_10; // 0x88
	::UnityEngine::Animation* Field_2_11; // 0x90
	::UnityEngine::UI::Image* Field_2_12; // 0x98
	::RPG::GameCore::GameEntity* Field_2_13; // 0xA0
	::UnityEngine::Transform* Field_2_14; // 0xA8
	::RPG::Client::SPProgress* Field_2_15; // 0xB0
	::UnityEngine::Transform* Field_2_16; // 0xB8
	::System::Boolean Field_2_17; // 0xC0
	::System::Boolean Field_2_18; // 0xC1
	::System::Single Field_2_19; // 0xC4
	::RPG::GameCore::FixPoint Field_2_20; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_9CC926D36F34DBFF_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_275E480D0795789A()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_275E480D0795789A_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_5BAC60F11A3CD798(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5BAC60F11A3CD798_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_050DB83B6873DE97(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_050DB83B6873DE97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A8FA2EB0C75B76(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_41A8FA2EB0C75B76_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CAC3AD3A865E090(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_6CAC3AD3A865E090_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_CEA3E41971946EA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_CEA3E41971946EA7_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

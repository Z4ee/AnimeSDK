#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0580ABA2219E2E67_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB867F30)
#define CLASS_2_0580ABA2219E2E67_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8680B0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_41146E620D694011_1_OFFSET UNITYSDK_OFFSET(0xB867A90)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0xB867540)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB867A20)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0xB867C50)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0xB867C00)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0xB867CA0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB867DB0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xB867E70)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB867CF0)
#define CLASS_2_0580ABA2219E2E67_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB867050)
#define CLASS_2_0580ABA2219E2E67__CTOR_OFFSET UNITYSDK_OFFSET(0xB867180)
#define CLASS_2_0580ABA2219E2E67__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB8670C0)
#define CLASS_2_0580ABA2219E2E67__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xB8676B0)
#define CLASS_2_0580ABA2219E2E67__ONTICK_OFFSET UNITYSDK_OFFSET(0xB867800)
#define CLASS_2_0580ABA2219E2E67__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB867410)

inline static constexpr unsigned int Class_2_0580ABA2219E2E67_TypeDefinitionIndex = 72026;

class Class_2_0580ABA2219E2E67 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single HGJIBGPGDKK; // 0x0
	// static const ::System::Single LMCEDLDIAAG; // 0x0
	// static const ::System::String* LEELCCBIHPD; // 0x0
	// static const ::System::String* IAFLGGCIHNJ; // 0x0
	::UnityEngine::UI::Image* MPBNGLKAOAC; // 0x190
	::System::Single LLEAJIENJKP; // 0x198
	::System::Single BEPJIFHGKCL; // 0x19C
	::System::Single NHGFCDCCBNL; // 0x1A0
	::System::Single OKFMABJGOPI; // 0x1A4
	::RPG::GameCore::BattleTalkBGType LMLIFDOGNIM; // 0x1A8
	::System::Boolean HOLOCCCIKBH; // 0x1AC
	::System::Boolean CFNBGPMIDEF; // 0x1AD
	::System::Boolean PLNMBALOAJH; // 0x1AE

	::System::Void _ctor(::RPG::GameCore::BattleTalkBGType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTalkBGType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_2_41146E620D694011_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_41146E620D694011_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET))(this);
	}

	::System::Void Method_2_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

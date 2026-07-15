#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0580ABA2219E2E67_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E2C770)
#define CLASS_2_0580ABA2219E2E67_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E2C8F0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E2C2E0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_4A3992F8DBA88C4B_OFFSET UNITYSDK_OFFSET(0x15E2C4E0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0x15E2C490)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x15E2C440)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_8AE37AB20E2066F1_1_OFFSET UNITYSDK_OFFSET(0x15E2C350)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_8AE37AB20E2066F1_OFFSET UNITYSDK_OFFSET(0x15E2BE80)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15E2C5F0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15E2C6B0)
#define CLASS_2_0580ABA2219E2E67_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15E2C530)
#define CLASS_2_0580ABA2219E2E67_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15E2B990)
#define CLASS_2_0580ABA2219E2E67__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2BAC0)
#define CLASS_2_0580ABA2219E2E67__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15E2BA00)
#define CLASS_2_0580ABA2219E2E67__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x15E2BF70)
#define CLASS_2_0580ABA2219E2E67__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E2C0C0)
#define CLASS_2_0580ABA2219E2E67__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E2BD50)

inline static constexpr unsigned int Class_2_0580ABA2219E2E67_TypeDefinitionIndex = 68763;

class Class_2_0580ABA2219E2E67 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::UI::Image* Field_2_4; // 0x180
	::System::Single Field_2_5; // 0x188
	::System::Boolean Field_2_6; // 0x18C
	::System::Boolean Field_2_7; // 0x18D
	::System::Boolean Field_2_8; // 0x18E
	::System::Single Field_2_9; // 0x190
	::System::Single Field_2_10; // 0x194
	::System::Single Field_2_11; // 0x198
	::RPG::GameCore::BattleTalkBGType Field_2_12; // 0x19C

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

	::System::Void Method_2_8AE37AB20E2066F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_8AE37AB20E2066F1_OFFSET))(this);
	}

	::System::Void Method_2_8AE37AB20E2066F1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_8AE37AB20E2066F1_1_OFFSET))(this);
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

	::System::Void Method_2_4A3992F8DBA88C4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580ABA2219E2E67_METHOD_2_4A3992F8DBA88C4B_OFFSET))(this);
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

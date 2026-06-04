#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_380408F37982E2F9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA686710)
#define CLASS_2_380408F37982E2F9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA686890)
#define CLASS_2_380408F37982E2F9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA686280)
#define CLASS_2_380408F37982E2F9_METHOD_2_6A6A96FBD090C99D_1_OFFSET UNITYSDK_OFFSET(0xA6862F0)
#define CLASS_2_380408F37982E2F9_METHOD_2_6A6A96FBD090C99D_OFFSET UNITYSDK_OFFSET(0xA685DF0)
#define CLASS_2_380408F37982E2F9_METHOD_2_913947B6596EB50A_1_OFFSET UNITYSDK_OFFSET(0xA6864C0)
#define CLASS_2_380408F37982E2F9_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xA686470)
#define CLASS_2_380408F37982E2F9_METHOD_2_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0xA686510)
#define CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA6865F0)
#define CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xA686680)
#define CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA686560)
#define CLASS_2_380408F37982E2F9_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA6859C0)
#define CLASS_2_380408F37982E2F9__CTOR_OFFSET UNITYSDK_OFFSET(0xA685AF0)
#define CLASS_2_380408F37982E2F9__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA685A30)
#define CLASS_2_380408F37982E2F9__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xA685F70)
#define CLASS_2_380408F37982E2F9__ONTICK_OFFSET UNITYSDK_OFFSET(0xA6860C0)
#define CLASS_2_380408F37982E2F9__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA685D30)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA686BF0)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA686C50)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA6869F0)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA686A70)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xA686B30)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA686B90)
#define CLASS_2_380408F37982E2F9___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA686AD0)

inline static constexpr unsigned int Class_2_380408F37982E2F9_TypeDefinitionIndex = 67296;

class Class_2_380408F37982E2F9 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::UI::Image* Field_2_4; // 0x180
	::System::Single Field_2_5; // 0x188
	::System::Single Field_2_6; // 0x18C
	::RPG::GameCore::BattleTalkBGType Field_2_7; // 0x190
	::System::Single Field_2_8; // 0x194
	::System::Boolean Field_2_9; // 0x198
	::System::Boolean Field_2_10; // 0x199
	::System::Boolean Field_2_11; // 0x19A
	::System::Single Field_2_12; // 0x19C

	::System::Void _ctor(::RPG::GameCore::BattleTalkBGType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTalkBGType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A6A96FBD090C99D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_6A6A96FBD090C99D_OFFSET))(this);
	}

	::System::Void Method_2_6A6A96FBD090C99D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_6A6A96FBD090C99D_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_913947B6596EB50A_1_OFFSET))(this);
	}

	::System::Void Method_2_932BC234D35144E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_932BC234D35144E8_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380408F37982E2F9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

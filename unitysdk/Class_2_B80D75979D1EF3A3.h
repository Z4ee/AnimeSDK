#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_B80D75979D1EF3A3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DF1110)
#define CLASS_2_B80D75979D1EF3A3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DF1250)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8DF0D10)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_5F42FB087225C58F_OFFSET UNITYSDK_OFFSET(0x8DF0F10)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_913947B6596EB50A_1_OFFSET UNITYSDK_OFFSET(0x8DF0EC0)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x8DF0E70)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_98CD66A7F3C102A5_1_OFFSET UNITYSDK_OFFSET(0x8DF0D80)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x8DF0910)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8DF0FF0)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8DF1080)
#define CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8DF0F60)
#define CLASS_2_B80D75979D1EF3A3_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8DF04F0)
#define CLASS_2_B80D75979D1EF3A3__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF0620)
#define CLASS_2_B80D75979D1EF3A3__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8DF0560)
#define CLASS_2_B80D75979D1EF3A3__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x8DF0A00)
#define CLASS_2_B80D75979D1EF3A3__ONTICK_OFFSET UNITYSDK_OFFSET(0x8DF0B50)
#define CLASS_2_B80D75979D1EF3A3__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8DF0850)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DF1590)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DF15F0)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8DF1370)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8DF1400)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x8DF14C0)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8DF1520)
#define CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8DF1460)

inline static constexpr unsigned int Class_2_B80D75979D1EF3A3_TypeDefinitionIndex = 58986;

class Class_2_B80D75979D1EF3A3 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::UnityEngine::UI::Image* Field_2_0; // 0x180
	::System::Single Field_2_3; // 0x188
	::System::Single Field_2_6; // 0x18C
	::RPG::GameCore::BattleTalkBGType Field_2_2; // 0x190
	::System::Single Field_2_8; // 0x194
	::System::Single Field_2_7; // 0x198
	::System::Boolean Field_2_4; // 0x19C
	::System::Boolean Field_2_5; // 0x19D
	::System::Boolean Field_2_1; // 0x19E

	::System::Void _ctor(::RPG::GameCore::BattleTalkBGType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTalkBGType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_2_98CD66A7F3C102A5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_98CD66A7F3C102A5_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_913947B6596EB50A_1_OFFSET))(this);
	}

	::System::Void Method_2_5F42FB087225C58F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_5F42FB087225C58F_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D75979D1EF3A3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

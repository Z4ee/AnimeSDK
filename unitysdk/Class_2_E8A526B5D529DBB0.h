#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelInfiniteWaveProgressChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E8A526B5D529DBB0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B56E60)
#define CLASS_2_E8A526B5D529DBB0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B57190)
#define CLASS_2_E8A526B5D529DBB0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B55190)
#define CLASS_2_E8A526B5D529DBB0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x10B551B0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x10B554B0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10B56110)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x10B56260)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10B553A0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10B551C0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10B56050)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x10B55840)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B55780)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x10B568E0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_2_OFFSET UNITYSDK_OFFSET(0x10B56C20)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10B566C0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4A924CEE40144255_OFFSET UNITYSDK_OFFSET(0x10B55680)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10B57580)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B57520)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5D5817B6B3027F40_OFFSET UNITYSDK_OFFSET(0x10B56430)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x10B556D0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0x10B55D00)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10B56E00)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10B56CB0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x10B56A20)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x10B567A0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x10B558D0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10B56D10)
#define CLASS_2_E8A526B5D529DBB0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B551A0)
#define CLASS_2_E8A526B5D529DBB0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B57480)
#define CLASS_2_E8A526B5D529DBB0__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B54C70)
#define CLASS_2_E8A526B5D529DBB0__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B56970)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B57650)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B576B0)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B574C0)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B575E0)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_TypeDefinitionIndex = 58493;

class Class_2_E8A526B5D529DBB0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	// static const ::System::Single Field_2_23; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::UnityEngine::UI::Image* Field_2_7; // 0x60
	::RPG::GameCore::LevelDataComponent* Field_2_13; // 0x68
	::UnityEngine::Animation* Field_2_6; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_12; // 0x78
	::UnityEngine::RectTransform* Field_2_8; // 0x80
	::UnityEngine::UI::Image* Field_2_1; // 0x88
	::UnityEngine::Transform* Field_2_10; // 0x90
	::UnityEngine::Transform* Field_2_9; // 0x98
	::RPG::Client::LocalizedText* Field_2_5; // 0xA0
	::UnityEngine::Transform* Field_2_2; // 0xA8
	::RPG::Client::LocalizedText* Field_2_4; // 0xB0
	::RPG::Client::EvolveBuildLevel* Field_2_28; // 0xB8
	::System::UInt32 Field_2_29; // 0xC0
	::System::Single Field_2_17; // 0xC4
	::System::UInt32 Field_2_25; // 0xC8
	::System::Single Field_2_15; // 0xCC
	::System::Single Field_2_24; // 0xD0
	::System::Single Field_2_3; // 0xD4
	::System::Single Field_2_14; // 0xD8
	::System::Boolean Field_2_21; // 0xDC
	::System::Boolean Field_2_22; // 0xDD
	::System::Boolean Field_2_19; // 0xDE
	::System::Boolean Field_2_20; // 0xDF
	::System::Int32 _Index_k__BackingField; // 0xE0
	::System::Single Field_2_16; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_2_4A924CEE40144255()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4A924CEE40144255_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_5D5817B6B3027F40(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5D5817B6B3027F40_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A002848F130F70CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A002848F130F70CA_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

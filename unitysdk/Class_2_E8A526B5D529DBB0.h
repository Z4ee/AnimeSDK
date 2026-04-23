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

#define CLASS_2_E8A526B5D529DBB0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC0CDF50)
#define CLASS_2_E8A526B5D529DBB0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC0CE230)
#define CLASS_2_E8A526B5D529DBB0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC0CC200)
#define CLASS_2_E8A526B5D529DBB0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC0CC220)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xC0CC530)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC0CD1F0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xC0CD350)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC0CC420)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC0CC230)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC0CD130)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC0CC8F0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC0CC820)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0xC0CD9D0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_2_OFFSET UNITYSDK_OFFSET(0xC0CDD10)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xC0CD7B0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4A924CEE40144255_OFFSET UNITYSDK_OFFSET(0xC0CC710)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xC0CE5D0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC0CE570)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5D5817B6B3027F40_OFFSET UNITYSDK_OFFSET(0xC0CD520)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xC0CC760)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0xC0CCDC0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xC0CDEF0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xC0CDDA0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xC0CDB10)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0xC0CD890)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0xC0CC980)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC0CDE00)
#define CLASS_2_E8A526B5D529DBB0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC0CC210)
#define CLASS_2_E8A526B5D529DBB0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0CE4D0)
#define CLASS_2_E8A526B5D529DBB0__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0CBF10)
#define CLASS_2_E8A526B5D529DBB0__ONTICK_OFFSET UNITYSDK_OFFSET(0xC0CDA60)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC0CE6A0)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC0CE700)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0CE510)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xC0CE630)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_TypeDefinitionIndex = 65787;

class Class_2_E8A526B5D529DBB0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	// static const ::System::Single Field_2_23; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::UnityEngine::Transform* Field_2_9; // 0x60
	::RPG::Client::LocalizedText* Field_2_5; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::UnityEngine::Transform* Field_2_2; // 0x78
	::RPG::GameCore::LevelDataComponent* Field_2_13; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_12; // 0x88
	::UnityEngine::Animation* Field_2_6; // 0x90
	::RPG::Client::EvolveBuildLevel* Field_2_28; // 0x98
	::UnityEngine::UI::Image* Field_2_1; // 0xA0
	::UnityEngine::RectTransform* Field_2_8; // 0xA8
	::UnityEngine::UI::Image* Field_2_7; // 0xB0
	::RPG::Client::LocalizedText* Field_2_4; // 0xB8
	::System::Int32 _Index_k__BackingField; // 0xC0
	::System::UInt32 Field_2_29; // 0xC4
	::System::Single Field_2_14; // 0xC8
	::System::Single Field_2_24; // 0xCC
	::System::UInt32 Field_2_25; // 0xD0
	::System::Single Field_2_16; // 0xD4
	::System::Single Field_2_15; // 0xD8
	::System::Single Field_2_17; // 0xDC
	::System::Boolean Field_2_21; // 0xE0
	::System::Boolean Field_2_22; // 0xE1
	::System::Boolean Field_2_20; // 0xE2
	::System::Boolean Field_2_19; // 0xE3
	::System::Single Field_2_3; // 0xE4

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

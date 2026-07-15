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

#define CLASS_2_AD1D66AC79AA489C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16211950)
#define CLASS_2_AD1D66AC79AA489C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16211C80)
#define CLASS_2_AD1D66AC79AA489C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1620FA70)
#define CLASS_2_AD1D66AC79AA489C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1620FA90)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1620FAD0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x1620FE50)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1620FCC0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x16211200)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x16211060)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x16210240)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x162101B0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x162100E0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x162109D0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x162115F0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16210F80)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_7E69B386DB903252_OFFSET UNITYSDK_OFFSET(0x16210070)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x16211800)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_975D38033589EC8D_OFFSET UNITYSDK_OFFSET(0x16210CD0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0x162105C0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16210910)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16211710)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x162113B0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x16210B70)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16211680)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x16210020)
#define CLASS_2_AD1D66AC79AA489C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1620FA80)
#define CLASS_2_AD1D66AC79AA489C__CTOR_OFFSET UNITYSDK_OFFSET(0x16211F80)
#define CLASS_2_AD1D66AC79AA489C__ONBIND_OFFSET UNITYSDK_OFFSET(0x1620F780)
#define CLASS_2_AD1D66AC79AA489C__ONTICK_OFFSET UNITYSDK_OFFSET(0x16211300)

inline static constexpr unsigned int Class_2_AD1D66AC79AA489C_TypeDefinitionIndex = 68158;

class Class_2_AD1D66AC79AA489C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_5; // 0x60
	::UnityEngine::UI::Image* Field_2_6; // 0x68
	::RPG::Client::EvolveBuildLevel* Field_2_7; // 0x70
	::UnityEngine::Transform* Field_2_8; // 0x78
	::UnityEngine::Animation* Field_2_9; // 0x80
	::RPG::Client::LocalizedText* Field_2_10; // 0x88
	::UnityEngine::Transform* Field_2_11; // 0x90
	::UnityEngine::RectTransform* Field_2_12; // 0x98
	::RPG::Client::LocalizedText* Field_2_13; // 0xA0
	::UnityEngine::UI::Image* Field_2_14; // 0xA8
	::UnityEngine::Transform* Field_2_15; // 0xB0
	::RPG::GameCore::LevelDataComponent* Field_2_16; // 0xB8
	::System::Single Field_2_17; // 0xC0
	::System::UInt32 Field_2_18; // 0xC4
	::System::Single Field_2_19; // 0xC8
	::System::Single Field_2_20; // 0xCC
	::System::Int32 _Index_k__BackingField; // 0xD0
	::System::UInt32 Field_2_22; // 0xD4
	::System::Single Field_2_23; // 0xD8
	::System::Single Field_2_24; // 0xDC
	::System::Single Field_2_25; // 0xE0
	::System::Boolean Field_2_26; // 0xE4
	::System::Boolean Field_2_27; // 0xE5
	::System::Boolean Field_2_28; // 0xE6
	::System::Boolean Field_2_29; // 0xE7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_975D38033589EC8D(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_975D38033589EC8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E69B386DB903252(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_7E69B386DB903252_OFFSET))(this, a1);
	}

	::System::Void Method_2_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_A1F9BFB7EBB25DAC_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_926A87EF7B2C87F9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

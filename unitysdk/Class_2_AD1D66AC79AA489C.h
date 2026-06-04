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

#define CLASS_2_AD1D66AC79AA489C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B5DD60)
#define CLASS_2_AD1D66AC79AA489C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13B5E0A0)
#define CLASS_2_AD1D66AC79AA489C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x13B5C010)
#define CLASS_2_AD1D66AC79AA489C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x13B5C030)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x13B5C040)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13B5C380)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x13B5D6A0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x13B5D500)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x13B5C760)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13B5C6D0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13B5C610)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x13B5DAA0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x13B5D420)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13B5E4A0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13B5E440)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_7E69B386DB903252_OFFSET UNITYSDK_OFFSET(0x13B5C5A0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13B5CEB0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x13B5DC50)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_975D38033589EC8D_OFFSET UNITYSDK_OFFSET(0x13B5D170)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x13B5CAE0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13B5DB30)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x13B5CDF0)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x13B5D860)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x13B5D010)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13B5C230)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13B5DB90)
#define CLASS_2_AD1D66AC79AA489C_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x13B5C550)
#define CLASS_2_AD1D66AC79AA489C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x13B5C020)
#define CLASS_2_AD1D66AC79AA489C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B5E3A0)
#define CLASS_2_AD1D66AC79AA489C__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B5BD20)
#define CLASS_2_AD1D66AC79AA489C__ONTICK_OFFSET UNITYSDK_OFFSET(0x13B5D7B0)
#define CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B5E560)
#define CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13B5E5C0)
#define CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B5E3E0)
#define CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13B5E500)

inline static constexpr unsigned int Class_2_AD1D66AC79AA489C_TypeDefinitionIndex = 66721;

class Class_2_AD1D66AC79AA489C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Animation* Field_2_5; // 0x60
	::UnityEngine::RectTransform* Field_2_6; // 0x68
	::RPG::Client::EvolveBuildLevel* Field_2_7; // 0x70
	::RPG::Client::LocalizedText* Field_2_8; // 0x78
	::UnityEngine::Transform* Field_2_9; // 0x80
	::UnityEngine::UI::Image* Field_2_10; // 0x88
	::RPG::Client::LocalizedText* Field_2_11; // 0x90
	::RPG::GameCore::LevelUIComponent* Field_2_12; // 0x98
	::UnityEngine::UI::Image* Field_2_13; // 0xA0
	::UnityEngine::Transform* Field_2_14; // 0xA8
	::RPG::GameCore::LevelDataComponent* Field_2_15; // 0xB0
	::UnityEngine::Transform* Field_2_16; // 0xB8
	::System::UInt32 Field_2_17; // 0xC0
	::System::Single Field_2_18; // 0xC4
	::System::Int32 _Index_k__BackingField; // 0xC8
	::System::Single Field_2_20; // 0xCC
	::System::Boolean Field_2_21; // 0xD0
	::System::Boolean Field_2_22; // 0xD1
	::System::Boolean Field_2_23; // 0xD2
	::System::Boolean Field_2_24; // 0xD3
	::System::Single Field_2_25; // 0xD4
	::System::Single Field_2_26; // 0xD8
	::System::UInt32 Field_2_27; // 0xDC
	::System::Single Field_2_28; // 0xE0
	::System::Single Field_2_29; // 0xE4

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

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
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

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_937F8473216A3162_OFFSET))(this);
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

	::System::Void Method_2_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_1290EA767C459179_OFFSET))(this);
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

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F7C31F3BFBD430(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_94F7C31F3BFBD430_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

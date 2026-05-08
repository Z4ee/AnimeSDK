#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x17D5DFB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x17D61210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1258A420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12589E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0x17D5FBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1C0B95230B6C58A9_1_OFFSET UNITYSDK_OFFSET(0x17D60AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1C0B95230B6C58A9_OFFSET UNITYSDK_OFFSET(0x17D603D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1258A4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x1258A730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1258A2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17D61770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x17D616B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x17D619A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x17D618D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x17D61870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x1258A010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0x17D619F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x1258A410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x1258A690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x17D5DD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x17D5E7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x1258A570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1258A720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x17D617B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x17D61930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17D61700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x17D613C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1258A430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17D61820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x17D5E1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1258A620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1258A370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x17D612D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x1258A630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x17D61590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x1258A650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_C6534C82224A6491_OFFSET UNITYSDK_OFFSET(0x17D5EA50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1258A380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D5DF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x17D61660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x1258A640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1258A6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1258A740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1258A2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1258A0B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessOldCRT_TypeDefinitionIndex = 69135;

	class ESPostProcessOldCRT : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::OldCRT*>
	{
	public:
		::MoleMole::Config::ConfigEntityOldCRTEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_pattern; // 0xB8
		::UnityEngine::Vector2 _VolDefault_tiling; // 0xC0
		::System::Single _VolDefault_scanlineBrightness; // 0xC8
		::System::Single _VolDefault_fade; // 0xCC
		::System::Boolean _VolPreVal_pattern_overrideState; // 0xD0
		::UnityEngine::Texture* _VolPreVal_pattern; // 0xD8
		::System::Boolean _VolPreVal_tiling_overrideState; // 0xE0
		::UnityEngine::Vector2 _VolPreVal_tiling; // 0xE4
		::System::Boolean _VolPreVal_scanlineBrightness_overrideState; // 0xEC
		::System::Single _VolPreVal_scanlineBrightness; // 0xF0
		::System::Boolean _VolPreVal_fade_overrideState; // 0xF4
		::System::Single _VolPreVal_fade; // 0xF8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_tiling; // 0xFC
		::UnityEngine::Vector2 _TimelineCurveLastVal_tiling; // 0x104
		::System::Single _TimelineCurveFirstVal_scanlineBrightness; // 0x10C
		::System::Single _TimelineCurveLastVal_scanlineBrightness; // 0x110
		::System::Single _TimelineCurveFirstVal_fade; // 0x114
		::System::Single _TimelineCurveLastVal_fade; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pattern_FieldHandleType; // 0x11C
		::UnityEngine::Texture* ESPP_pattern; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tiling_FieldHandleType; // 0x128
		::System::Boolean ESPP_tiling_UseIt; // 0x12C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_tiling; // 0x130
		::System::Boolean ESPP_tiling_EnableFade; // 0x138
		::System::Boolean ESPP_tiling_EnableOverrideDefaultValue; // 0x139
		::UnityEngine::Vector2 ESPP_tiling_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineBrightness_FieldHandleType; // 0x144
		::System::Boolean ESPP_scanlineBrightness_UseIt; // 0x148
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineBrightness; // 0x150
		::System::Boolean ESPP_scanlineBrightness_EnableFade; // 0x158
		::System::Boolean ESPP_scanlineBrightness_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_scanlineBrightness_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fade_FieldHandleType; // 0x160
		::System::Boolean ESPP_fade_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fade; // 0x168
		::System::Boolean ESPP_fade_EnableFade; // 0x170
		::System::Boolean ESPP_fade_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_fade_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_C6534C82224A6491(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_C6534C82224A6491_OFFSET))(this, a1);
		}

		::System::Void Method_5_186AA054E8326968(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_186AA054E8326968_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C0B95230B6C58A9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1C0B95230B6C58A9_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C0B95230B6C58A9_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1C0B95230B6C58A9_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_1092C5537716905B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1092C5537716905B_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_538B1538FFCC3586(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_538B1538FFCC3586_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18406110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0x18403110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x18405F70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x18406010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x18406390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x184030B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x184024D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x18406450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18406200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18405CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x18405C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18405820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x18405F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x18405E50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18405DF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x18406440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x18406290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6C9DBC133582E3B3_1_OFFSET UNITYSDK_OFFSET(0x184055F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6C9DBC133582E3B3_OFFSET UNITYSDK_OFFSET(0x184053C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x184061E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18406430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x18405D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x18405EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18405C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_95C7F1C0E0BA5261_OFFSET UNITYSDK_OFFSET(0x184049F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x18402320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x18405970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18406080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18405DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x184061D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x184061B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x18405880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x184062B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18405B10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x184062C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18405FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18406120)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18402490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x18405BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x18402780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x184062A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18406300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x184061F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x184061C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x18406070)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorCurves_TypeDefinitionIndex = 54389;

	class ESPostProcessColorCurves : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ColorCurves*>
	{
	public:
		::MoleMole::Config::ConfigEntityColorCurvesEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_master; // 0xB8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_red; // 0xC0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_green; // 0xC8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_blue; // 0xD0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsHue; // 0xD8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsSat; // 0xE0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_satVsSat; // 0xE8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_lumVsSat; // 0xF0
		::System::Boolean _VolPreVal_master_overrideState; // 0xF8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_master; // 0x100
		::System::Boolean _VolPreVal_red_overrideState; // 0x108
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_red; // 0x110
		::System::Boolean _VolPreVal_green_overrideState; // 0x118
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_green; // 0x120
		::System::Boolean _VolPreVal_blue_overrideState; // 0x128
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_blue; // 0x130
		::System::Boolean _VolPreVal_hueVsHue_overrideState; // 0x138
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsHue; // 0x140
		::System::Boolean _VolPreVal_hueVsSat_overrideState; // 0x148
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsSat; // 0x150
		::System::Boolean _VolPreVal_satVsSat_overrideState; // 0x158
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_satVsSat; // 0x160
		::System::Boolean _VolPreVal_lumVsSat_overrideState; // 0x168
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_lumVsSat; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_master_FieldHandleType; // 0x178
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_master; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_red_FieldHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_red; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_green_FieldHandleType; // 0x198
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_green; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blue_FieldHandleType; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_blue; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsHue_FieldHandleType; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsHue; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsSat_FieldHandleType; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsSat; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_satVsSat_FieldHandleType; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_satVsSat; // 0x1E0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lumVsSat_FieldHandleType; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_lumVsSat; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_186AA054E8326968(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_186AA054E8326968_OFFSET))(this, a1);
		}

		::System::Void Method_5_95C7F1C0E0BA5261(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_95C7F1C0E0BA5261_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C9DBC133582E3B3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6C9DBC133582E3B3_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C9DBC133582E3B3_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6C9DBC133582E3B3_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_2_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_2685B6183E614529_3_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}
	};
}

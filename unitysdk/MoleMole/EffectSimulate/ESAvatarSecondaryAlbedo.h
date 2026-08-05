#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/DistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaskChannelType.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_00B3DEE0F5490F85_OFFSET UNITYSDK_OFFSET(0x1B938F10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_10_OFFSET UNITYSDK_OFFSET(0x1B939D60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_11_OFFSET UNITYSDK_OFFSET(0x1B939DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_12_OFFSET UNITYSDK_OFFSET(0x1B939E20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_13_OFFSET UNITYSDK_OFFSET(0x1B939E60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B939440)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1B939480)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1B9394C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1B939500)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1B939540)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1B9395C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x1B939640)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_8_OFFSET UNITYSDK_OFFSET(0x1B939680)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_9_OFFSET UNITYSDK_OFFSET(0x1B9396C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B939110)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B939150)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1B938D40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_1_OFFSET UNITYSDK_OFFSET(0x1B939600)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_2_OFFSET UNITYSDK_OFFSET(0x1B939DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1B939580)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_CDACCAEDCD6BDF3A_OFFSET UNITYSDK_OFFSET(0x1B939700)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B9391C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1B939190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9391D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarSecondaryAlbedo_TypeDefinitionIndex = 51410;

	class ESAvatarSecondaryAlbedo : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_SecondaryAlbedoColor; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SecondaryAlbedoColor; // 0xC0
		::System::Boolean use_SecondaryAlbedoTex; // 0xC8
		::UnityEngine::Texture* AMC_SecondaryAlbedoTex; // 0xD0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_SecondaryAlbedoTex_ST; // 0xD8
		::System::Boolean AMC_SecondaryAlbedoUseUV2; // 0xE0
		::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType AMC_SecondaryAlbedoChannel; // 0xE1
		::System::Boolean AMC_SecondaryAlbedoUseMask; // 0xE2
		::System::Boolean use_SecondaryAlbedoMaskTex; // 0xE3
		::UnityEngine::Texture* AMC_SecondaryAlbedoMaskTex; // 0xE8
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_SecondaryAlbedoMaskTex_ST; // 0xF0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaskChannelType AMC_SecondaryAlbedoMaskChannel; // 0xF8
		::System::Boolean use_SecondaryAlbedoTexSpeed; // 0xF9
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_SecondaryAlbedoTexSpeed; // 0x100
		::System::Boolean AMC_SecondaryAlbedoUseDistortion; // 0x108
		::System::Boolean use_SecondaryAlbedoDistortionTex; // 0x109
		::UnityEngine::Texture* AMC_SecondaryAlbedoDistortionTex; // 0x110
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_SecondaryAlbedoDistortionTex_ST; // 0x118
		::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType AMC_SecondaryAlbedoDistortionChannel; // 0x120
		::System::Boolean use_SecondaryAlbedoDistortionStrength; // 0x121
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SecondaryAlbedoDistortionStrength; // 0x128
		::System::Boolean use_SecondaryAlbedoDistortionUVSpeed; // 0x130
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_SecondaryAlbedoDistortionUVSpeed; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_00B3DEE0F5490F85(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_00B3DEE0F5490F85_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_7_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_8_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_9_OFFSET))(this);
		}

		::System::Void Method_4_CDACCAEDCD6BDF3A(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_CDACCAEDCD6BDF3A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_10_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_11_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_9B92C44D5842AA8A_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_12_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_13()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYALBEDO_METHOD_4_128774387667156B_13_OFFSET))(this);
		}
	};
}

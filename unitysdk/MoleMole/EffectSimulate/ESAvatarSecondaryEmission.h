#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/SecondaryEmissionBlendMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x1B826010)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_10_OFFSET UNITYSDK_OFFSET(0x1B826240)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_11_OFFSET UNITYSDK_OFFSET(0x1B826280)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_12_OFFSET UNITYSDK_OFFSET(0x1B826300)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_13_OFFSET UNITYSDK_OFFSET(0x1B826340)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_14_OFFSET UNITYSDK_OFFSET(0x1B826380)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_15_OFFSET UNITYSDK_OFFSET(0x1B8263C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B825830)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1B825870)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1B8258B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1B825F50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1B825F90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1B825FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x1B826170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_8_OFFSET UNITYSDK_OFFSET(0x1B8261B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_9_OFFSET UNITYSDK_OFFSET(0x1B826200)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B824440)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_2EC08A3DF3EE073C_OFFSET UNITYSDK_OFFSET(0x1B824210)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_3BB5D09A058A2EED_OFFSET UNITYSDK_OFFSET(0x1B825950)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_50EDCF53F0176FCF_OFFSET UNITYSDK_OFFSET(0x1B824510)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_550E8CE56610A57E_OFFSET UNITYSDK_OFFSET(0x1B8261F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B824480)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1B824040)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_1_OFFSET UNITYSDK_OFFSET(0x1B825F10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_2_OFFSET UNITYSDK_OFFSET(0x1B8262C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1B8258F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B824500)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B825930)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1B8244D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B825360)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarSecondaryEmission_TypeDefinitionIndex = 57820;

	class ESAvatarSecondaryEmission : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean AMC_SecondaryEmissionUseUV2; // 0xB8
		::System::Boolean AMC_MultiplyAlbedo; // 0xB9
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_ColorOverrideAlbedo; // 0xC0
		::System::Byte AMC_ColorOverrideAlbedo_Vector4Mask; // 0xC8
		::System::Boolean use_ColorOverrideAlbedo_Vector4_W; // 0xC9
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ColorOverrideAlbedo_Vector4_W; // 0xD0
		::System::Boolean use_MatCapUSpeedFx; // 0xD8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_MatCapUSpeedFx; // 0xE0
		::System::Boolean use_MatCapColorTintFx; // 0xE8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_MatCapColorTintFx; // 0xF0
		::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType AMC_SecondaryEmissionChannel; // 0xF8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaskChannelType AMC_SecondaryEmissionMaskChannel; // 0xF9
		::System::Boolean use_SecondaryEmissionTex; // 0xFA
		::UnityEngine::Texture* AMC_SecondaryEmissionTex; // 0x100
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_SecondaryEmissionTex_ST; // 0x108
		::System::Boolean use_SecondaryEmissionColor; // 0x110
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SecondaryEmissionColor; // 0x118
		::System::Boolean use_SecondaryEmissionMaskTex; // 0x120
		::UnityEngine::Texture* AMC_SecondaryEmissionMaskTex; // 0x128
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_SecondaryEmissionMaskTex_ST; // 0x130
		::System::Boolean use_SecondaryEmissionTexSpeed; // 0x138
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_SecondaryEmissionTexSpeed; // 0x140
		::System::Boolean use_MatCapBumpScaleFx; // 0x148
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_MatCapBumpScaleFx; // 0x150
		::System::Boolean AMC_VertexOffset; // 0x158
		::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode AMC_MatCapFX; // 0x159
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* m_stTexSpeedValMap; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* m_stLastTexSTValMap; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* m_stLastMaskTexSTValMap; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_2EC08A3DF3EE073C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_2EC08A3DF3EE073C_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::Void Method_4_50EDCF53F0176FCF(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_50EDCF53F0176FCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_4_3BB5D09A058A2EED(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_3BB5D09A058A2EED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_9B92C44D5842AA8A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::Boolean Method_4_0EB2899F45F512FE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_0EB2899F45F512FE_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_7_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_8_OFFSET))(this);
		}

		::System::Void Method_4_550E8CE56610A57E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_550E8CE56610A57E_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_9_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_10_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_11_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_9B92C44D5842AA8A_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_12_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_13()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_13_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_14()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_14_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_15()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARSECONDARYEMISSION_METHOD_4_128774387667156B_15_OFFSET))(this);
		}
	};
}

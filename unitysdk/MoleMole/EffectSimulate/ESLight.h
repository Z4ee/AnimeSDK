#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"

namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x19161580)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x19162270)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x191608B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x191632D0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x19163520)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x19163080)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2D6A717E40A58BC9_OFFSET UNITYSDK_OFFSET(0x19160970)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x19163400)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_36714E99DCDF3D04_OFFSET UNITYSDK_OFFSET(0x19161DF0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x19162490)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x19162F40)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x19163240)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0x19163370)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19160930)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x19163120)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x19163070)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x19162540)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x19162FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x191623D0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x19163510)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x19162FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x191624D0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x19162420)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x191631B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CBE9026C6B9DC823_OFFSET UNITYSDK_OFFSET(0x191628C0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x19163480)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DB3ED8CB2B8E8B5D_OFFSET UNITYSDK_OFFSET(0x191611B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_FF4D5A5D6DBC9904_OFFSET UNITYSDK_OFFSET(0x19161700)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19162F30)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x19162AA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLight_TypeDefinitionIndex = 80227;

	class ESLight : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Boolean* StaticGet_CAN_IN_JOB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ESLight_TypeDefinitionIndex)->GetStaticField(0xF440);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::System::Boolean m_bHasSetVal; // 0x58
		::System::Single m_RangeValCache; // 0x5C
		::System::Boolean m_bRangeChanged; // 0x60
		::System::Single m_IndirectMultiplierValCache; // 0x64
		::System::Boolean m_bIndirectMultiplierChanged; // 0x68
		::System::Single m_InnerSpotAngleValCache; // 0x6C
		::System::Boolean m_bInnerSpotAngleChanged; // 0x70
		::System::Single m_OuterSpotAngleValCache; // 0x74
		::System::Boolean m_bOuterSpotAngleChanged; // 0x78
		::System::Single m_IntensityValCache; // 0x7C
		::System::Boolean m_bIntensityChanged; // 0x80
		::UnityEngine::Color m_ColorValCache; // 0x84
		::System::Boolean m_bColorChanged; // 0x94
		::System::Single m_AvatarLightMultiplierValCache; // 0x98
		::System::Boolean m_bAvatarLightMultiplierChanged; // 0x9C
		::UnityEngine::Color m_AvatarLightColorValCache; // 0xA0
		::System::Boolean m_bAvatarLightColorChanged; // 0xB0
		::UnityEngine::Light* m_stLightCom; // 0xB8
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* m_stAdditionalLightData; // 0xC0
		::UnityEngine::LightType m_eLightTypeCache; // 0xC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* range; // 0xD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* innerSpotAngle; // 0xD8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* outerSpotAngle; // 0xE0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* intensity; // 0xE8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* avatarLightMultiplier; // 0xF0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* indirectMultiplier; // 0xF8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* color; // 0x100
		::MoleMole::EffectSimulate::ColorKeyframeCurve* avatarLightColor; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_2D6A717E40A58BC9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2D6A717E40A58BC9_OFFSET))(this, a1);
		}

		::System::Void Method_3_DB3ED8CB2B8E8B5D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DB3ED8CB2B8E8B5D_OFFSET))(this, a1);
		}

		::UnityEngine::LightType get_lightType()
		{
			return ((::UnityEngine::LightType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET))(this);
		}

		::System::Void Method_3_FF4D5A5D6DBC9904(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_FF4D5A5D6DBC9904_OFFSET))(this, a1);
		}

		::System::Void Method_3_36714E99DCDF3D04(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_36714E99DCDF3D04_OFFSET))(this, a1);
		}

		::System::Void Method_3_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::System::String* Method_3_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_3_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Void Method_3_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_3_CBE9026C6B9DC823(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CBE9026C6B9DC823_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::String* Method_3_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_7857B385C2B6C0EB_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_4_OFFSET))(this);
		}

		::System::String* Method_3_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::String* Method_3_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_3_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_2_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/LightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/PointSpace.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_10_OFFSET UNITYSDK_OFFSET(0x170D6550)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x170D6080)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x170D62E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x170D6330)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x170D6370)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x170D63C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x170D6400)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x170D6450)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_8_OFFSET UNITYSDK_OFFSET(0x170D64D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_9_OFFSET UNITYSDK_OFFSET(0x170D6510)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x170D5C50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_15169B7DEE2D29F3_OFFSET UNITYSDK_OFFSET(0x170D5A80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x170D5CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x170D5C90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x170D58B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x170D6490)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x170D5D20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_EB15466536C39910_OFFSET UNITYSDK_OFFSET(0x170D60C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x170D63B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x170D6440)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x170D6320)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D5D30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarOverride2Tone_TypeDefinitionIndex = 78773;

	class ESAvatarOverride2Tone : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::MoleMole::MaterialPropertyModifierEnumDefine::LightSource AMC_LightSource; // 0xB8
		::System::Boolean use_PointPosition; // 0xB9
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_PointPosition; // 0xC0
		::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace AMC_PointSpace; // 0xC8
		::System::Boolean use_ShiftAngle; // 0xC9
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShiftAngle; // 0xD0
		::System::Boolean use_ColorA; // 0xD8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ColorA; // 0xE0
		::System::Boolean use_ColorB; // 0xE8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ColorB; // 0xF0
		::System::Boolean use_LerpPosition; // 0xF8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_LerpPosition; // 0x100
		::System::Boolean use_Softness; // 0x108
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Softness; // 0x110
		::System::Boolean AMC_Override2ToneMultiplyAlbedo; // 0x118
		::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode AMC_Override2ToneBlendMode; // 0x119

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_15169B7DEE2D29F3(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_15169B7DEE2D29F3_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::Void Method_4_EB15466536C39910(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_EB15466536C39910_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_7_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_8_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_9_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE2TONE_METHOD_4_128774387667156B_10_OFFSET))(this);
		}
	};
}

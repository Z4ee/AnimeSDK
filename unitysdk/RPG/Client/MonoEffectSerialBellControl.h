#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC0F78F0)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC0F77B0)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_E068CA3AB067589D_OFFSET UNITYSDK_OFFSET(0xC0F7820)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F7A00)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC0F7A70)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F7DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectSerialBellControl_TypeDefinitionIndex = 66154;

	class MonoEffectSerialBellControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::System::Int32 currentNote; // 0x20
		::System::Single FadeoutTime; // 0x24
		::UnityEngine::AnimationCurve* NoteProgress; // 0x28
		::UnityEngine::MaterialPropertyBlock* Field_5_4; // 0x30
		::System::Int32 Field_5_5; // 0x38
		::System::Int32 Field_5_6; // 0x3C
		::System::Int32 Field_5_7; // 0x40
		::System::Int32 Field_5_8; // 0x44
		::System::Int32 Field_5_9; // 0x48
		::System::Int32 Field_5_10; // 0x4C
		::System::Int32 Field_5_11; // 0x50
		::System::Int32 Field_5_12; // 0x54
		::System::Int32 Field_5_13; // 0x58
		::System::Int32 Field_5_14; // 0x5C
		::System::Int32 Field_5_15; // 0x60
		::System::Single Field_5_16; // 0x64
		::System::Single Field_5_17; // 0x68
		::System::Single Field_5_18; // 0x6C
		::System::Single Field_5_19; // 0x70
		::System::Single Field_5_20; // 0x74
		::System::Single Field_5_21; // 0x78
		::System::Single Field_5_22; // 0x7C
		::System::Single Field_5_23; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_E068CA3AB067589D(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_E068CA3AB067589D_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_UPDATE_OFFSET))(this);
		}
	};
}

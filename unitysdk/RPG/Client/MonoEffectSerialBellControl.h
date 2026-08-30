#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD7D1E70)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD7D1D30)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_METHOD_5_E068CA3AB067589D_OFFSET UNITYSDK_OFFSET(0xD7D1DA0)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7D1F80)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7D1FF0)
#define RPG_CLIENT_MONOEFFECTSERIALBELLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D2320)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectSerialBellControl_TypeDefinitionIndex = 70702;

	class MonoEffectSerialBellControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::System::Int32 currentNote; // 0x20
		::System::Single FadeoutTime; // 0x24
		::UnityEngine::AnimationCurve* NoteProgress; // 0x28
		::UnityEngine::MaterialPropertyBlock* KHFINMBNGBE; // 0x30
		::System::Int32 OBFLGGMDEKE; // 0x38
		::System::Int32 GGFFDAFDBGH; // 0x3C
		::System::Int32 JNDKLMLGOGG; // 0x40
		::System::Int32 AJHDDBBBICA; // 0x44
		::System::Int32 AOIGIJAONOM; // 0x48
		::System::Int32 NCANHCCICDI; // 0x4C
		::System::Int32 HKJIPCOIIGO; // 0x50
		::System::Int32 FNNEIGBAJED; // 0x54
		::System::Int32 DDCMANELBKO; // 0x58
		::System::Int32 PAPKGEDJGEP; // 0x5C
		::System::Int32 LDBLCMHPNEC; // 0x60
		::System::Single JIIDCLDINPH; // 0x64
		::System::Single IJHEOJJKOOG; // 0x68
		::System::Single DBDPFOPJJNF; // 0x6C
		::System::Single HEOLFDBALGB; // 0x70
		::System::Single DDHBFEKMBLI; // 0x74
		::System::Single JHLBCECAOCF; // 0x78
		::System::Single GPODLAPNFKM; // 0x7C
		::System::Single IJAFEBFHHAL; // 0x80

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

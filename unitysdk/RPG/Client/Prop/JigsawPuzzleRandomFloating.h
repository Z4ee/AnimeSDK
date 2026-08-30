#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/JigsawPuzzleRandomFloating_FloatingModeEnum.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_CHANGEFLOATINGMODE_OFFSET UNITYSDK_OFFSET(0x16106B30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16115BD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_START_OFFSET UNITYSDK_OFFSET(0x161159D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_UPDATE_OFFSET UNITYSDK_OFFSET(0x16115C60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING__CTOR_OFFSET UNITYSDK_OFFSET(0x16116010)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleRandomFloating_TypeDefinitionIndex = 78191;

	class JigsawPuzzleRandomFloating : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FloatingDistance; // 0x18
		::System::Single FloatingDistanceRandomAddMax; // 0x1C
		::System::Single FloatingPeriod; // 0x20
		::System::Boolean RandomRotWhenFloating; // 0x24
		::System::Single RandomRotIntervalMin; // 0x28
		::System::Single RandomRotIntervalMax; // 0x2C
		::System::Single RandomRotDuration; // 0x30
		::System::Single RandomRotDegree; // 0x34
		::RPG::Client::Prop::JigsawPuzzleRandomFloating_FloatingModeEnum FloatingMode; // 0x38
		::System::Single ResetTime; // 0x3C
		::System::Boolean reset; // 0x40
		::System::Boolean useLocalPos; // 0x41
		::UnityEngine::AnimationCurve* OECLCCPKCNI; // 0x48
		::UnityEngine::AnimationCurve* GEJGCGKEOJD; // 0x50
		::UnityEngine::AnimationCurve* FFDLHLENMNN; // 0x58
		::System::Single MDKBCLGOOGH; // 0x60
		::UnityEngine::Vector3 DPMOLEBOEAG; // 0x64
		::UnityEngine::Vector3 ELAKPDPCOFP; // 0x70
		::System::Single ICENOMBJHEI; // 0x7C
		::System::Single LEDFCBBLEII; // 0x80
		::System::Single COMGBCIBLIG; // 0x84
		::System::Boolean IEOJLICNENE; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void ChangeFloatingMode(::RPG::Client::Prop::JigsawPuzzleRandomFloating_FloatingModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleRandomFloating_FloatingModeEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLERANDOMFLOATING_CHANGEFLOATINGMODE_OFFSET))(this, a1);
		}
	};
}

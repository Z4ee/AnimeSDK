#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ChessboardGIConfig; }
namespace MoleMole::Config { class LightBreathData; }
namespace MoleMole::HollowChessboard { class LightRenderConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A900F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardLight_TypeDefinitionIndex = 79498;

	class ConfigHollowChessboardLight : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* LightLevelToRange; // 0x58
		::System::Single DefaultIntensity; // 0x60
		::UnityEngine::AnimationCurve* LightCurve; // 0x68
		::System::Single LightMoveTime; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>* LightBreathData; // 0x78
		::System::String* DefaultLightRenderConfigKey; // 0x80
		::MoleMole::HollowChessboard::LightRenderConfig* DefaultConfig; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>* LightRenderConfigMap; // 0x90
		::System::Int32 Frequency; // 0x98
		::System::Single IntensityDelta; // 0x9C
		::UnityEngine::AnimationCurve* UnstableCurve; // 0xA0
		::Il2CppArray<::System::Int32>* DiffusionPointsDelta; // 0xA8
		::System::Single DiffusionInterval; // 0xB0
		::System::Single SceneLightDiffusionTime; // 0xB4
		::UnityEngine::AnimationCurve* SceneLightDiffusionCurve; // 0xB8
		::UnityEngine::AnimationCurve* SceneLightSpicialDiffusionCurve; // 0xC0
		::UnityEngine::AnimationCurve* SceneLightSpicialIntensityCurve; // 0xC8
		::MoleMole::Config::ChessboardGIConfig* GIConfig; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT__CTOR_OFFSET))(this);
		}
	};
}

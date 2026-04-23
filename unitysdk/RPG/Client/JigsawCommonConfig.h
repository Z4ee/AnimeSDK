#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_JIGSAWCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA663310)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawCommonConfig_TypeDefinitionIndex = 55393;

	class JigsawCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::AnimationCurve* ScaleAnimCurve; // 0x18
		::System::Single ScaleAnimDuration; // 0x20
		::UnityEngine::AnimationCurve* RoationAnimCurve; // 0x28
		::System::Single RotationAnimDuration; // 0x30
		::System::Single AbsorbMoveToDuration; // 0x34
		::UnityEngine::AnimationCurve* MoveToInnerBoardAnimCurve; // 0x38
		::System::Single MoveToInnerBoardDuration; // 0x40
		::System::Single DissolveRateAnimDuration; // 0x44
		::UnityEngine::AnimationCurve* DissolveRateAnimCurve; // 0x48
		::UnityEngine::AnimationCurve* DissolveRateAnimCurveFrame; // 0x50
		::System::Single OutlineFadeAnimDuration; // 0x58
		::System::Single ZBias; // 0x5C
		::System::Single CursorScrollRatio; // 0x60
		::System::Single CursorScrollRatioWithJigsawItem; // 0x64
		::System::Single CursorSpeedDownRange; // 0x68
		::System::Single CursorScrollSpeedDownRatio; // 0x6C
		::System::String* FrameClipPoseRootPath; // 0x70
		::System::String* JigsawPuzzleSuccessEffPath; // 0x78
		::System::String* JigsawPuzzleBoardHighlightEffPath; // 0x80
		::System::String* JigsawPuzzleStartDissolveEvent; // 0x88
		::System::String* PuzzleItemMeshBasePath; // 0x90
		::UnityEngine::Color OutlineNormalColor; // 0x98
		::UnityEngine::Color OutlinePendingColor; // 0xA8
		::UnityEngine::Color OutlineAvailiableColor; // 0xB8
		::UnityEngine::Color OutlineActiveColor; // 0xC8
		::UnityEngine::Color OutlineAbnormalColor; // 0xD8
		::System::Single OutlineNormalOffset; // 0xE8
		::System::Single OutlinePendingOffset; // 0xEC
		::System::Single OutlineAvailiableOffset; // 0xF0
		::System::Single OutlineActiveOffset; // 0xF4
		::System::Single OutlineAbnormalOffset; // 0xF8
		::UnityEngine::Vector3 OutlineOffset; // 0xFC
		::System::String* EvJigsawItemHighlight; // 0x108
		::System::String* EvJigsawItemSelect; // 0x110
		::System::String* EvJigsawItemDrop; // 0x118
		::System::String* EvJigsawItemRecover; // 0x120
		::System::String* EvJigsawItemDropRight; // 0x128
		::System::String* EvJigsawItemRotate; // 0x130
		::System::String* EvJigsawFrameDissolve; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWCOMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}

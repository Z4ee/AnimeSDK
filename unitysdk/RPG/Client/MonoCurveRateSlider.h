#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoCurveRateSlider_ContentMoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOCURVERATESLIDER_PLAYSIMPLIFIED_OFFSET UNITYSDK_OFFSET(0xC06B200)
#define RPG_CLIENT_MONOCURVERATESLIDER_PLAY_OFFSET UNITYSDK_OFFSET(0xC06ADB0)
#define RPG_CLIENT_MONOCURVERATESLIDER_REGISTERFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC06B260)
#define RPG_CLIENT_MONOCURVERATESLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC06B2C0)
#define RPG_CLIENT_MONOCURVERATESLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC06B530)
#define RPG_CLIENT_MONOCURVERATESLIDER__INIT_OFFSET UNITYSDK_OFFSET(0xC06AE10)
#define RPG_CLIENT_MONOCURVERATESLIDER__UPDATECURPOSITION_OFFSET UNITYSDK_OFFSET(0xC06B320)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveRateSlider_TypeDefinitionIndex = 67810;

	class MonoCurveRateSlider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _CanUpdate; // 0x18
		::System::Single _Distance; // 0x1C
		::System::Single _CurTime; // 0x20
		::UnityEngine::Vector2 _TargetPosition; // 0x24
		::UnityEngine::Vector2 _StartPosition; // 0x2C
		::System::Boolean _StartPlay; // 0x34
		::System::Action_1<::XLua::LuaTable*>* _OnPerformFinished; // 0x38
		::XLua::LuaTable* _Table; // 0x40
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x48
		::System::Single _TotalTime; // 0x50
		::UnityEngine::AnimationCurve* _CurCurve; // 0x58
		::System::UInt32 TargetObjectIndex; // 0x60
		::System::UInt32 TotalObjectNum; // 0x64
		::System::Single TotalPerformanceTime; // 0x68
		::System::Single SimplifiedPerformanceTime; // 0x6C
		::SuperScrollView::LoopListView2* LLV2Ref; // 0x70
		::UnityEngine::UI::HorizontalLayoutGroup* LayoutGroup; // 0x78
		::UnityEngine::RectTransform* ViewportRectTrans; // 0x80
		::UnityEngine::RectTransform* ContentRectTrans; // 0x88
		::RPG::Client::MonoCurveRateSlider_ContentMoveDirection MoveDirection; // 0x90
		::System::Boolean _IsIgnoreY; // 0x94
		::UnityEngine::AnimationCurve* FirstSightCurveRate; // 0x98
		::UnityEngine::AnimationCurve* CommonCurveRate; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER_PLAY_OFFSET))(this);
		}

		::System::Void PlaySimplified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER_PLAYSIMPLIFIED_OFFSET))(this);
		}

		::System::Void RegisterFinishCallback(::System::Action_1<::XLua::LuaTable*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER_REGISTERFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER_UPDATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER__INIT_OFFSET))(this);
		}

		::System::Void _UpdateCurPosition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVERATESLIDER__UPDATECURPOSITION_OFFSET))(this, a1);
		}
	};
}

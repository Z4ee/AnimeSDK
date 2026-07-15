#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_CHIMERARANKSWAPITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x19B09510)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_DOSWAP_OFFSET UNITYSDK_OFFSET(0x19B08D20)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_INITSWAPRANK_OFFSET UNITYSDK_OFFSET(0x19B092A0)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_METHOD_5_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x19B09870)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_METHOD_5_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x19B09790)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_SETITEMINDEX_OFFSET UNITYSDK_OFFSET(0x19B07EA0)
#define RPG_CLIENT_CHIMERARANKSWAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B099E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankSwapItem_TypeDefinitionIndex = 69207;

	class ChimeraRankSwapItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIValueChangeAnimation* ValueChangeAnim; // 0x18
		::UnityEngine::UI::Slider* RankValueSlider; // 0x20
		::UnityEngine::UI::Slider* WorkValueSlider; // 0x28
		::System::Single SwapTime; // 0x30
		::UnityEngine::AnimationCurve* SwapCurve; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::System::Collections::Generic::Queue_1<::System::Action_2<::System::Int32, ::System::Int32>*>* Field_5_6; // 0x48
		::System::Int32 Field_5_7; // 0x50
		::System::Single Field_5_8; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_AWAKE_OFFSET))(this);
		}

		::System::Void SetItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_SETITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void InitSwapRank(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_INITSWAPRANK_OFFSET))(this, a1, a2);
		}

		::System::Void DoSwap(::System::Single a1, ::System::Single a2, ::System::Action_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_DOSWAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_8C4AEC0BC1CA0CB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_METHOD_5_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
		}

		::System::Void Method_5_11D5322717FDFD9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_METHOD_5_11D5322717FDFD9D_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class LoopListView2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONORANKINGANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D2A530)
#define RPG_CLIENT_MONORANKINGANIM_CHANGERANK_OFFSET UNITYSDK_OFFSET(0x9D2A750)
#define RPG_CLIENT_MONORANKINGANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D2A5F0)
#define RPG_CLIENT_MONORANKINGANIM__CALCULATEDELAY_OFFSET UNITYSDK_OFFSET(0x9D2B250)
#define RPG_CLIENT_MONORANKINGANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B680)
#define RPG_CLIENT_MONORANKINGANIM__MOVECURRENTITEM_OFFSET UNITYSDK_OFFSET(0x9D2ACD0)
#define RPG_CLIENT_MONORANKINGANIM__MOVEOTHERITEM_OFFSET UNITYSDK_OFFSET(0x9D2B2E0)
#define RPG_CLIENT_MONORANKINGANIM__PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x9D2B550)
#define RPG_CLIENT_MONORANKINGANIM__RECORDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9D2AB00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRankingAnim_TypeDefinitionIndex = 59492;

	class MonoRankingAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MoveDuration; // 0x18
		::System::Single OtherMoveDuration; // 0x1C
		::System::Single ZoomDuration; // 0x20
		::System::Single ZoomScale; // 0x24
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _Positions; // 0x28
		::SuperScrollView::LoopListView2* _ListView; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM_ONDISABLE_OFFSET))(this);
		}

		::System::Void ChangeRank(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM_CHANGERANK_OFFSET))(this, from, to);
		}

		::System::Void _RecordPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__RECORDPOSITIONS_OFFSET))(this);
		}

		::System::Void _MoveCurrentItem(::System::Int32 from, ::System::Int32 to, ::System::Single moveDuration, ::System::Single zoomDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__MOVECURRENTITEM_OFFSET))(this, from, to, moveDuration, zoomDuration);
		}

		::System::Void _MoveOtherItem(::System::Int32 from, ::System::Int32 to, ::System::Single duration, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__MOVEOTHERITEM_OFFSET))(this, from, to, duration, delay);
		}

		::System::Single _CalculateDelay(::System::Int32 index, ::System::Int32 total, ::System::Single duration)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__CALCULATEDELAY_OFFSET))(this, index, total, duration);
		}

		::System::Void _PlaySound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__PLAYSOUND_OFFSET))(this);
		}
	};
}

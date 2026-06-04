#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class LoopListView2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONORANKINGANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0xC13B570)
#define RPG_CLIENT_MONORANKINGANIM_CHANGERANK_OFFSET UNITYSDK_OFFSET(0xC13B780)
#define RPG_CLIENT_MONORANKINGANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC13B630)
#define RPG_CLIENT_MONORANKINGANIM__CALCULATEDELAY_OFFSET UNITYSDK_OFFSET(0xC13C1E0)
#define RPG_CLIENT_MONORANKINGANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xC13C5A0)
#define RPG_CLIENT_MONORANKINGANIM__MOVECURRENTITEM_OFFSET UNITYSDK_OFFSET(0xC13BD30)
#define RPG_CLIENT_MONORANKINGANIM__MOVEOTHERITEM_OFFSET UNITYSDK_OFFSET(0xC13C270)
#define RPG_CLIENT_MONORANKINGANIM__PLAYSOUND_OFFSET UNITYSDK_OFFSET(0xC13C470)
#define RPG_CLIENT_MONORANKINGANIM__RECORDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xC13BB30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRankingAnim_TypeDefinitionIndex = 67827;

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

		::System::Void ChangeRank(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM_CHANGERANK_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__RECORDPOSITIONS_OFFSET))(this);
		}

		::System::Void _MoveCurrentItem(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__MOVECURRENTITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _MoveOtherItem(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__MOVEOTHERITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single _CalculateDelay(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__CALCULATEDELAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlaySound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANKINGANIM__PLAYSOUND_OFFSET))(this);
		}
	};
}

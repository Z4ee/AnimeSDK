#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_74AFEC3818196291;
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB4C1CD0)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_METHOD_5_705F9CF4D4ACC29E_OFFSET UNITYSDK_OFFSET(0xB4C1EB0)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB4C1D30)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB4C1CE0)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C2120)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL___REFRESH_B__5_0_OFFSET UNITYSDK_OFFSET(0xB4C2130)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeResultRewardListControl_TypeDefinitionIndex = 74075;

	class ChallengeResultRewardListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>* Field_5_0; // 0x18
		::SuperScrollView::LoopGridView* _ItemList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* Method_5_705F9CF4D4ACC29E(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_METHOD_5_705F9CF4D4ACC29E_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* __Refresh_b__5_0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL___REFRESH_B__5_0_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::Challenge { class ChallengeFocusChangeDetectControl; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_GET_MONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xC9EE460)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xC9EE7C0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_AEA49496C256D00F_OFFSET UNITYSDK_OFFSET(0xC9EECB0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_DFFB81CA3843CA77_OFFSET UNITYSDK_OFFSET(0xC9EE8C0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xC9EE850)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xC9EE540)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_SET_MONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xC9EE4A0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EEED0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_0_OFFSET UNITYSDK_OFFSET(0xC9EEEE0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_1_OFFSET UNITYSDK_OFFSET(0xC9EEEF0)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossGuideTagListControl_TypeDefinitionIndex = 80314;

	class ChallengeBossGuideTagListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::StaticListView* _ItemList; // 0x18
		::UnityEngine::RectTransform* _NodePlaceHolder; // 0x20
		::UnityEngine::RectTransform* _NodePopup; // 0x28
		::UnityEngine::RectTransform* _NodeTagList; // 0x30
		::RPG::Client::Challenge::ChallengeFocusChangeDetectControl* _FocusChangeDetect; // 0x38
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x40
		::RPG::Client::MonsterGuideData* IMNGOFFJLON; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* NNDOBIMOFEO; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonsterGuideData* get_MonsterGuide()
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_GET_MONSTERGUIDE_OFFSET))(this);
		}

		::System::Void set_MonsterGuide(::RPG::Client::MonsterGuideData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterGuideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_SET_MONSTERGUIDE_OFFSET))(this, a1);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_5_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* Method_5_DFFB81CA3843CA77(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_DFFB81CA3843CA77_OFFSET))(this, a1);
		}

		::System::Void Method_5_AEA49496C256D00F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_AEA49496C256D00F_OFFSET))(this, a1);
		}

		::System::Void Method_5_F07808AF19FA033A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_METHOD_5_F07808AF19FA033A_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_0_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* __Refresh_b__11_1(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_1_OFFSET))(this, a1, a2, a3);
		}
	};
}

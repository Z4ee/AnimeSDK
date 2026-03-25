#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5CF1DDAFE12F0E87_3;
namespace RPG::Client { class RogueTournTitanBless; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3D9140)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xA3D8BD0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3D8C10)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA3D8BF0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3D8C30)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3D8B90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xA3D8BB0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xA3D90E0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xA3D8BE0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3D8C20)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA3D8C00)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3D8C40)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3D8BA0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xA3D8BC0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA3D9180)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3D8CC0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D8C50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBlessSelectAction_TypeDefinitionIndex = 54587;

	class RogueTournTitanBlessSelectAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournTitanBless* _CertainTitanBless_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* _SelectTitanBlesses_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x20
		::System::UInt32 _MaxRerollCnt_k__BackingField; // 0x24
		::System::UInt32 _CurrentUsedRerollCnt_k__BackingField; // 0x28
		::System::UInt32 _RogueActionID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_5CF1DDAFE12F0E87_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* get_SelectTitanBlesses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET))(this);
		}

		::System::Void set_SelectTitanBlesses(::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournTitanBless* get_CertainTitanBless()
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET))(this);
		}

		::System::Void set_CertainTitanBless(::RPG::Client::RogueTournTitanBless* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentUsedRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET))(this);
		}

		::System::Void set_CurrentUsedRerollCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET))(this, value);
		}

		::System::Void RefreshOnRollRsp(::Class_1_5CF1DDAFE12F0E87_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_5CF1DDAFE12F0E87_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1212C47FC4BC6471_1;
namespace RPG::Client { class RogueTournTitanBless; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC864690)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xC8640B0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xC8640F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xC8640D0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xC864110)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC864070)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xC864090)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xC864630)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xC8640C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xC864100)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xC8640E0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xC864120)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC864080)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xC8640A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC8646D0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC8641A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC864130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBlessSelectAction_TypeDefinitionIndex = 62708;

	class RogueTournTitanBlessSelectAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournTitanBless* _CertainTitanBless_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* _SelectTitanBlesses_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x20
		::System::UInt32 _RogueActionID_k__BackingField; // 0x24
		::System::UInt32 _CurrentUsedRerollCnt_k__BackingField; // 0x28
		::System::UInt32 _MaxRerollCnt_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_1212C47FC4BC6471_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_1212C47FC4BC6471_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* get_SelectTitanBlesses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET))(this);
		}

		::System::Void set_SelectTitanBlesses(::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournTitanBless* get_CertainTitanBless()
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET))(this);
		}

		::System::Void set_CertainTitanBless(::RPG::Client::RogueTournTitanBless* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentUsedRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET))(this);
		}

		::System::Void set_CurrentUsedRerollCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::Class_1_1212C47FC4BC6471_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_1212C47FC4BC6471_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}
	};
}

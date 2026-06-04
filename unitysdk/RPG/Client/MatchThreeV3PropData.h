#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::GameCore { class MatchThreeRoyaleBattleItemRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEV3PROPDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBFB35E0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFB3490)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xBFB3320)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xBFB3400)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBFB3390)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_INPUTGRIDCOUNT_OFFSET UNITYSDK_OFFSET(0xBFB33E0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_ISINITIALUNLOCK_OFFSET UNITYSDK_OFFSET(0xBFB3460)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_LEVELUPCOST_OFFSET UNITYSDK_OFFSET(0xBFB3470)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xBFB3350)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBFB32F0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPCANUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBFB33B0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xBFB32D0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0xBFB32E0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0xBFB33C0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0xBFB3480)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_USEFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0xBFB3430)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA_INIT_OFFSET UNITYSDK_OFFSET(0xBFB35A0)
#define RPG_CLIENT_MATCHTHREEV3PROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3560)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV3PropData_TypeDefinitionIndex = 61718;

	class MatchThreeV3PropData : public ::System::Object
	{
	public:
		::RPG::GameCore::MatchThreeRoyaleBattleItemRow* _Meta; // 0x10
		::System::UInt32 _PropID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPLEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_DESCTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_PropCanUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPCANUSECOUNT_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreePropType get_PropType()
		{
			return ((::RPG::GameCore::MatchThreePropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_PROPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_InputGridCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_INPUTGRIDCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_UseFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_USEFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsInitialUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_ISINITIALUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_LEVELUPCOST_OFFSET))(this);
		}

		::System::UInt32 get_SortOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_GET_SORTORDER_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV3PropData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV3PropData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_INIT_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV3PROPDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}

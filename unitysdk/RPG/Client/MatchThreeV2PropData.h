#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::GameCore { class MatchThreeV2BattleItemRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PROPDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBFAB380)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBFAB150)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xBFAB0C0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFAAED0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xBFAA950)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xBFAAC50)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBFAAA50)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_INPUTGRIDCOUNT_OFFSET UNITYSDK_OFFSET(0xBFAABD0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ISINITIALUNLOCK_OFFSET UNITYSDK_OFFSET(0xBFAAD50)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_LEVELUPCOST_OFFSET UNITYSDK_OFFSET(0xBFAADD0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xBFAA9D0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBFAA8D0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPCANUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBFAAAD0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xBFAA8B0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0xBFAA8C0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0xBFAAB50)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBFAA840)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0xBFAAE50)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_USEFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0xBFAACD0)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA_INIT_OFFSET UNITYSDK_OFFSET(0xBFAB340)
#define RPG_CLIENT_MATCHTHREEV2PROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAB330)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PropData_TypeDefinitionIndex = 61716;

	class MatchThreeV2PropData : public ::System::Object
	{
	public:
		::System::UInt32 _PropID_k__BackingField; // 0x10
		::System::UInt32 _PropLevel_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MatchThreeV2BattleItemRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2BattleItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPLEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_DESCTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_PropCanUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPCANUSECOUNT_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreePropType get_PropType()
		{
			return ((::RPG::GameCore::MatchThreePropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_PROPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_InputGridCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_INPUTGRIDCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_UseFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_USEFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsInitialUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_ISINITIALUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_LEVELUPCOST_OFFSET))(this);
		}

		::System::UInt32 get_SortOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_GET_SORTORDER_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PropData*>* Create(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PropData*>*(*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PropData*>* Create_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PropData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::MatchThreeV2PropData* Create_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeV2PropData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_CREATE_2_OFFSET))(a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_INIT_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}

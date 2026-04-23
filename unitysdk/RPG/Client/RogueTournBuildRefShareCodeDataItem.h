#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_B202CD093058243F;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0AF550)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0AA8F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB0AF670)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB0AF960)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xB0AFA20)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYDATETIME_OFFSET UNITYSDK_OFFSET(0xB0AF870)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xB0AF850)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0xB0AF7F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET UNITYSDK_OFFSET(0xB0AFAE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB0AF9C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xB0AFA80)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0xB0AF810)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0xB0AF900)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB0AF830)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET UNITYSDK_OFFSET(0xB0AF690)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB0AA180)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0xB0AF620)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETLATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xB0AA1D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB0AF680)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_LATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xB0AF860)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0xB0AF800)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0xB0AF820)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xB0AF840)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0AF3F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0AFBC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0AF3E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0AFC30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeDataItem_TypeDefinitionIndex = 62252;

	class RogueTournBuildRefShareCodeDataItem : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_DefaultTitle()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeDataItem_TypeDefinitionIndex)->GetStaticField(0x67B0);
		}
		// static const ::System::UInt32 InvalidShareCodeBuildRefSlotIndex = 0xFFFFFFFF; // 0x0
		::System::String* _Title_k__BackingField; // 0x10
		::Class_1_B202CD093058243F* _BuildRefContent; // 0x18
		::System::Int64 _LatestApplyTime_k__BackingField; // 0x20
		::System::UInt32 _ArchiveSlotIndex_k__BackingField; // 0x28
		::System::UInt32 _MainTournID_k__BackingField; // 0x2C
		::System::UInt32 _SubTournID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetContent(::Class_1_B202CD093058243F* content)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B202CD093058243F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET))(this, content);
		}

		::System::Void SetArchiveSlotIndex(::System::UInt32 archiveSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET))(this, archiveSlotIndex);
		}

		::System::Void SetLatestApplyTime(::System::Int64 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETLATESTAPPLYTIME_OFFSET))(this, time);
		}

		::System::UInt32 get_ArchiveSlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournBuildRefUnionIndex get_UnionIndex()
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET))(this);
		}

		::System::UInt32 get_MainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET))(this);
		}

		::System::Void set_MainTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET))(this, value);
		}

		::System::UInt32 get_SubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET))(this);
		}

		::System::Void set_SubTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET))(this, value);
		}

		::System::Int64 get_LatestApplyTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYTIME_OFFSET))(this);
		}

		::System::Void set_LatestApplyTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_LATESTAPPLYTIME_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_LatestApplyDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYDATETIME_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* get_Teams()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_EssentialFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_OptionalFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_EssentialHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_OptionalHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET))(this);
		}

		static ::System::UInt32 get_MaxTitleLengthLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET))();
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

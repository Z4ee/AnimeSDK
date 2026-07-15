#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_4D052AB586FDB247_1;
class Class_1_9BED8C2CAC924ACC;
class Class_1_FFE5B8A52EC38E9C_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateStatisticsDifficultyDataItem; }
namespace RPG::Client { class FateStatisticsGameSettleDataItem; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATESTATISTICSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19720F10)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_DIFFDATALIST_OFFSET UNITYSDK_OFFSET(0x19721300)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_LASTSETTLEAREATYPE_OFFSET UNITYSDK_OFFSET(0x197213C0)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_LASTSETTLETEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19721380)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_MAXPASSEDDIFF_OFFSET UNITYSDK_OFFSET(0x197212C0)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_PLAYERTITLE_OFFSET UNITYSDK_OFFSET(0x197212E0)
#define RPG_CLIENT_FATESTATISTICSINFO_GET_SETTLEDATALIST_OFFSET UNITYSDK_OFFSET(0x19721340)
#define RPG_CLIENT_FATESTATISTICSINFO_SET_MAXPASSEDDIFF_OFFSET UNITYSDK_OFFSET(0x197212D0)
#define RPG_CLIENT_FATESTATISTICSINFO_SET_PLAYERTITLE_OFFSET UNITYSDK_OFFSET(0x197212F0)
#define RPG_CLIENT_FATESTATISTICSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x19720110)
#define RPG_CLIENT_FATESTATISTICSINFO__CREATEDIFFICULTYDATAITEM_OFFSET UNITYSDK_OFFSET(0x19720FD0)
#define RPG_CLIENT_FATESTATISTICSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19720100)
#define RPG_CLIENT_FATESTATISTICSINFO__GETTRAINAREANAME_OFFSET UNITYSDK_OFFSET(0x19721170)
#define RPG_CLIENT_FATESTATISTICSINFO__SYNCDIFFICULTYINFO_OFFSET UNITYSDK_OFFSET(0x19720970)
#define RPG_CLIENT_FATESTATISTICSINFO__SYNCSETTLEINFO_OFFSET UNITYSDK_OFFSET(0x19720180)
#define RPG_CLIENT_FATESTATISTICSINFO___SYNCDIFFICULTYINFO_B__4_1_OFFSET UNITYSDK_OFFSET(0x19721400)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsInfo_TypeDefinitionIndex = 61212;

	class FateStatisticsInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LastSettleTeamAvatarList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsGameSettleDataItem*>* _SettleDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsDifficultyDataItem*>* _DiffDataList; // 0x20
		::RPG::GameCore::FateAreaType _LastSettleAreaType; // 0x28
		::System::UInt32 _MaxPassedDiff_k__BackingField; // 0x2C
		::RPG::Client::TextID _PlayerTitle_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9BED8C2CAC924ACC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BED8C2CAC924ACC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _SyncSettleInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFE5B8A52EC38E9C_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFE5B8A52EC38E9C_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO__SYNCSETTLEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncDifficultyInfo(::Class_1_9BED8C2CAC924ACC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BED8C2CAC924ACC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO__SYNCDIFFICULTYINFO_OFFSET))(this, a1);
		}

		::System::Void _CreateDifficultyDataItem(::Class_1_4D052AB586FDB247_1* a1, ::System::Func_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D052AB586FDB247_1*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO__CREATEDIFFICULTYDATAITEM_OFFSET))(this, a1, a2);
		}

		::System::String* _GetTrainAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO__GETTRAINAREANAME_OFFSET))(this);
		}

		::System::UInt32 get_MaxPassedDiff()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_MAXPASSEDDIFF_OFFSET))(this);
		}

		::System::Void set_MaxPassedDiff(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_SET_MAXPASSEDDIFF_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlayerTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_PLAYERTITLE_OFFSET))(this);
		}

		::System::Void set_PlayerTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_SET_PLAYERTITLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsDifficultyDataItem*>* get_DiffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsDifficultyDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_DIFFDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsGameSettleDataItem*>* get_SettleDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsGameSettleDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_SETTLEDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LastSettleTeamAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_LASTSETTLETEAMAVATARLIST_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_LastSettleAreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO_GET_LASTSETTLEAREATYPE_OFFSET))(this);
		}

		::System::String* __SyncDifficultyInfo_b__4_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___SYNCDIFFICULTYINFO_B__4_1_OFFSET))(this);
		}
	};
}

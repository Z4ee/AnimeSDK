#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }

#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0x1B88EF40)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_COMPLETIONROUND_OFFSET UNITYSDK_OFFSET(0x1B88EF20)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0x1B88EF00)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B88EEE0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0x1B88EF50)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_COMPLETIONROUND_OFFSET UNITYSDK_OFFSET(0x1B88EF30)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0x1B88EF10)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B88EEF0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleLineupRouteInfo_TypeDefinitionIndex = 64011;

	class ExpeditionBattleLineupRouteInfo : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_3*>* _AvatarList_k__BackingField; // 0x10
		::System::UInt32 _PassedLevel_k__BackingField; // 0x18
		::System::UInt32 _CompletionRound_k__BackingField; // 0x1C
		::System::UInt32 _LastLevelPercent_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PassedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_PASSEDLEVEL_OFFSET))(this);
		}

		::System::Void set_PassedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_PASSEDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevelPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_LASTLEVELPERCENT_OFFSET))(this);
		}

		::System::Void set_LastLevelPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_LASTLEVELPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletionRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_COMPLETIONROUND_OFFSET))(this);
		}

		::System::Void set_CompletionRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_COMPLETIONROUND_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_3*>* get_AvatarList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Void set_AvatarList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_AVATARLIST_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BABB143454D17CA6.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_25;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ExpeditionBattleTeamMember; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF04560)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_CREATE_OFFSET UNITYSDK_OFFSET(0xCF03EC0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERBYSLOT_OFFSET UNITYSDK_OFFSET(0xCEF8C90)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEF8120)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCF03E50)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_TEAMMEMBERS_OFFSET UNITYSDK_OFFSET(0xCF020F0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERBYSLOT_OFFSET UNITYSDK_OFFSET(0xCF04670)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERS_OFFSET UNITYSDK_OFFSET(0xCF04740)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCF03E70)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SYNCBYSERVER_OFFSET UNITYSDK_OFFSET(0xCF03F90)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF03E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeam_TypeDefinitionIndex = 63917;

	class ExpeditionBattleTeam : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAX_MEMBER_COUNT = 0x4; // 0x0
		::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* _TeamMembers; // 0x10
		::Struct_2_BABB143454D17CA6 _Identifier_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM__CTOR_OFFSET))(this);
		}

		::Struct_2_BABB143454D17CA6 get_Identifier()
		{
			return ((::Struct_2_BABB143454D17CA6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::Struct_2_BABB143454D17CA6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* get_TeamMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_TEAMMEMBERS_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleTeam* Create(::Struct_2_BABB143454D17CA6 a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncByServer(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SYNCBYSERVER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_CLEAR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleTeamMember* GetMemberBySlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeamMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERBYSLOT_OFFSET))(this, a1);
		}

		::System::Void SetMemberBySlot(::System::UInt32 a1, ::RPG::Client::ExpeditionBattleTeamMember* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERBYSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void SetMembers(::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERS_OFFSET))(this, a1);
		}

		::System::UInt32 GetMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERCOUNT_OFFSET))(this);
		}
	};
}

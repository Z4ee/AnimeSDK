#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"

class Class_1_EAA93C4FF12A6990;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCADE1E0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xCADE150)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCADE400)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCADE130)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xCADE0F0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xCADE110)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCADE2E0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCADE3A0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCADE140)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xCADE100)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xCADE120)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCADDE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageInviteData_TypeDefinitionIndex = 63288;

	class ChatMessageInviteData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList_k__BackingField; // 0x18
		::Enum_3_01618AD0437C8486_2 _PlayType_k__BackingField; // 0x20
		::System::UInt64 _LobbyID_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_EAA93C4FF12A6990* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EAA93C4FF12A6990*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486_2 get_PlayType()
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Void set_PlayType(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GameParamList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_GameParamList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ChatMessageInviteData* a1, ::RPG::Client::ChatMessageInviteData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ChatMessageInviteData* a1, ::RPG::Client::ChatMessageInviteData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}

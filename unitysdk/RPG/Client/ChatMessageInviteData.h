#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"

class Class_1_1DFB17424E35B05C;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB5990A0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xB599010)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB5992C0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB598FF0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB598FB0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xB598FD0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB5991A0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB599260)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB599000)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB598FC0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xB598FE0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB598CC0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB599300)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB599310)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageInviteData_TypeDefinitionIndex = 59164;

	class ChatMessageInviteData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList_k__BackingField; // 0x18
		::System::UInt64 _LobbyID_k__BackingField; // 0x20
		::Enum_3_A35B38E5F9115A76_2 _PlayType_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_1DFB17424E35B05C* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DFB17424E35B05C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Enum_3_A35B38E5F9115A76_2 get_PlayType()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Void set_PlayType(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET))(this, a1);
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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}

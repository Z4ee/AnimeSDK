#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET UNITYSDK_OFFSET(0x9EC6E50)
#define RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x9EC7180)
#define RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_SET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x9EC7190)
#define RPG_CLIENT_PAMCHATTEAMEXPLAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC6E10)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatTeamExplainData_TypeDefinitionIndex = 51361;

	class PamChatTeamExplainData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATTEAMEXPLAINDATA__CTOR_OFFSET))(this, avatarIDs);
		}

		::System::String* GetPlayerSendText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_GET_AVATARIDS_OFFSET))(this);
		}

		::System::Void set_AvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATTEAMEXPLAINDATA_SET_AVATARIDS_OFFSET))(this, value);
		}
	};
}

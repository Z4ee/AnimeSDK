#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1ED936FF8C554768.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamBuildUnit; }

#define RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET UNITYSDK_OFFSET(0xA560320)
#define RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5606D0)
#define RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA560460)
#define RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA560780)
#define RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA5602A0)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xA5602B0)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xA5602F0)
#define RPG_CLIENT_TEAMBUILD_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xA560300)
#define RPG_CLIENT_TEAMBUILD__CTOR_OFFSET UNITYSDK_OFFSET(0xA560310)
#define RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5609A0)
#define RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5609B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuild_TypeDefinitionIndex = 55573;

	class TeamBuild : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* _Teammates_k__BackingField; // 0x10
		::System::UInt32 _TargetAvatarPosition_k__BackingField; // 0x18
		::Struct_2_1ED936FF8C554768 _Identifier_k__BackingField; // 0x1C

		::System::Void _ctor(::Struct_2_1ED936FF8C554768& identifier, ::System::UInt32 targetAvatarPosition, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>* teammates)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_1ED936FF8C554768&, ::System::UInt32, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD__CTOR_OFFSET))(this, identifier, targetAvatarPosition, teammates);
		}

		::Struct_2_1ED936FF8C554768 get_Identifier()
		{
			return ((::Struct_2_1ED936FF8C554768(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarPosition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARPOSITION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* get_Teammates()
		{
			return ((::Il2CppArray<::RPG::Client::TeamBuildUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TEAMMATES_OFFSET))(this);
		}

		::System::Void AddTeammate(::System::Int32 index, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET))(this, index, avatarID);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuild* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamBuildUnit; }

#define RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET UNITYSDK_OFFSET(0xC9EC090)
#define RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC9EC2C0)
#define RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET UNITYSDK_OFFSET(0xC9EC130)
#define RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC9EC370)
#define RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC9EC010)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xC9EC020)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xC9EC060)
#define RPG_CLIENT_TEAMBUILD_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xC9EC070)
#define RPG_CLIENT_TEAMBUILD__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EC080)
#define RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xC9EC470)
#define RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC9EC480)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuild_TypeDefinitionIndex = 63701;

	class TeamBuild : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* _Teammates_k__BackingField; // 0x10
		::Struct_2_276321B6B122C69C_6 _Identifier_k__BackingField; // 0x18
		::System::UInt32 _TargetAvatarPosition_k__BackingField; // 0x20

		::System::Void _ctor(::Struct_2_276321B6B122C69C_6& a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_6&, ::System::UInt32, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Struct_2_276321B6B122C69C_6 get_Identifier()
		{
			return ((::Struct_2_276321B6B122C69C_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET))(this);
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

		::System::Void AddTeammate(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}

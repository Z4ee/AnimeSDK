#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET UNITYSDK_OFFSET(0xB2A9250)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET UNITYSDK_OFFSET(0xB2A9200)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB2A9190)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2A92A0)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A91F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamDataRefreshParam_TypeDefinitionIndex = 62800;

	class TeamDataRefreshParam : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Full()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x252F0);
		}
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_MemberList()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x252F8);
		}
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Default()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x25300);
		}
		::RPG::Client::TeamDataRefreshMask Mask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TeamDataRefreshParam* Create(::RPG::Client::TeamDataRefreshMask mask)
		{
			return ((::RPG::Client::TeamDataRefreshParam*(*)(::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET))(mask);
		}

		::System::Boolean CheckMask(::RPG::Client::TeamDataRefreshMask mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET))(this, mask);
		}

		::System::Void AddMask(::RPG::Client::TeamDataRefreshMask mask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET))(this, mask);
		}
	};
}

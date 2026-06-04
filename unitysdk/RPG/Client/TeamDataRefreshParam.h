#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET UNITYSDK_OFFSET(0xC9F7C80)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET UNITYSDK_OFFSET(0xC9F7C30)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xC9F7BC0)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9F7CD0)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F7C20)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamDataRefreshParam_TypeDefinitionIndex = 63734;

	class TeamDataRefreshParam : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_MemberList()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x504D0);
		}
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Default()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x504D8);
		}
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Full()
		{
			return (::RPG::Client::TeamDataRefreshParam**)Il2CppClass::FromTypeDefinitionIndex(TeamDataRefreshParam_TypeDefinitionIndex)->GetStaticField(0x504E0);
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

		static ::RPG::Client::TeamDataRefreshParam* Create(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::RPG::Client::TeamDataRefreshParam*(*)(::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET))(a1);
		}

		::System::Boolean CheckMask(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET))(this, a1);
		}

		::System::Void AddMask(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET))(this, a1);
		}
	};
}

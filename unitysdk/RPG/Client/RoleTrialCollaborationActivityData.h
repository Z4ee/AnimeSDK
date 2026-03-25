#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoleTrialActivityData.h"

#define RPG_CLIENT_ROLETRIALCOLLABORATIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F36B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialCollaborationActivityData_TypeDefinitionIndex = 50023;

	class RoleTrialCollaborationActivityData : public ::RPG::Client::RoleTrialActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALCOLLABORATIONACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}
	};
}

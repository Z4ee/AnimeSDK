#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARUNLOCKSKILLTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECFA20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUnlockSkillTreeData_TypeDefinitionIndex = 62561;

	class AvatarUnlockSkillTreeData : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::UInt32 PointID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUNLOCKSKILLTREEDATA__CTOR_OFFSET))(this);
		}
	};
}

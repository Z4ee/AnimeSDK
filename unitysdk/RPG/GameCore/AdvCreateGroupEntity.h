#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_21569FF52B85BCFD_OFFSET UNITYSDK_OFFSET(0x16F29F20)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_D06B849C1EE95076_OFFSET UNITYSDK_OFFSET(0x16F29EA0)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16F29EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateGroupEntity_TypeDefinitionIndex = 18570;

	class AdvCreateGroupEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOverrideArtModelOffset; // 0x18
		::RPG::MVector3 OverrideArtModelOffset; // 0x1C
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x28
		::System::Boolean SkipCreated; // 0x30
		::System::UInt32 GroupID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D06B849C1EE95076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_D06B849C1EE95076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21569FF52B85BCFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_21569FF52B85BCFD_OFFSET))(a1, a2);
		}
	};
}

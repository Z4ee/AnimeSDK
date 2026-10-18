#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_5099E04C38FF0016_OFFSET UNITYSDK_OFFSET(0x1D39A8D0)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_AF59A1AEBF0625B8_OFFSET UNITYSDK_OFFSET(0x1D39A890)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39A8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateGroupEntity_TypeDefinitionIndex = 20285;

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

		static ::System::Void Method_3_AF59A1AEBF0625B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_AF59A1AEBF0625B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5099E04C38FF0016(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_METHOD_3_5099E04C38FF0016_OFFSET))(a1, a2);
		}
	};
}

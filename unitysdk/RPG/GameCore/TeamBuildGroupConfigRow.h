#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DDB600)
#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDB740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBuildGroupConfigRow_TypeDefinitionIndex = 14509;

	class TeamBuildGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBuildGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBuildGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

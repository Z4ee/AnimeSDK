#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17895A30)
#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17895B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBuildGroupConfigRow_TypeDefinitionIndex = 13998;

	class TeamBuildGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TeamBuildGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBuildGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

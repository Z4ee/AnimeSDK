#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_METHOD_2_5EB7717F86A280C7_OFFSET UNITYSDK_OFFSET(0x19891510)
#define RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x198916D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupGridFightAvatarData_TypeDefinitionIndex = 17236;

	class LineupGridFightAvatarData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::UInt32 Star; // 0x14
		::System::UInt32 Location; // 0x18
		::Il2CppArray<::System::UInt32>* EquipList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5EB7717F86A280C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupGridFightAvatarData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupGridFightAvatarData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_METHOD_2_5EB7717F86A280C7_OFFSET))(a1, a2);
		}
	};
}

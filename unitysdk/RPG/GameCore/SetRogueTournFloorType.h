#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_4EEE72772E67CC17_OFFSET UNITYSDK_OFFSET(0x1C6071A0)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_F669A8C8A73EBA44_OFFSET UNITYSDK_OFFSET(0x1C607160)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C607190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRogueTournFloorType_TypeDefinitionIndex = 22283;

	class SetRogueTournFloorType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueTournTitanFloorType FloorType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F669A8C8A73EBA44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueTournFloorType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueTournFloorType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_F669A8C8A73EBA44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EEE72772E67CC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_4EEE72772E67CC17_OFFSET))(a1, a2);
		}
	};
}

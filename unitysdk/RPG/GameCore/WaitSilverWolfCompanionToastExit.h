#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_METHOD_3_53C1327CD7F219A7_OFFSET UNITYSDK_OFFSET(0x19E61100)
#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_METHOD_3_60F98438159B785E_OFFSET UNITYSDK_OFFSET(0x19E61180)
#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E61150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSilverWolfCompanionToastExit_TypeDefinitionIndex = 20487;

	class WaitSilverWolfCompanionToastExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MissionID; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Single MaxWaitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53C1327CD7F219A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_METHOD_3_53C1327CD7F219A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60F98438159B785E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_METHOD_3_60F98438159B785E_OFFSET))(a1, a2);
		}
	};
}

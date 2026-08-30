#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER_METHOD_3_716D87AA6AB09393_OFFSET UNITYSDK_OFFSET(0x1D6AAA90)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER_METHOD_3_B4EF120D345D4BD7_OFFSET UNITYSDK_OFFSET(0x1D6AAAE0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AAAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueAdventureRoomFirstEnter_TypeDefinitionIndex = 20575;

	class WaitRogueAdventureRoomFirstEnter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_716D87AA6AB09393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomFirstEnter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomFirstEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER_METHOD_3_716D87AA6AB09393_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4EF120D345D4BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomFirstEnter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomFirstEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMFIRSTENTER_METHOD_3_B4EF120D345D4BD7_OFFSET))(a1, a2);
		}
	};
}

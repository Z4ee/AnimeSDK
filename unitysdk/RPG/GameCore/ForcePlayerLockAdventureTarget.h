#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_METHOD_3_3B1A87164EDFBAB8_OFFSET UNITYSDK_OFFSET(0x18929360)
#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_METHOD_3_7097C77D41494A0F_OFFSET UNITYSDK_OFFSET(0x189292E0)
#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18929330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForcePlayerLockAdventureTarget_TypeDefinitionIndex = 23291;

	class ForcePlayerLockAdventureTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsProp; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupInstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7097C77D41494A0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_METHOD_3_7097C77D41494A0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B1A87164EDFBAB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_METHOD_3_3B1A87164EDFBAB8_OFFSET))(a1, a2);
		}
	};
}

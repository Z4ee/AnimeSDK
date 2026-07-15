#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_METHOD_3_183BA0F18C85233D_OFFSET UNITYSDK_OFFSET(0x1C254490)
#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_METHOD_3_6E6AE8DCB93E4C08_OFFSET UNITYSDK_OFFSET(0x1C254450)
#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C254480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearNpcDistanceTrigger_TypeDefinitionIndex = 19552;

	class ClearNpcDistanceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E6AE8DCB93E4C08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearNpcDistanceTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearNpcDistanceTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_METHOD_3_6E6AE8DCB93E4C08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_183BA0F18C85233D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_METHOD_3_183BA0F18C85233D_OFFSET))(a1, a2);
		}
	};
}

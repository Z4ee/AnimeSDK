#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePropPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPROPOPENPAGE_METHOD_3_284088757170DEE7_OFFSET UNITYSDK_OFFSET(0x19BBA1B0)
#define RPG_GAMECORE_ROGUEPROPOPENPAGE_METHOD_3_7AFB506251D02646_OFFSET UNITYSDK_OFFSET(0x19BBA130)
#define RPG_GAMECORE_ROGUEPROPOPENPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBA180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePropOpenPage_TypeDefinitionIndex = 21064;

	class RoguePropOpenPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RoguePropPageType Type; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::Boolean WaitForExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7AFB506251D02646(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePropOpenPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePropOpenPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE_METHOD_3_7AFB506251D02646_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_284088757170DEE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePropOpenPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePropOpenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPROPOPENPAGE_METHOD_3_284088757170DEE7_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_9DEEDA39FF9C3752_OFFSET UNITYSDK_OFFSET(0x1CBBE1B0)
#define RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_A0AFDBD98A1DC40B_OFFSET UNITYSDK_OFFSET(0x1CBBE160)
#define RPG_GAMECORE_ADVENTURESHOWREADING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBE1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureShowReading_TypeDefinitionIndex = 20653;

	class AdventureShowReading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BookID; // 0x18
		::System::Boolean WaitForExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0AFDBD98A1DC40B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureShowReading*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureShowReading*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_A0AFDBD98A1DC40B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DEEDA39FF9C3752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureShowReading* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_9DEEDA39FF9C3752_OFFSET))(a1, a2);
		}
	};
}

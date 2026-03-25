#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_9DEEDA39FF9C3752_OFFSET UNITYSDK_OFFSET(0x16F5A4A0)
#define RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_A12DB97ABDD7F003_OFFSET UNITYSDK_OFFSET(0x16F5A420)
#define RPG_GAMECORE_ADVENTURESHOWREADING__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5A470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureShowReading_TypeDefinitionIndex = 19218;

	class AdventureShowReading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BookID; // 0x18
		::System::Boolean WaitForExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A12DB97ABDD7F003(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureShowReading*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureShowReading*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_A12DB97ABDD7F003_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DEEDA39FF9C3752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureShowReading* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_METHOD_3_9DEEDA39FF9C3752_OFFSET))(a1, a2);
		}
	};
}

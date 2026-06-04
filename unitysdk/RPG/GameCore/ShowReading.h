#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWREADING_METHOD_3_2E0F76BD1A1A9192_OFFSET UNITYSDK_OFFSET(0x19C81720)
#define RPG_GAMECORE_SHOWREADING_METHOD_3_987B0F0F0DE22AEB_OFFSET UNITYSDK_OFFSET(0x19C816A0)
#define RPG_GAMECORE_SHOWREADING__CTOR_OFFSET UNITYSDK_OFFSET(0x19C816F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowReading_TypeDefinitionIndex = 19745;

	class ShowReading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BookID; // 0x18
		::System::Boolean WaitForExit; // 0x20
		::System::Boolean ShouldPauseGame; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_987B0F0F0DE22AEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowReading*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowReading*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING_METHOD_3_987B0F0F0DE22AEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E0F76BD1A1A9192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowReading* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING_METHOD_3_2E0F76BD1A1A9192_OFFSET))(a1, a2);
		}
	};
}

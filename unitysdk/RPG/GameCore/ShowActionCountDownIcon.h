#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_C0764E11C7AFAF25_OFFSET UNITYSDK_OFFSET(0x1D521810)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_DE2037151DF4A5EC_OFFSET UNITYSDK_OFFSET(0x1D521850)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D521840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActionCountDownIcon_TypeDefinitionIndex = 23423;

	class ShowActionCountDownIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ActionIndex; // 0x18
		::System::UInt32 StageBattleEventId; // 0x1C
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0764E11C7AFAF25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionCountDownIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionCountDownIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_C0764E11C7AFAF25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE2037151DF4A5EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_DE2037151DF4A5EC_OFFSET))(a1, a2);
		}
	};
}

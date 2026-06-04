#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITRANDOMSECOND_METHOD_3_05ED5C20F3DF4E02_OFFSET UNITYSDK_OFFSET(0x19E5EC80)
#define RPG_GAMECORE_WAITRANDOMSECOND_METHOD_3_DEC8E5E47DCFFBB4_OFFSET UNITYSDK_OFFSET(0x19E5ED00)
#define RPG_GAMECORE_WAITRANDOMSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5ECD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRandomSecond_TypeDefinitionIndex = 18900;

	class WaitRandomSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MinWaitTime; // 0x18
		::System::Single MaxWaitTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05ED5C20F3DF4E02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRandomSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRandomSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND_METHOD_3_05ED5C20F3DF4E02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEC8E5E47DCFFBB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRandomSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRandomSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRANDOMSECOND_METHOD_3_DEC8E5E47DCFFBB4_OFFSET))(a1, a2);
		}
	};
}

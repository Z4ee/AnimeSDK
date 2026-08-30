#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSUBSTORYFINISH_METHOD_3_0F754857E3F4123E_OFFSET UNITYSDK_OFFSET(0x1D6ADAE0)
#define RPG_GAMECORE_WAITSUBSTORYFINISH_METHOD_3_8C2C1787B2AFDB22_OFFSET UNITYSDK_OFFSET(0x1D6ADA90)
#define RPG_GAMECORE_WAITSUBSTORYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSubStoryFinish_TypeDefinitionIndex = 20253;

	class WaitSubStoryFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C2C1787B2AFDB22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubStoryFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubStoryFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH_METHOD_3_8C2C1787B2AFDB22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0F754857E3F4123E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubStoryFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubStoryFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH_METHOD_3_0F754857E3F4123E_OFFSET))(a1, a2);
		}
	};
}

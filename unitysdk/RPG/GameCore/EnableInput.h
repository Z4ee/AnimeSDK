#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEINPUT_METHOD_3_9D6927EB2045061C_OFFSET UNITYSDK_OFFSET(0x1D062ED0)
#define RPG_GAMECORE_ENABLEINPUT_METHOD_3_B91072B6F482D6D7_OFFSET UNITYSDK_OFFSET(0x1D062F20)
#define RPG_GAMECORE_ENABLEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D062F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableInput_TypeDefinitionIndex = 20651;

	class EnableInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D6927EB2045061C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT_METHOD_3_9D6927EB2045061C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B91072B6F482D6D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT_METHOD_3_B91072B6F482D6D7_OFFSET))(a1, a2);
		}
	};
}

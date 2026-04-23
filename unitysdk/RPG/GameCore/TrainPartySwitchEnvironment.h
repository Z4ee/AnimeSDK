#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_METHOD_3_B84BAD2293FC2FB5_OFFSET UNITYSDK_OFFSET(0x190AF460)
#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_METHOD_3_D20CA1DA481BA544_OFFSET UNITYSDK_OFFSET(0x190AF3E0)
#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190AF430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySwitchEnvironment_TypeDefinitionIndex = 21237;

	class TrainPartySwitchEnvironment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D20CA1DA481BA544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySwitchEnvironment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySwitchEnvironment*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_METHOD_3_D20CA1DA481BA544_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B84BAD2293FC2FB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySwitchEnvironment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySwitchEnvironment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_METHOD_3_B84BAD2293FC2FB5_OFFSET))(a1, a2);
		}
	};
}

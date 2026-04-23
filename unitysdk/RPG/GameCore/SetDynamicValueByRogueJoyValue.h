#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_METHOD_3_9D05CD8FA15ECB87_OFFSET UNITYSDK_OFFSET(0x18E26C00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_METHOD_3_E8EB66A195330250_OFFSET UNITYSDK_OFFSET(0x18E26B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueJoyValue_TypeDefinitionIndex = 20639;

	class SetDynamicValueByRogueJoyValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8EB66A195330250(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueJoyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueJoyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_METHOD_3_E8EB66A195330250_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D05CD8FA15ECB87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueJoyValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueJoyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_METHOD_3_9D05CD8FA15ECB87_OFFSET))(a1, a2);
		}
	};
}

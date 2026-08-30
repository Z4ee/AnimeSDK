#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM_METHOD_3_3CE5C364EF91CC50_OFFSET UNITYSDK_OFFSET(0x1D4F5800)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM_METHOD_3_9E82885F4351B85D_OFFSET UNITYSDK_OFFSET(0x1D4F5840)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNum_TypeDefinitionIndex = 21522;

	class SetDynamicValueByRogueBuffNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CE5C364EF91CC50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM_METHOD_3_3CE5C364EF91CC50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E82885F4351B85D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUM_METHOD_3_9E82885F4351B85D_OFFSET))(a1, a2);
		}
	};
}

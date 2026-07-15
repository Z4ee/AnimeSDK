#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_F730FDF3CBFBE4E8_OFFSET UNITYSDK_OFFSET(0x1C2E7020)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_FF7E693BA406B46C_OFFSET UNITYSDK_OFFSET(0x1C2E6FD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E7010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueDifficultyCompMappingParam_TypeDefinitionIndex = 20995;

	class SetDynamicValueByRogueDifficultyCompMappingParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FF7E693BA406B46C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_FF7E693BA406B46C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F730FDF3CBFBE4E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_F730FDF3CBFBE4E8_OFFSET))(a1, a2);
		}
	};
}

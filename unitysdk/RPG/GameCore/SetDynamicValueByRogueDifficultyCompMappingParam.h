#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_A54F7E7D58BF0CA8_OFFSET UNITYSDK_OFFSET(0x176C3790)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_F730FDF3CBFBE4E8_OFFSET UNITYSDK_OFFSET(0x176C3820)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C37F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueDifficultyCompMappingParam_TypeDefinitionIndex = 19966;

	class SetDynamicValueByRogueDifficultyCompMappingParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A54F7E7D58BF0CA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_A54F7E7D58BF0CA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F730FDF3CBFBE4E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_METHOD_4_F730FDF3CBFBE4E8_OFFSET))(a1, a2);
		}
	};
}

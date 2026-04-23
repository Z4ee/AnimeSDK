#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_METHOD_4_7D5D6F10A42F7EF5_OFFSET UNITYSDK_OFFSET(0x18E26780)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_METHOD_4_BCD02156F4AE4AE5_OFFSET UNITYSDK_OFFSET(0x18E266F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumWithCategoryParam_TypeDefinitionIndex = 20625;

	class SetDynamicValueByRogueBuffNumWithCategoryParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BCD02156F4AE4AE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_METHOD_4_BCD02156F4AE4AE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D5D6F10A42F7EF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_METHOD_4_7D5D6F10A42F7EF5_OFFSET))(a1, a2);
		}
	};
}

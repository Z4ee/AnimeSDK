#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_METHOD_2_011E0CD75401A47B_OFFSET UNITYSDK_OFFSET(0x1D7DD950)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_METHOD_2_829A56F501E38B7D_OFFSET UNITYSDK_OFFSET(0x1D7DDC50)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBaseEventCondition_TypeDefinitionIndex = 18862;

	class LittleGameBaseEventCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_011E0CD75401A47B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBaseEventCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBaseEventCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_METHOD_2_011E0CD75401A47B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_829A56F501E38B7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_METHOD_2_829A56F501E38B7D_OFFSET))(a1, a2);
		}
	};
}

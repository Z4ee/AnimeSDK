#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_METHOD_3_02EDC889716874F5_OFFSET UNITYSDK_OFFSET(0x1D4F5AB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_METHOD_3_CBAB67AA588DB0A8_OFFSET UNITYSDK_OFFSET(0x1D4F5A70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueDiceAccumulate_TypeDefinitionIndex = 21546;

	class SetDynamicValueByRogueDiceAccumulate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBAB67AA588DB0A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_METHOD_3_CBAB67AA588DB0A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02EDC889716874F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_METHOD_3_02EDC889716874F5_OFFSET))(a1, a2);
		}
	};
}

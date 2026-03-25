#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_18DA571AC573BEA8_OFFSET UNITYSDK_OFFSET(0x17388CD0)
#define RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_7A32226133655B22_OFFSET UNITYSDK_OFFSET(0x17388DB0)
#define RPG_GAMECORE_MARBLEBYCASTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17388D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCasterAction_TypeDefinitionIndex = 15448;

	class MarbleByCasterAction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_18DA571AC573BEA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCasterAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCasterAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_18DA571AC573BEA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A32226133655B22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCasterAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCasterAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_7A32226133655B22_OFFSET))(a1, a2);
		}
	};
}

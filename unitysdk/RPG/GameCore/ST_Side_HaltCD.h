#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_463E6ED3E041D07F_OFFSET UNITYSDK_OFFSET(0x1D4D00B0)
#define RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_6C07BB4817BB9B42_OFFSET UNITYSDK_OFFSET(0x1D4D0180)
#define RPG_GAMECORE_ST_SIDE_HALTCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_HaltCD_TypeDefinitionIndex = 19903;

	class ST_Side_HaltCD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_463E6ED3E041D07F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HaltCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HaltCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_463E6ED3E041D07F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C07BB4817BB9B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_6C07BB4817BB9B42_OFFSET))(a1, a2);
		}
	};
}

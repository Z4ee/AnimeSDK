#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_6C07BB4817BB9B42_OFFSET UNITYSDK_OFFSET(0x1768B460)
#define RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_B9F612BE2EF92D05_OFFSET UNITYSDK_OFFSET(0x17698CB0)
#define RPG_GAMECORE_ST_SIDE_HALTCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1768B410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_HaltCD_TypeDefinitionIndex = 18422;

	class ST_Side_HaltCD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9F612BE2EF92D05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HaltCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HaltCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_B9F612BE2EF92D05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C07BB4817BB9B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_METHOD_4_6C07BB4817BB9B42_OFFSET))(a1, a2);
		}
	};
}

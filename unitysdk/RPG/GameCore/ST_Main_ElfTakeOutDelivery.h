#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_METHOD_4_0E66D38F073944FE_OFFSET UNITYSDK_OFFSET(0x19C00810)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_METHOD_4_6126E519EFECBE69_OFFSET UNITYSDK_OFFSET(0x19C17F40)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C007C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutDelivery_TypeDefinitionIndex = 20343;

	class ST_Main_ElfTakeOutDelivery : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6126E519EFECBE69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_METHOD_4_6126E519EFECBE69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E66D38F073944FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_METHOD_4_0E66D38F073944FE_OFFSET))(a1, a2);
		}
	};
}

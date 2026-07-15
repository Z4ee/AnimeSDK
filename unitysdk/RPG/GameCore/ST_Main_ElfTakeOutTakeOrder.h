#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_METHOD_4_41946CB3B694E9AF_OFFSET UNITYSDK_OFFSET(0x1B7827B0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_METHOD_4_D1D70C331C814932_OFFSET UNITYSDK_OFFSET(0x1B7826E0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7827A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutTakeOrder_TypeDefinitionIndex = 20735;

	class ST_Main_ElfTakeOutTakeOrder : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1D70C331C814932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_METHOD_4_D1D70C331C814932_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41946CB3B694E9AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_METHOD_4_41946CB3B694E9AF_OFFSET))(a1, a2);
		}
	};
}

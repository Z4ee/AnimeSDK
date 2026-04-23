#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_METHOD_4_01ACD4687668A843_OFFSET UNITYSDK_OFFSET(0x18DF0410)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_METHOD_4_1D97BAE459611154_OFFSET UNITYSDK_OFFSET(0x18DE7D20)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE7CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCleanTable_TypeDefinitionIndex = 20380;

	class ST_Main_ElfWaiterCleanTable : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_01ACD4687668A843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_METHOD_4_01ACD4687668A843_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D97BAE459611154(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_METHOD_4_1D97BAE459611154_OFFSET))(a1, a2);
		}
	};
}

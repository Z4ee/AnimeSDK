#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_3DB9107124CCCC9E_OFFSET UNITYSDK_OFFSET(0x18DE7F50)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_9A7F110306EEB989_OFFSET UNITYSDK_OFFSET(0x18DF0530)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterEnterWait_TypeDefinitionIndex = 20385;

	class ST_Main_ElfWaiterEnterWait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A7F110306EEB989(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_9A7F110306EEB989_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DB9107124CCCC9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_3DB9107124CCCC9E_OFFSET))(a1, a2);
		}
	};
}

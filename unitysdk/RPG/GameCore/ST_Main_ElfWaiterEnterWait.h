#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_3DB9107124CCCC9E_OFFSET UNITYSDK_OFFSET(0x1DB3C4D0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_78AB6E9B0A0B5F9B_OFFSET UNITYSDK_OFFSET(0x1DB3C400)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3C4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterEnterWait_TypeDefinitionIndex = 21280;

	class ST_Main_ElfWaiterEnterWait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78AB6E9B0A0B5F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_78AB6E9B0A0B5F9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DB9107124CCCC9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_METHOD_4_3DB9107124CCCC9E_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_METHOD_4_011B2438C6A538B3_OFFSET UNITYSDK_OFFSET(0x19C00C70)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_METHOD_4_180A7231BA83051C_OFFSET UNITYSDK_OFFSET(0x19C18180)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutWait_TypeDefinitionIndex = 20342;

	class ST_Main_ElfTakeOutWait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_180A7231BA83051C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_METHOD_4_180A7231BA83051C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_011B2438C6A538B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_METHOD_4_011B2438C6A538B3_OFFSET))(a1, a2);
		}
	};
}

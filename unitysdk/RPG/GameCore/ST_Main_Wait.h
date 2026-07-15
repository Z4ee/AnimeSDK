#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_WAIT_METHOD_4_4D567DE31375D657_OFFSET UNITYSDK_OFFSET(0x1B787330)
#define RPG_GAMECORE_ST_MAIN_WAIT_METHOD_4_7D51BC927B83FADC_OFFSET UNITYSDK_OFFSET(0x1B787370)
#define RPG_GAMECORE_ST_MAIN_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B787360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Wait_TypeDefinitionIndex = 19323;

	class ST_Main_Wait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D567DE31375D657(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Wait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Wait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT_METHOD_4_4D567DE31375D657_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D51BC927B83FADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Wait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT_METHOD_4_7D51BC927B83FADC_OFFSET))(a1, a2);
		}
	};
}

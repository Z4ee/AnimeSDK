#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_STANDBY_METHOD_4_AA5DD8C57035D86A_OFFSET UNITYSDK_OFFSET(0x1D4CDDC0)
#define RPG_GAMECORE_ST_MAIN_STANDBY_METHOD_4_DC8D2AEC89B3FCDC_OFFSET UNITYSDK_OFFSET(0x1D4CDD80)
#define RPG_GAMECORE_ST_MAIN_STANDBY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CDDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_StandBy_TypeDefinitionIndex = 19863;

	class ST_Main_StandBy : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18
		::System::Boolean EnterSetAnim; // 0x1C
		::System::String* EnterParam; // 0x20
		::System::Int32 EnterIndex; // 0x28
		::System::Boolean ExitSetAnim; // 0x2C
		::System::String* ExitParam; // 0x30
		::System::Int32 ExitIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC8D2AEC89B3FCDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_StandBy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_StandBy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY_METHOD_4_DC8D2AEC89B3FCDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA5DD8C57035D86A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_StandBy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_StandBy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_STANDBY_METHOD_4_AA5DD8C57035D86A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPUZZLEREPORT_METHOD_3_447C60975DB5690E_OFFSET UNITYSDK_OFFSET(0x1D6B3B70)
#define RPG_GAMECORE_WOLFBROPUZZLEREPORT_METHOD_3_B83653BE60759046_OFFSET UNITYSDK_OFFSET(0x1D6B3B30)
#define RPG_GAMECORE_WOLFBROPUZZLEREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleReport_TypeDefinitionIndex = 20132;

	class WolfBroPuzzleReport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReportScan; // 0x18
		::System::UInt32 ReportScanSkillID; // 0x1C
		::System::Boolean ReportHit; // 0x20
		::System::Boolean ReportHide; // 0x21
		::System::Boolean ReportTV; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B83653BE60759046(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleReport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleReport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT_METHOD_3_B83653BE60759046_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_447C60975DB5690E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleReport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleReport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT_METHOD_3_447C60975DB5690E_OFFSET))(a1, a2);
		}
	};
}

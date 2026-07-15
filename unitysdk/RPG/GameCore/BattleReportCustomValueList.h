#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleReportCustomValue; }

#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_METHOD_2_F50C8818BE6D2419_OFFSET UNITYSDK_OFFSET(0x1A3F7790)
#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F7850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleReportCustomValueList_TypeDefinitionIndex = 16432;

	class BattleReportCustomValueList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleReportCustomValue*>* ReportList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F50C8818BE6D2419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleReportCustomValueList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleReportCustomValueList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_METHOD_2_F50C8818BE6D2419_OFFSET))(a1, a2);
		}
	};
}

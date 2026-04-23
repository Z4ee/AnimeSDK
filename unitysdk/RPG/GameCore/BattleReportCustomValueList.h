#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleReportCustomValue; }

#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_METHOD_2_D39A2D318667561C_OFFSET UNITYSDK_OFFSET(0x18704210)
#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x187042E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleReportCustomValueList_TypeDefinitionIndex = 16207;

	class BattleReportCustomValueList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleReportCustomValue*>* ReportList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D39A2D318667561C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleReportCustomValueList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleReportCustomValueList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_METHOD_2_D39A2D318667561C_OFFSET))(a1, a2);
		}
	};
}

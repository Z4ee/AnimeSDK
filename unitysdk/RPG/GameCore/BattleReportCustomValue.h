#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_METHOD_2_EE294B130CC866BF_OFFSET UNITYSDK_OFFSET(0x1B305220)
#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B305380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleReportCustomValue_TypeDefinitionIndex = 16921;

	class BattleReportCustomValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ReportKey; // 0x10
		::RPG::GameCore::FixPoint DefaultValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE294B130CC866BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleReportCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleReportCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_METHOD_2_EE294B130CC866BF_OFFSET))(a1, a2);
		}
	};
}

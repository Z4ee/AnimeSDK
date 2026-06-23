#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRIDICEORACLEINFODIALOGOPENCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3E970)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleInfoDialogOpenContext_TypeDefinitionIndex = 85599;

	class UITriDiceOracleInfoDialogOpenContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* DetailSignIdListInOrder; // 0x28
		::System::String* TodaySignResShortContent; // 0x30
		::System::String* TodaySignResDetail; // 0x38
		::System::String* TodaySignResTitle; // 0x40
		::System::Boolean IsInHidingQuest; // 0x48
		::System::Int32 SignId; // 0x4C
		::MoleMole::TriDiceLuckPerformType TodayLuckPerformType; // 0x50
		::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 TodayLuckType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEINFODIALOGOPENCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

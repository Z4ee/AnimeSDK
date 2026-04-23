#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define CLASS_1_F26CFB63D7D5700B_METHOD_1_178A658DBFA7715E_OFFSET UNITYSDK_OFFSET(0x12403A20)
#define CLASS_1_F26CFB63D7D5700B_METHOD_1_B85E285ECEE63658_OFFSET UNITYSDK_OFFSET(0x12403990)
#define CLASS_1_F26CFB63D7D5700B_METHOD_1_C7105891E78E20D6_OFFSET UNITYSDK_OFFSET(0x12403920)
#define CLASS_1_F26CFB63D7D5700B_METHOD_1_CD538C1E858680DD_OFFSET UNITYSDK_OFFSET(0x12403C60)
#define CLASS_1_F26CFB63D7D5700B__CTOR_OFFSET UNITYSDK_OFFSET(0x12403A10)

inline static constexpr unsigned int Class_1_F26CFB63D7D5700B_TypeDefinitionIndex = 61604;

class Class_1_F26CFB63D7D5700B : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F26CFB63D7D5700B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_C7105891E78E20D6()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F26CFB63D7D5700B_METHOD_1_C7105891E78E20D6_OFFSET))(this);
	}

	static ::Class_1_F26CFB63D7D5700B* Method_1_B85E285ECEE63658(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_1_F26CFB63D7D5700B*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_F26CFB63D7D5700B_METHOD_1_B85E285ECEE63658_OFFSET))(a1);
	}

	::System::UInt32 Method_1_178A658DBFA7715E(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F26CFB63D7D5700B_METHOD_1_178A658DBFA7715E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD538C1E858680DD(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_F26CFB63D7D5700B_METHOD_1_CD538C1E858680DD_OFFSET))(this, a1);
	}
};

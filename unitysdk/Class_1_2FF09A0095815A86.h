#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1199;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FF09A0095815A86_METHOD_1_1AB3688B4C363E6A_OFFSET UNITYSDK_OFFSET(0x1619CD10)
#define CLASS_1_2FF09A0095815A86_METHOD_1_69DCE3A50C2BA385_OFFSET UNITYSDK_OFFSET(0x1619CB70)
#define CLASS_1_2FF09A0095815A86_METHOD_1_D3C183A1AD49E514_OFFSET UNITYSDK_OFFSET(0x1619CBF0)
#define CLASS_1_2FF09A0095815A86__CTOR_OFFSET UNITYSDK_OFFSET(0x1619CBE0)

inline static constexpr unsigned int Class_1_2FF09A0095815A86_TypeDefinitionIndex = 74336;

class Class_1_2FF09A0095815A86 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1199* GANLOCFFMEF; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1199*))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_2FF09A0095815A86* Method_1_69DCE3A50C2BA385(::Class_0_16E4307DCC419505_1199* a1)
	{
		return ((::Class_1_2FF09A0095815A86*(*)(::Class_0_16E4307DCC419505_1199*))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86_METHOD_1_69DCE3A50C2BA385_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_D3C183A1AD49E514(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86_METHOD_1_D3C183A1AD49E514_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_1AB3688B4C363E6A(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86_METHOD_1_1AB3688B4C363E6A_OFFSET))(this, a1, a2);
	}
};

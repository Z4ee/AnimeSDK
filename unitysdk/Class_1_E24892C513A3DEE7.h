#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1045;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E24892C513A3DEE7_METHOD_1_033DB43FC35FEC52_OFFSET UNITYSDK_OFFSET(0xA042220)
#define CLASS_1_E24892C513A3DEE7_METHOD_1_69DCE3A50C2BA385_OFFSET UNITYSDK_OFFSET(0xA042090)
#define CLASS_1_E24892C513A3DEE7_METHOD_1_A82F930ECC55DC1D_OFFSET UNITYSDK_OFFSET(0xA042110)
#define CLASS_1_E24892C513A3DEE7__CTOR_OFFSET UNITYSDK_OFFSET(0xA042100)

inline static constexpr unsigned int Class_1_E24892C513A3DEE7_TypeDefinitionIndex = 68701;

class Class_1_E24892C513A3DEE7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1045* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1045* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1045*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E24892C513A3DEE7* Method_1_69DCE3A50C2BA385(::Class_0_16E4307DCC419505_1045* a1)
	{
		return ((::Class_1_E24892C513A3DEE7*(*)(::Class_0_16E4307DCC419505_1045*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7_METHOD_1_69DCE3A50C2BA385_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_A82F930ECC55DC1D(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7_METHOD_1_A82F930ECC55DC1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_033DB43FC35FEC52(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7_METHOD_1_033DB43FC35FEC52_OFFSET))(this, a1, a2);
	}
};

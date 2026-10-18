#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1652F9EBC7E914D9;
class Class_1_581762AE8CB44C88;
class Class_1_6241E1C44338E6DB;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EC10)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__0_OFFSET UNITYSDK_OFFSET(0x15F2FE60)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__11_OFFSET UNITYSDK_OFFSET(0x15F2FF30)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__12_OFFSET UNITYSDK_OFFSET(0x15F30030)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__5_OFFSET UNITYSDK_OFFSET(0x15F2FEE0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__ISPROGRESSMET_15_OFFSET UNITYSDK_OFFSET(0x15F30300)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__MATCHES_14_OFFSET UNITYSDK_OFFSET(0x15F300D0)

inline static constexpr unsigned int Class_1_581762AE8CB44C88___c__DisplayClass54_0_TypeDefinitionIndex = 79451;

class Class_1_581762AE8CB44C88___c__DisplayClass54_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>* indexOfFitAttributeType; // 0x10
	::Class_1_581762AE8CB44C88* __4__this; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>* indexOfNotMetTrait; // 0x20
	::Class_1_6241E1C44338E6DB* attrProgress; // 0x28
	::Class_1_D05699509194BF9B* mold; // 0x30
	::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* productTraits; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__0_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__5(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__5_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__11(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__11_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__12(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__12_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_g__Matches_14(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__MATCHES_14_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_g__IsProgressMet_15(::Class_1_1652F9EBC7E914D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS54_0___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_G__ISPROGRESSMET_15_OFFSET))(this, a1);
	}
};

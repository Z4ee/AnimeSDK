#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1652F9EBC7E914D9;
class Class_1_581762AE8CB44C88;
class Class_1_6241E1C44338E6DB;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EBF0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__0_OFFSET UNITYSDK_OFFSET(0x15F2F820)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__6_OFFSET UNITYSDK_OFFSET(0x15F2F8A0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__ISPROGRESSMET_9_OFFSET UNITYSDK_OFFSET(0x15F2F9E0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__MATCHES_8_OFFSET UNITYSDK_OFFSET(0x15F2F940)

inline static constexpr unsigned int Class_1_581762AE8CB44C88___c__DisplayClass52_0_TypeDefinitionIndex = 79449;

class Class_1_581762AE8CB44C88___c__DisplayClass52_0 : public ::System::Object
{
public:
	::Class_1_581762AE8CB44C88* __4__this; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>* indexOfNotMetAttributeType; // 0x18
	::Class_1_6241E1C44338E6DB* attrProgress; // 0x20
	::Class_1_D05699509194BF9B* mold; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryRecommendMoldForAttrNotMetOnly_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__0_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__6(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__6_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrNotMetOnly_g__Matches_8(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__MATCHES_8_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrNotMetOnly_g__IsProgressMet_9(::Class_1_1652F9EBC7E914D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS52_0___TRYRECOMMENDMOLDFORATTRNOTMETONLY_G__ISPROGRESSMET_9_OFFSET))(this, a1);
	}
};

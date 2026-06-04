#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_773;
class Class_1_1C706860DB902897_1;
class Class_1_D17272E82AE804C2_374;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DAD847F9DDBFA2F7_METHOD_1_19D7D2BB92007287_OFFSET UNITYSDK_OFFSET(0xAD41770)
#define CLASS_1_DAD847F9DDBFA2F7_METHOD_1_A4CA160E407D85C6_OFFSET UNITYSDK_OFFSET(0xAD41BD0)
#define CLASS_1_DAD847F9DDBFA2F7_METHOD_1_BD90F95E599C9626_OFFSET UNITYSDK_OFFSET(0xAD41360)
#define CLASS_1_DAD847F9DDBFA2F7_METHOD_1_D2B7896BA94EEFE9_OFFSET UNITYSDK_OFFSET(0xAD417C0)
#define CLASS_1_DAD847F9DDBFA2F7__CTOR_OFFSET UNITYSDK_OFFSET(0xAD41350)

inline static constexpr unsigned int Class_1_DAD847F9DDBFA2F7_TypeDefinitionIndex = 60776;

class Class_1_DAD847F9DDBFA2F7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_773* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_773* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + CLASS_1_DAD847F9DDBFA2F7__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* Method_1_BD90F95E599C9626(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_374*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_374*>*))((::PBYTE)hIl2Cpp + CLASS_1_DAD847F9DDBFA2F7_METHOD_1_BD90F95E599C9626_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_D2B7896BA94EEFE9(::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_DAD847F9DDBFA2F7_METHOD_1_D2B7896BA94EEFE9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_19D7D2BB92007287(::Class_1_D17272E82AE804C2_374* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_374*))((::PBYTE)hIl2Cpp + CLASS_1_DAD847F9DDBFA2F7_METHOD_1_19D7D2BB92007287_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_A4CA160E407D85C6(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_DAD847F9DDBFA2F7_METHOD_1_A4CA160E407D85C6_OFFSET))(this, a1);
	}
};

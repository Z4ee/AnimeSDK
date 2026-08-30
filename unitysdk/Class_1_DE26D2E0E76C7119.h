#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
class Class_1_1C706860DB902897_1;
class Class_1_D17272E82AE804C2_430;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE26D2E0E76C7119_METHOD_1_37D396B55C14B98C_OFFSET UNITYSDK_OFFSET(0x11600840)
#define CLASS_1_DE26D2E0E76C7119_METHOD_1_50484B3F3AA1A21B_OFFSET UNITYSDK_OFFSET(0x11600DE0)
#define CLASS_1_DE26D2E0E76C7119_METHOD_1_A4CA160E407D85C6_OFFSET UNITYSDK_OFFSET(0x116013D0)
#define CLASS_1_DE26D2E0E76C7119_METHOD_1_DB577E0689275197_OFFSET UNITYSDK_OFFSET(0x11600E30)
#define CLASS_1_DE26D2E0E76C7119__CTOR_OFFSET UNITYSDK_OFFSET(0x11600830)

inline static constexpr unsigned int Class_1_DE26D2E0E76C7119_TypeDefinitionIndex = 65053;

class Class_1_DE26D2E0E76C7119 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_855* BABBJILOOAL; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_855* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_1_DE26D2E0E76C7119__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* Method_1_37D396B55C14B98C(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_430*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_430*>*))((::PBYTE)hIl2Cpp + CLASS_1_DE26D2E0E76C7119_METHOD_1_37D396B55C14B98C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_DB577E0689275197(::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_DE26D2E0E76C7119_METHOD_1_DB577E0689275197_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_50484B3F3AA1A21B(::Class_1_D17272E82AE804C2_430* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_430*))((::PBYTE)hIl2Cpp + CLASS_1_DE26D2E0E76C7119_METHOD_1_50484B3F3AA1A21B_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_A4CA160E407D85C6(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_DE26D2E0E76C7119_METHOD_1_A4CA160E407D85C6_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
class Class_1_1C706860DB902897_1;
class Class_1_D17272E82AE804C2_361;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_4F41D6EB6F7A31E2_OFFSET UNITYSDK_OFFSET(0x118D6A40)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_5CAEFF3DDACA931D_OFFSET UNITYSDK_OFFSET(0x118D6DE0)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_B770BB1863BE0ABC_OFFSET UNITYSDK_OFFSET(0x118D69F0)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_F208FB54AA50FD9D_OFFSET UNITYSDK_OFFSET(0x118D6650)
#define CLASS_1_E2F94F2C3255DFC2__CTOR_OFFSET UNITYSDK_OFFSET(0x118D6640)

inline static constexpr unsigned int Class_1_E2F94F2C3255DFC2_TypeDefinitionIndex = 59841;

class Class_1_E2F94F2C3255DFC2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_722* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_722* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* Method_1_F208FB54AA50FD9D(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_361*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_361*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_F208FB54AA50FD9D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_4F41D6EB6F7A31E2(::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_4F41D6EB6F7A31E2_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_B770BB1863BE0ABC(::Class_1_D17272E82AE804C2_361* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_361*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_B770BB1863BE0ABC_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_5CAEFF3DDACA931D(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_5CAEFF3DDACA931D_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
class Class_1_A291A0C2D65983FA;
class Class_1_FA4F4A67B1C04320_352;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_4F41D6EB6F7A31E2_OFFSET UNITYSDK_OFFSET(0xB899630)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_B770BB1863BE0ABC_OFFSET UNITYSDK_OFFSET(0xB8995E0)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_DCACD1D5FD59EB10_OFFSET UNITYSDK_OFFSET(0xB8999D0)
#define CLASS_1_E2F94F2C3255DFC2_METHOD_1_F208FB54AA50FD9D_OFFSET UNITYSDK_OFFSET(0xB899240)
#define CLASS_1_E2F94F2C3255DFC2__CTOR_OFFSET UNITYSDK_OFFSET(0xB899230)

inline static constexpr unsigned int Class_1_E2F94F2C3255DFC2_TypeDefinitionIndex = 52778;

class Class_1_E2F94F2C3255DFC2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_631* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_631* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* Method_1_F208FB54AA50FD9D(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_352*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_352*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_F208FB54AA50FD9D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_4F41D6EB6F7A31E2(::System::Collections::Generic::IList_1<::Class_1_A291A0C2D65983FA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_4F41D6EB6F7A31E2_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_B770BB1863BE0ABC(::Class_1_FA4F4A67B1C04320_352* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_352*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_B770BB1863BE0ABC_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_DCACD1D5FD59EB10(::Class_1_A291A0C2D65983FA* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + CLASS_1_E2F94F2C3255DFC2_METHOD_1_DCACD1D5FD59EB10_OFFSET))(this, a1);
	}
};

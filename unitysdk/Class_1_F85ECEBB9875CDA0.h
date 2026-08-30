#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_245F843833EA3F6E;
class Class_1_D17272E82AE804C2_976;
class Class_1_D17272E82AE804C2_978;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F85ECEBB9875CDA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A1A8E0)
#define CLASS_1_F85ECEBB9875CDA0_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A1BE10)
#define CLASS_1_F85ECEBB9875CDA0_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x18A1BDD0)
#define CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x18A1BE90)
#define CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x18A1BCF0)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_509EEE97CD8DEE5D_OFFSET UNITYSDK_OFFSET(0x18A1AAB0)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_7B6A53E0C84FF084_OFFSET UNITYSDK_OFFSET(0x18A1AF50)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_D24814EB616814F2_OFFSET UNITYSDK_OFFSET(0x18A1BD60)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_DDE1FF89200004FE_OFFSET UNITYSDK_OFFSET(0x18A1B470)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_ECCA82D6CAF5195B_OFFSET UNITYSDK_OFFSET(0x18A1AA10)
#define CLASS_1_F85ECEBB9875CDA0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1A7E0)

inline static constexpr unsigned int Class_1_F85ECEBB9875CDA0_TypeDefinitionIndex = 67417;

class Class_1_F85ECEBB9875CDA0 : public ::System::Object
{
public:
	::RPG::Client::RogueMagicScepterDataItem* PAKNADCNPMB; // 0x10
	::RPG::Client::RogueMagicScepterInfo* OLOCIGECHBG; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* BKADBEIPNJC; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* MHCEPJECNGO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* LMKAMANCJOD; // 0x30

	::System::Void _ctor(::RPG::Client::RogueMagicScepterInfo* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_ECCA82D6CAF5195B(::Class_1_245F843833EA3F6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_ECCA82D6CAF5195B_OFFSET))(this, a1);
	}

	::System::Void Method_1_509EEE97CD8DEE5D(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_509EEE97CD8DEE5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6A53E0C84FF084(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_978*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_978*>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_7B6A53E0C84FF084_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDE1FF89200004FE(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_976*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_976*>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_DDE1FF89200004FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D24814EB616814F2(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_D24814EB616814F2_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_GETLOCKEDUNITS_OFFSET))(this);
	}

	::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_GETALLSLOTCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITUID_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITDATAITEM_OFFSET))(this, a1, a2);
	}
};

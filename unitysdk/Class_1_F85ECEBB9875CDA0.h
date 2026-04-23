#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6AD63169696218E7;
class Class_1_D17272E82AE804C2_806;
class Class_1_D1E0AD3915BCCF29_105;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F85ECEBB9875CDA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ACED70)
#define CLASS_1_F85ECEBB9875CDA0_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x10AD0050)
#define CLASS_1_F85ECEBB9875CDA0_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x10AD0010)
#define CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x10AD00D0)
#define CLASS_1_F85ECEBB9875CDA0_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x10ACFF30)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_65379FCF37D55E39_OFFSET UNITYSDK_OFFSET(0x10ACF330)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_77BD26FBF553005C_OFFSET UNITYSDK_OFFSET(0x10ACEFA0)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_856E06CD67AB4503_OFFSET UNITYSDK_OFFSET(0x10ACF6D0)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_B270AAA16AC47A02_OFFSET UNITYSDK_OFFSET(0x10ACEEC0)
#define CLASS_1_F85ECEBB9875CDA0_METHOD_1_D24814EB616814F2_OFFSET UNITYSDK_OFFSET(0x10ACFFA0)
#define CLASS_1_F85ECEBB9875CDA0__CTOR_OFFSET UNITYSDK_OFFSET(0x10ACEC70)

inline static constexpr unsigned int Class_1_F85ECEBB9875CDA0_TypeDefinitionIndex = 62121;

class Class_1_F85ECEBB9875CDA0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* Field_1_4; // 0x20
	::RPG::Client::RogueMagicScepterDataItem* Field_1_1; // 0x28
	::RPG::Client::RogueMagicScepterInfo* Field_1_0; // 0x30

	::System::Void _ctor(::RPG::Client::RogueMagicScepterInfo* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B270AAA16AC47A02(::Class_1_6AD63169696218E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_B270AAA16AC47A02_OFFSET))(this, a1);
	}

	::System::Void Method_1_77BD26FBF553005C(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_77BD26FBF553005C_OFFSET))(this, a1);
	}

	::System::Void Method_1_65379FCF37D55E39(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_806*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_806*>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_65379FCF37D55E39_OFFSET))(this, a1);
	}

	::System::Void Method_1_856E06CD67AB4503(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_105*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_105*>*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0_METHOD_1_856E06CD67AB4503_OFFSET))(this, a1);
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

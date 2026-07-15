#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6EA5A4B6BD5D6920_CLEAR_OFFSET UNITYSDK_OFFSET(0x16035CD0)
#define CLASS_1_6EA5A4B6BD5D6920_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x160359F0)
#define CLASS_1_6EA5A4B6BD5D6920_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x16035990)
#define CLASS_1_6EA5A4B6BD5D6920_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x16035A50)
#define CLASS_1_6EA5A4B6BD5D6920_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x16035B80)
#define CLASS_1_6EA5A4B6BD5D6920_GET_BASICPOWER_OFFSET UNITYSDK_OFFSET(0x16035810)
#define CLASS_1_6EA5A4B6BD5D6920_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0x16035930)
#define CLASS_1_6EA5A4B6BD5D6920_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x160357B0)
#define CLASS_1_6EA5A4B6BD5D6920_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16035760)
#define CLASS_1_6EA5A4B6BD5D6920_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0x160358D0)
#define CLASS_1_6EA5A4B6BD5D6920_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x16035710)
#define CLASS_1_6EA5A4B6BD5D6920_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x16035870)
#define CLASS_1_6EA5A4B6BD5D6920_METHOD_1_7569C64E71BFAC8F_OFFSET UNITYSDK_OFFSET(0x16035E10)
#define CLASS_1_6EA5A4B6BD5D6920_METHOD_1_B279EAC5AEAF0B47_OFFSET UNITYSDK_OFFSET(0x16035D70)
#define CLASS_1_6EA5A4B6BD5D6920__CTOR_OFFSET UNITYSDK_OFFSET(0x16035EF0)

inline static constexpr unsigned int Class_1_6EA5A4B6BD5D6920_TypeDefinitionIndex = 64429;

class Class_1_6EA5A4B6BD5D6920 : public ::System::Object
{
public:
	::RPG::Client::RogueMagicScepterDataItem* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::RPG::Client::RogueMagicUnitDataItem*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ScepterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_SCEPTERID_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_LEVEL_OFFSET))(this);
	}

	::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
	{
		return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_FUNCTYPE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_BasicPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_BASICPOWER_OFFSET))(this);
	}

	::RPG::GameCore::RogueMagicStyleType get_StyleType()
	{
		return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_STYLETYPE_OFFSET))(this);
	}

	::RPG::GameCore::RogueMagicRangeType get_LimitRangeType()
	{
		return ((::RPG::GameCore::RogueMagicRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_LIMITRANGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* get_EffectTypes()
	{
		return ((::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GET_EFFECTTYPES_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GETLOCKEDUNITS_OFFSET))(this);
	}

	::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GETALLSLOTCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GETSLOTUNITDATAITEM_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_GETSLOTUNITUID_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_B279EAC5AEAF0B47(::RPG::Client::RogueMagicScepterDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_METHOD_1_B279EAC5AEAF0B47_OFFSET))(this, a1);
	}

	::System::Void Method_1_7569C64E71BFAC8F(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2, ::RPG::Client::RogueMagicUnitDataItem* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_6EA5A4B6BD5D6920_METHOD_1_7569C64E71BFAC8F_OFFSET))(this, a1, a2, a3);
	}
};

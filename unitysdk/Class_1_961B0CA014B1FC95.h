#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_961B0CA014B1FC95_GET_ADDSTATTIERMAP_OFFSET UNITYSDK_OFFSET(0xB5E1C30)
#define CLASS_1_961B0CA014B1FC95_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xB5E1C70)
#define CLASS_1_961B0CA014B1FC95_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5E1C90)
#define CLASS_1_961B0CA014B1FC95_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0xB5E1C10)
#define CLASS_1_961B0CA014B1FC95_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5E1BD0)
#define CLASS_1_961B0CA014B1FC95_GET_PARTID_OFFSET UNITYSDK_OFFSET(0xB5E1BB0)
#define CLASS_1_961B0CA014B1FC95_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB5E1C50)
#define CLASS_1_961B0CA014B1FC95_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xB5E1BF0)
#define CLASS_1_961B0CA014B1FC95_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB5E1CB0)
#define CLASS_1_961B0CA014B1FC95_SET_ADDSTATTIERMAP_OFFSET UNITYSDK_OFFSET(0xB5E1C40)
#define CLASS_1_961B0CA014B1FC95_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xB5E1C80)
#define CLASS_1_961B0CA014B1FC95_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5E1CA0)
#define CLASS_1_961B0CA014B1FC95_SET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0xB5E1C20)
#define CLASS_1_961B0CA014B1FC95_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB5E1BE0)
#define CLASS_1_961B0CA014B1FC95_SET_PARTID_OFFSET UNITYSDK_OFFSET(0xB5E1BC0)
#define CLASS_1_961B0CA014B1FC95_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB5E1C60)
#define CLASS_1_961B0CA014B1FC95_SET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xB5E1C00)
#define CLASS_1_961B0CA014B1FC95__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E1D00)

inline static constexpr unsigned int Class_1_961B0CA014B1FC95_TypeDefinitionIndex = 80366;

class Class_1_961B0CA014B1FC95 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _AddStatTierMap_k__BackingField; // 0x18
	::System::String* _AssetPath_k__BackingField; // 0x20
	::System::Boolean _IsDefault_k__BackingField; // 0x28
	::System::UInt32 _SkillID_k__BackingField; // 0x2C
	::RPG::GameCore::B51RacingPartType _SlotType_k__BackingField; // 0x30
	::System::UInt32 _PartID_k__BackingField; // 0x34
	::RPG::Client::TextID _Name_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PartID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_PARTID_OFFSET))(this);
	}

	::System::Void set_PartID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_PARTID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::B51RacingPartType get_SlotType()
	{
		return ((::RPG::GameCore::B51RacingPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_SLOTTYPE_OFFSET))(this);
	}

	::System::Void set_SlotType(::RPG::GameCore::B51RacingPartType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_SLOTTYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDefault()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_ISDEFAULT_OFFSET))(this);
	}

	::System::Void set_IsDefault(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_ISDEFAULT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_AddStatTierMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_ADDSTATTIERMAP_OFFSET))(this);
	}

	::System::Void set_AddStatTierMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_ADDSTATTIERMAP_OFFSET))(this, a1);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::String* get_AssetPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_ASSETPATH_OFFSET))(this);
	}

	::System::Void set_AssetPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_ASSETPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B0CA014B1FC95_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

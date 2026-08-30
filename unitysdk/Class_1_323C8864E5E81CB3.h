#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_323C8864E5E81CB3_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1808D570)
#define CLASS_1_323C8864E5E81CB3_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1808D530)
#define CLASS_1_323C8864E5E81CB3_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1808D550)
#define CLASS_1_323C8864E5E81CB3_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1808D580)
#define CLASS_1_323C8864E5E81CB3_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1808D540)
#define CLASS_1_323C8864E5E81CB3_SET_DAY_OFFSET UNITYSDK_OFFSET(0x1808D560)
#define CLASS_1_323C8864E5E81CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1808D590)

inline static constexpr unsigned int Class_1_323C8864E5E81CB3_TypeDefinitionIndex = 80333;

class Class_1_323C8864E5E81CB3 : public ::System::Object
{
public:
	::System::UInt32 _CycleID_k__BackingField; // 0x10
	::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x14
	::System::UInt32 _Day_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CycleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_GET_CYCLEID_OFFSET))(this);
	}

	::System::Void set_CycleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_SET_CYCLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_GET_DAY_OFFSET))(this);
	}

	::System::Void set_Day(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_SET_DAY_OFFSET))(this, a1);
	}

	::RPG::GameCore::B51RacingContentType get_ContentType()
	{
		return ((::RPG::GameCore::B51RacingContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::RPG::GameCore::B51RacingContentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + CLASS_1_323C8864E5E81CB3_SET_CONTENTTYPE_OFFSET))(this, a1);
	}
};

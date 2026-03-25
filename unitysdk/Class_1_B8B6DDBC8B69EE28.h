#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardPreCheckType.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/ChenLingGridStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingCardPreCheckRow; }

#define CLASS_1_B8B6DDBC8B69EE28_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x89D2330)
#define CLASS_1_B8B6DDBC8B69EE28_GET_ID_OFFSET UNITYSDK_OFFSET(0x89D22B0)
#define CLASS_1_B8B6DDBC8B69EE28_GET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0x89D2310)
#define CLASS_1_B8B6DDBC8B69EE28_GET_TOAST_OFFSET UNITYSDK_OFFSET(0x89D2350)
#define CLASS_1_B8B6DDBC8B69EE28_GET_USECARDID_OFFSET UNITYSDK_OFFSET(0x89D22F0)
#define CLASS_1_B8B6DDBC8B69EE28_GET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0x89D22D0)
#define CLASS_1_B8B6DDBC8B69EE28_METHOD_1_F3E869ED418D765A_OFFSET UNITYSDK_OFFSET(0x89D2370)
#define CLASS_1_B8B6DDBC8B69EE28_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x89D2340)
#define CLASS_1_B8B6DDBC8B69EE28_SET_ID_OFFSET UNITYSDK_OFFSET(0x89D22C0)
#define CLASS_1_B8B6DDBC8B69EE28_SET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0x89D2320)
#define CLASS_1_B8B6DDBC8B69EE28_SET_TOAST_OFFSET UNITYSDK_OFFSET(0x89D2360)
#define CLASS_1_B8B6DDBC8B69EE28_SET_USECARDID_OFFSET UNITYSDK_OFFSET(0x89D2300)
#define CLASS_1_B8B6DDBC8B69EE28_SET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0x89D22E0)
#define CLASS_1_B8B6DDBC8B69EE28__CTOR_OFFSET UNITYSDK_OFFSET(0x89D2420)

inline static constexpr unsigned int Class_1_B8B6DDBC8B69EE28_TypeDefinitionIndex = 62106;

class Class_1_B8B6DDBC8B69EE28 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingCardType _UseCardType_k__BackingField; // 0x10
	::RPG::GameCore::ChenLingCardPreCheckType _ConditionType_k__BackingField; // 0x14
	::System::UInt32 _UseCardID_k__BackingField; // 0x18
	::RPG::Client::TextID _Toast_k__BackingField; // 0x20
	::RPG::GameCore::ChenLingGridStatus _TargetGridType_k__BackingField; // 0x30
	::System::UInt32 _ID_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_ID_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingCardType get_UseCardType()
	{
		return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_USECARDTYPE_OFFSET))(this);
	}

	::System::Void set_UseCardType(::RPG::GameCore::ChenLingCardType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_USECARDTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_UseCardID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_USECARDID_OFFSET))(this);
	}

	::System::Void set_UseCardID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_USECARDID_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingGridStatus get_TargetGridType()
	{
		return ((::RPG::GameCore::ChenLingGridStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_TARGETGRIDTYPE_OFFSET))(this);
	}

	::System::Void set_TargetGridType(::RPG::GameCore::ChenLingGridStatus value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGridStatus))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_TARGETGRIDTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingCardPreCheckType get_ConditionType()
	{
		return ((::RPG::GameCore::ChenLingCardPreCheckType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_CONDITIONTYPE_OFFSET))(this);
	}

	::System::Void set_ConditionType(::RPG::GameCore::ChenLingCardPreCheckType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardPreCheckType))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_CONDITIONTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Toast()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_GET_TOAST_OFFSET))(this);
	}

	::System::Void set_Toast(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_SET_TOAST_OFFSET))(this, value);
	}

	static ::Class_1_B8B6DDBC8B69EE28* Method_1_F3E869ED418D765A(::RPG::GameCore::ChenLingCardPreCheckRow* a1)
	{
		return ((::Class_1_B8B6DDBC8B69EE28*(*)(::RPG::GameCore::ChenLingCardPreCheckRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8B6DDBC8B69EE28_METHOD_1_F3E869ED418D765A_OFFSET))(a1);
	}
};

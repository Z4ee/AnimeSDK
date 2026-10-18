#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardPreCheckType.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/ChenLingGridStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingCardPreCheckRow; }

#define CLASS_1_ABB5EA627A7A1251_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB7330B0)
#define CLASS_1_ABB5EA627A7A1251_GET_ID_OFFSET UNITYSDK_OFFSET(0xB733030)
#define CLASS_1_ABB5EA627A7A1251_GET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xB733090)
#define CLASS_1_ABB5EA627A7A1251_GET_TOAST_OFFSET UNITYSDK_OFFSET(0xB7330D0)
#define CLASS_1_ABB5EA627A7A1251_GET_USECARDID_OFFSET UNITYSDK_OFFSET(0xB733070)
#define CLASS_1_ABB5EA627A7A1251_GET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0xB733050)
#define CLASS_1_ABB5EA627A7A1251_METHOD_1_F3E869ED418D765A_OFFSET UNITYSDK_OFFSET(0xB7330F0)
#define CLASS_1_ABB5EA627A7A1251_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB7330C0)
#define CLASS_1_ABB5EA627A7A1251_SET_ID_OFFSET UNITYSDK_OFFSET(0xB733040)
#define CLASS_1_ABB5EA627A7A1251_SET_TARGETGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xB7330A0)
#define CLASS_1_ABB5EA627A7A1251_SET_TOAST_OFFSET UNITYSDK_OFFSET(0xB7330E0)
#define CLASS_1_ABB5EA627A7A1251_SET_USECARDID_OFFSET UNITYSDK_OFFSET(0xB733080)
#define CLASS_1_ABB5EA627A7A1251_SET_USECARDTYPE_OFFSET UNITYSDK_OFFSET(0xB733060)
#define CLASS_1_ABB5EA627A7A1251__CTOR_OFFSET UNITYSDK_OFFSET(0xB7331A0)

inline static constexpr unsigned int Class_1_ABB5EA627A7A1251_TypeDefinitionIndex = 76344;

class Class_1_ABB5EA627A7A1251 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingCardType _UseCardType_k__BackingField; // 0x10
	::RPG::GameCore::ChenLingCardPreCheckType _ConditionType_k__BackingField; // 0x14
	::System::UInt32 _UseCardID_k__BackingField; // 0x18
	::RPG::Client::TextID _Toast_k__BackingField; // 0x20
	::System::UInt32 _ID_k__BackingField; // 0x30
	::RPG::GameCore::ChenLingGridStatus _TargetGridType_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingCardType get_UseCardType()
	{
		return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_USECARDTYPE_OFFSET))(this);
	}

	::System::Void set_UseCardType(::RPG::GameCore::ChenLingCardType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_USECARDTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_UseCardID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_USECARDID_OFFSET))(this);
	}

	::System::Void set_UseCardID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_USECARDID_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingGridStatus get_TargetGridType()
	{
		return ((::RPG::GameCore::ChenLingGridStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_TARGETGRIDTYPE_OFFSET))(this);
	}

	::System::Void set_TargetGridType(::RPG::GameCore::ChenLingGridStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGridStatus))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_TARGETGRIDTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingCardPreCheckType get_ConditionType()
	{
		return ((::RPG::GameCore::ChenLingCardPreCheckType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_CONDITIONTYPE_OFFSET))(this);
	}

	::System::Void set_ConditionType(::RPG::GameCore::ChenLingCardPreCheckType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardPreCheckType))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_CONDITIONTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Toast()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_GET_TOAST_OFFSET))(this);
	}

	::System::Void set_Toast(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_SET_TOAST_OFFSET))(this, a1);
	}

	static ::Class_1_ABB5EA627A7A1251* Method_1_F3E869ED418D765A(::RPG::GameCore::ChenLingCardPreCheckRow* a1)
	{
		return ((::Class_1_ABB5EA627A7A1251*(*)(::RPG::GameCore::ChenLingCardPreCheckRow*))((::PBYTE)hIl2Cpp + CLASS_1_ABB5EA627A7A1251_METHOD_1_F3E869ED418D765A_OFFSET))(a1);
	}
};

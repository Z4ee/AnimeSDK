#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DD62B922D9C7B62B_GET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0x1551C500)
#define CLASS_1_DD62B922D9C7B62B_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1551C4E0)
#define CLASS_1_DD62B922D9C7B62B_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1551C4C0)
#define CLASS_1_DD62B922D9C7B62B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1551C520)
#define CLASS_1_DD62B922D9C7B62B_SET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0x1551C510)
#define CLASS_1_DD62B922D9C7B62B_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1551C4F0)
#define CLASS_1_DD62B922D9C7B62B_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1551C4D0)
#define CLASS_1_DD62B922D9C7B62B__CTOR_OFFSET UNITYSDK_OFFSET(0x1551C5A0)

inline static constexpr unsigned int Class_1_DD62B922D9C7B62B_TypeDefinitionIndex = 79759;

class Class_1_DD62B922D9C7B62B : public ::System::Object
{
public:
	::System::UInt32 _DeckSizeLimit_k__BackingField; // 0x10
	::RPG::GameCore::FateRinHouguOwnerType _Type_k__BackingField; // 0x14
	::RPG::Client::TextID _Name_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_Type()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_SET_TYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_SET_NAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_DeckSizeLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_GET_DECKSIZELIMIT_OFFSET))(this);
	}

	::System::Void set_DeckSizeLimit(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_SET_DECKSIZELIMIT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD62B922D9C7B62B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};

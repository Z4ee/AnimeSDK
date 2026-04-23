#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F6FE6E1D7EC0127D_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE63B200)
#define CLASS_1_F6FE6E1D7EC0127D_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xE63B220)
#define CLASS_1_F6FE6E1D7EC0127D_METHOD_1_C46B21EB390BA1CF_OFFSET UNITYSDK_OFFSET(0xE63B130)
#define CLASS_1_F6FE6E1D7EC0127D_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE63B210)
#define CLASS_1_F6FE6E1D7EC0127D_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xE63B230)
#define CLASS_1_F6FE6E1D7EC0127D__CTOR_OFFSET UNITYSDK_OFFSET(0xE63B1F0)

inline static constexpr unsigned int Class_1_F6FE6E1D7EC0127D_TypeDefinitionIndex = 69138;

class Class_1_F6FE6E1D7EC0127D : public ::System::Object
{
public:
	::System::UInt32 _Rarity_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D__CTOR_OFFSET))(this);
	}

	static ::Class_1_F6FE6E1D7EC0127D* Method_1_C46B21EB390BA1CF(::System::UInt32 a1)
	{
		return ((::Class_1_F6FE6E1D7EC0127D*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D_METHOD_1_C46B21EB390BA1CF_OFFSET))(a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D_SET_NAME_OFFSET))(this, value);
	}

	::System::UInt32 get_Rarity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6FE6E1D7EC0127D_SET_RARITY_OFFSET))(this, value);
	}
};

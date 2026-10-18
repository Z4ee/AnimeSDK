#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F38F1DFDC2D5A336_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBE94CC0)
#define CLASS_1_F38F1DFDC2D5A336_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE94C80)
#define CLASS_1_F38F1DFDC2D5A336_GET_PERCENTAGEVALUE_OFFSET UNITYSDK_OFFSET(0xBE94CA0)
#define CLASS_1_F38F1DFDC2D5A336_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBE94CD0)
#define CLASS_1_F38F1DFDC2D5A336_SET_ID_OFFSET UNITYSDK_OFFSET(0xBE94C90)
#define CLASS_1_F38F1DFDC2D5A336_SET_PERCENTAGEVALUE_OFFSET UNITYSDK_OFFSET(0xBE94CB0)
#define CLASS_1_F38F1DFDC2D5A336__CTOR_OFFSET UNITYSDK_OFFSET(0xBE94CE0)

inline static constexpr unsigned int Class_1_F38F1DFDC2D5A336_TypeDefinitionIndex = 68273;

class Class_1_F38F1DFDC2D5A336 : public ::System::Object
{
public:
	::RPG::Client::TextID _Desc_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x20
	::System::Single _PercentageValue_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_SET_ID_OFFSET))(this, a1);
	}

	::System::Single get_PercentageValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_GET_PERCENTAGEVALUE_OFFSET))(this);
	}

	::System::Void set_PercentageValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_SET_PERCENTAGEVALUE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_F38F1DFDC2D5A336_SET_DESC_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;
class Class_1_D17272E82AE804C2_445;

#define CLASS_2_5B87761511D998DB_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x15F7B790)
#define CLASS_2_5B87761511D998DB_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x15F7B770)
#define CLASS_2_5B87761511D998DB_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15F7B640)
#define CLASS_2_5B87761511D998DB_SET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x15F7B7A0)
#define CLASS_2_5B87761511D998DB_SET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x15F7B780)
#define CLASS_2_5B87761511D998DB_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F7B6A0)
#define CLASS_2_5B87761511D998DB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7B580)

inline static constexpr unsigned int Class_2_5B87761511D998DB_TypeDefinitionIndex = 62102;

class Class_2_5B87761511D998DB : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _LeftSkipCount_k__BackingField; // 0x28
	::System::UInt32 _TotalSkipCount_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_D17272E82AE804C2_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_445*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalSkipCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_GET_TOTALSKIPCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalSkipCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_SET_TOTALSKIPCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_LeftSkipCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_GET_LEFTSKIPCOUNT_OFFSET))(this);
	}

	::System::Void set_LeftSkipCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_SET_LEFTSKIPCOUNT_OFFSET))(this, a1);
	}
};

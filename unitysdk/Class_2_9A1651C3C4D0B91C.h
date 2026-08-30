#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_9A1651C3C4D0B91C_GET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0x19915720)
#define CLASS_2_9A1651C3C4D0B91C_GET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0x19915700)
#define CLASS_2_9A1651C3C4D0B91C_SET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0x19915730)
#define CLASS_2_9A1651C3C4D0B91C_SET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0x19915710)
#define CLASS_2_9A1651C3C4D0B91C_UPDATE_OFFSET UNITYSDK_OFFSET(0x19915630)
#define CLASS_2_9A1651C3C4D0B91C__CTOR_OFFSET UNITYSDK_OFFSET(0x19915600)

inline static constexpr unsigned int Class_2_9A1651C3C4D0B91C_TypeDefinitionIndex = 65087;

class Class_2_9A1651C3C4D0B91C : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _SrcRoleID_k__BackingField; // 0x28
	::System::UInt32 _DestRoleID_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SrcRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_GET_SRCROLEID_OFFSET))(this);
	}

	::System::Void set_SrcRoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_SET_SRCROLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_DestRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_GET_DESTROLEID_OFFSET))(this);
	}

	::System::Void set_DestRoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_SET_DESTROLEID_OFFSET))(this, a1);
	}
};

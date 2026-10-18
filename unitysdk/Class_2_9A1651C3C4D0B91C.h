#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_E591DF54310AABF5_1;

#define CLASS_2_9A1651C3C4D0B91C_GET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0xC27C230)
#define CLASS_2_9A1651C3C4D0B91C_GET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0xC27C210)
#define CLASS_2_9A1651C3C4D0B91C_SET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0xC27C240)
#define CLASS_2_9A1651C3C4D0B91C_SET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0xC27C220)
#define CLASS_2_9A1651C3C4D0B91C_UPDATE_OFFSET UNITYSDK_OFFSET(0xC27C140)
#define CLASS_2_9A1651C3C4D0B91C__CTOR_OFFSET UNITYSDK_OFFSET(0xC27C110)

inline static constexpr unsigned int Class_2_9A1651C3C4D0B91C_TypeDefinitionIndex = 65027;

class Class_2_9A1651C3C4D0B91C : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _DestRoleID_k__BackingField; // 0x28
	::System::UInt32 _SrcRoleID_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_9A1651C3C4D0B91C_UPDATE_OFFSET))(this, a1);
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

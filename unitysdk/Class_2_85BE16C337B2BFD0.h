#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_85BE16C337B2BFD0_GET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0x96BDDE0)
#define CLASS_2_85BE16C337B2BFD0_GET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0x96BDDC0)
#define CLASS_2_85BE16C337B2BFD0_SET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0x96BDDF0)
#define CLASS_2_85BE16C337B2BFD0_SET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0x96BDDD0)
#define CLASS_2_85BE16C337B2BFD0_UPDATE_OFFSET UNITYSDK_OFFSET(0x96BDCF0)
#define CLASS_2_85BE16C337B2BFD0__CTOR_OFFSET UNITYSDK_OFFSET(0x96BDCC0)
#define CLASS_2_85BE16C337B2BFD0___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x96BDE00)

inline static constexpr unsigned int Class_2_85BE16C337B2BFD0_TypeDefinitionIndex = 59874;

class Class_2_85BE16C337B2BFD0 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _DestRoleID_k__BackingField; // 0x28
	::System::UInt32 _SrcRoleID_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SrcRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_GET_SRCROLEID_OFFSET))(this);
	}

	::System::Void set_SrcRoleID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_SET_SRCROLEID_OFFSET))(this, value);
	}

	::System::UInt32 get_DestRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_GET_DESTROLEID_OFFSET))(this);
	}

	::System::Void set_DestRoleID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_SET_DESTROLEID_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};

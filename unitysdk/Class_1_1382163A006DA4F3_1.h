#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1382163A006DA4F3_1_GET_INCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C54FBD0)
#define CLASS_1_1382163A006DA4F3_1_GET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x1C54FBB0)
#define CLASS_1_1382163A006DA4F3_1_SET_INCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C54FBE0)
#define CLASS_1_1382163A006DA4F3_1_SET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x1C54FBC0)
#define CLASS_1_1382163A006DA4F3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544430)

inline static constexpr unsigned int Class_1_1382163A006DA4F3_1_TypeDefinitionIndex = 41874;

class Class_1_1382163A006DA4F3_1 : public ::System::Object
{
public:
	::System::UInt32 _PartnerActorID_k__BackingField; // 0x10
	::System::Int32 _IncreasePercent_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PartnerActorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_GET_PARTNERACTORID_OFFSET))(this);
	}

	::System::Void set_PartnerActorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_SET_PARTNERACTORID_OFFSET))(this, a1);
	}

	::System::Int32 get_IncreasePercent()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_GET_INCREASEPERCENT_OFFSET))(this);
	}

	::System::Void set_IncreasePercent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_SET_INCREASEPERCENT_OFFSET))(this, a1);
	}
};

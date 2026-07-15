#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_9_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x18F2C210)
#define CLASS_1_FF80A1ACD786CECB_9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18F2C220)
#define CLASS_1_FF80A1ACD786CECB_9__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2C200)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_9_TypeDefinitionIndex = 75757;

class Class_1_FF80A1ACD786CECB_9 : public ::System::Object
{
public:
	::System::Int32 _CardIndex_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CardIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_GET_CARDINDEX_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

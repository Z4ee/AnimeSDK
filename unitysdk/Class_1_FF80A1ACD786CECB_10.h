#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_10_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB7D6D40)
#define CLASS_1_FF80A1ACD786CECB_10_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB7D6D50)
#define CLASS_1_FF80A1ACD786CECB_10__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6D30)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_10_TypeDefinitionIndex = 80714;

class Class_1_FF80A1ACD786CECB_10 : public ::System::Object
{
public:
	::System::Int32 _CardIndex_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_10__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CardIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_10_GET_CARDINDEX_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_10_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

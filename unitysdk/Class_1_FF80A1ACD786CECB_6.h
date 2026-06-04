#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_6_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x136F8E10)
#define CLASS_1_FF80A1ACD786CECB_6__CTOR_OFFSET UNITYSDK_OFFSET(0x136F8E00)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_6_TypeDefinitionIndex = 73530;

class Class_1_FF80A1ACD786CECB_6 : public ::System::Object
{
public:
	::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_6__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_SenderRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_6_GET_SENDERRUNTIMEID_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_7_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x179D2F90)
#define CLASS_1_FF80A1ACD786CECB_7__CTOR_OFFSET UNITYSDK_OFFSET(0x179D2F80)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_7_TypeDefinitionIndex = 78726;

class Class_1_FF80A1ACD786CECB_7 : public ::System::Object
{
public:
	::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_7__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_SenderRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_7_GET_SENDERRUNTIMEID_OFFSET))(this);
	}
};

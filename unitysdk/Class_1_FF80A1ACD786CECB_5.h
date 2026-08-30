#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_5_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x165886E0)
#define CLASS_1_FF80A1ACD786CECB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x165886D0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_5_TypeDefinitionIndex = 78716;

class Class_1_FF80A1ACD786CECB_5 : public ::System::Object
{
public:
	::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_5__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_SenderRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_5_GET_SENDERRUNTIMEID_OFFSET))(this);
	}
};

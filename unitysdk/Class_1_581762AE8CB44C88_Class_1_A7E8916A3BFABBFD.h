#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD_GET_SHOULDPAUSE_OFFSET UNITYSDK_OFFSET(0x15F30440)
#define CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD_SET_SHOULDPAUSE_OFFSET UNITYSDK_OFFSET(0x15F30450)
#define CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F30460)

inline static constexpr unsigned int Class_1_581762AE8CB44C88_Class_1_A7E8916A3BFABBFD_TypeDefinitionIndex = 79444;

class Class_1_581762AE8CB44C88_Class_1_A7E8916A3BFABBFD : public ::System::Object
{
public:
	::System::Boolean _ShouldPause_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD__CTOR_OFFSET))(this);
	}

	::System::Boolean get_ShouldPause()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD_GET_SHOULDPAUSE_OFFSET))(this);
	}

	::System::Void set_ShouldPause(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_A7E8916A3BFABBFD_SET_SHOULDPAUSE_OFFSET))(this, a1);
	}
};

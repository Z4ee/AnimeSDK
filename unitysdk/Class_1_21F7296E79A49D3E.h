#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C6C803F6D2DDE4D8;

#define CLASS_1_21F7296E79A49D3E_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x134BE940)
#define CLASS_1_21F7296E79A49D3E_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x134BE950)
#define CLASS_1_21F7296E79A49D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x134BE960)

inline static constexpr unsigned int Class_1_21F7296E79A49D3E_TypeDefinitionIndex = 77565;

class Class_1_21F7296E79A49D3E : public ::System::Object
{
public:
	::Class_3_C6C803F6D2DDE4D8* _Handler_k__BackingField; // 0x10
	::System::Object* _Owner_k__BackingField; // 0x18

	::System::Void _ctor(::Class_3_C6C803F6D2DDE4D8* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C6C803F6D2DDE4D8*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21F7296E79A49D3E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_C6C803F6D2DDE4D8* get_Handler()
	{
		return ((::Class_3_C6C803F6D2DDE4D8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F7296E79A49D3E_GET_HANDLER_OFFSET))(this);
	}

	::System::Object* get_Owner()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F7296E79A49D3E_GET_OWNER_OFFSET))(this);
	}
};

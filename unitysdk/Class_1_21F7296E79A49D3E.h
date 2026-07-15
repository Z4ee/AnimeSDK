#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C6C803F6D2DDE4D8;

#define CLASS_1_21F7296E79A49D3E_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x185C8200)
#define CLASS_1_21F7296E79A49D3E_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x185C8210)
#define CLASS_1_21F7296E79A49D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x185C8220)

inline static constexpr unsigned int Class_1_21F7296E79A49D3E_TypeDefinitionIndex = 74080;

class Class_1_21F7296E79A49D3E : public ::System::Object
{
public:
	::System::Object* _Owner_k__BackingField; // 0x10
	::Class_3_C6C803F6D2DDE4D8* _Handler_k__BackingField; // 0x18

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

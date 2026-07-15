#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_FEDE82DA099BD3C0_GET_ISMAINTYPE_OFFSET UNITYSDK_OFFSET(0x1B218F70)
#define CLASS_2_FEDE82DA099BD3C0_GET_ISSTRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1B218F80)
#define CLASS_2_FEDE82DA099BD3C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B218F90)

inline static constexpr unsigned int Class_2_FEDE82DA099BD3C0_TypeDefinitionIndex = 10383;

class Class_2_FEDE82DA099BD3C0 : public ::System::Attribute
{
public:
	::System::Boolean _IsStructHandle_k__BackingField; // 0x10
	::System::Boolean _IsMainType_k__BackingField; // 0x11

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEDE82DA099BD3C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsMainType()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDE82DA099BD3C0_GET_ISMAINTYPE_OFFSET))(this);
	}

	::System::Boolean get_IsStructHandle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDE82DA099BD3C0_GET_ISSTRUCTHANDLE_OFFSET))(this);
	}
};

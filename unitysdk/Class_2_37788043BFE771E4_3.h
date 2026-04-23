#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_37788043BFE771E4_3_GET_ISMAINTYPE_OFFSET UNITYSDK_OFFSET(0x18BB9540)
#define CLASS_2_37788043BFE771E4_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB9550)

inline static constexpr unsigned int Class_2_37788043BFE771E4_3_TypeDefinitionIndex = 23482;

class Class_2_37788043BFE771E4_3 : public ::System::Attribute
{
public:
	::System::Boolean _IsMainType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4_3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMainType()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4_3_GET_ISMAINTYPE_OFFSET))(this);
	}
};

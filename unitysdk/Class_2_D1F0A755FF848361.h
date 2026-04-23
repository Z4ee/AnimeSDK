#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B357179601D6146.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_D1F0A755FF848361_METHOD_2_F6D857501FB9C4DB_OFFSET UNITYSDK_OFFSET(0x11178830)
#define CLASS_2_D1F0A755FF848361__CTOR_OFFSET UNITYSDK_OFFSET(0x11178910)

inline static constexpr unsigned int Class_2_D1F0A755FF848361_TypeDefinitionIndex = 59779;

class Class_2_D1F0A755FF848361 : public ::Class_1_2B357179601D6146
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1F0A755FF848361__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F6D857501FB9C4DB(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_D1F0A755FF848361_METHOD_2_F6D857501FB9C4DB_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_B85817849BC6CF88;

#define CLASS_1_769FBAD05D10E720_METHOD_1_5CB8764DC46A472D_OFFSET UNITYSDK_OFFSET(0x18DBF0B0)
#define CLASS_1_769FBAD05D10E720__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBF0A0)

inline static constexpr unsigned int Class_1_769FBAD05D10E720_TypeDefinitionIndex = 49795;

class Class_1_769FBAD05D10E720 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769FBAD05D10E720__CTOR_OFFSET))(this);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_5CB8764DC46A472D(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_B85817849BC6CF88* a3, ::System::Boolean a4)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::UInt32, ::System::UInt32, ::Class_1_B85817849BC6CF88*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_769FBAD05D10E720_METHOD_1_5CB8764DC46A472D_OFFSET))(a1, a2, a3, a4);
	}
};

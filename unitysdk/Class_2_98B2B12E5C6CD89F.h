#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E450C4D97FC83888;

#define CLASS_2_98B2B12E5C6CD89F_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x1B10B690)
#define CLASS_2_98B2B12E5C6CD89F_METHOD_2_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x1B10BDF0)
#define CLASS_2_98B2B12E5C6CD89F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10B4A0)

inline static constexpr unsigned int Class_2_98B2B12E5C6CD89F_TypeDefinitionIndex = 40045;

class Class_2_98B2B12E5C6CD89F : public ::Class_1_5BE136E515AF9A61
{
public:
	::Class_2_E450C4D97FC83888* Field_2_0; // 0x18
	::Class_2_E450C4D97FC83888* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x30

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_98B2B12E5C6CD89F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B2B12E5C6CD89F_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98B2B12E5C6CD89F_METHOD_2_515AB539783606E0_OFFSET))(this, a1);
	}
};

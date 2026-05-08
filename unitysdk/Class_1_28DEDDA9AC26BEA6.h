#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_28DEDDA9AC26BEA6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xDB76270)
#define CLASS_1_28DEDDA9AC26BEA6_METHOD_1_1CC6EBD81C6FBE57_OFFSET UNITYSDK_OFFSET(0xDB762A0)
#define CLASS_1_28DEDDA9AC26BEA6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDB76280)
#define CLASS_1_28DEDDA9AC26BEA6__CTOR_OFFSET UNITYSDK_OFFSET(0xDB76290)

inline static constexpr unsigned int Class_1_28DEDDA9AC26BEA6_TypeDefinitionIndex = 80397;

class Class_1_28DEDDA9AC26BEA6 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28DEDDA9AC26BEA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28DEDDA9AC26BEA6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28DEDDA9AC26BEA6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1CC6EBD81C6FBE57(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_28DEDDA9AC26BEA6_METHOD_1_1CC6EBD81C6FBE57_OFFSET))(this, a1, a2, a3);
	}
};

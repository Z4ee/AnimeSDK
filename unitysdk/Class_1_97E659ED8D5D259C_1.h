#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xB268BF0)
#define CLASS_1_97E659ED8D5D259C_1_METHOD_1_BB8AB2CA79FA9D0F_OFFSET UNITYSDK_OFFSET(0xB268C10)
#define CLASS_1_97E659ED8D5D259C_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB268C00)
#define CLASS_1_97E659ED8D5D259C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB268BE0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_1_TypeDefinitionIndex = 44040;

class Class_1_97E659ED8D5D259C_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_BB8AB2CA79FA9D0F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_1_METHOD_1_BB8AB2CA79FA9D0F_OFFSET))(this);
	}
};

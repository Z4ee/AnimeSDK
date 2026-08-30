#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176F5D60)
#define CLASS_1_97E659ED8D5D259C_2_METHOD_1_D55CBC875E760EA4_OFFSET UNITYSDK_OFFSET(0x176F5D80)
#define CLASS_1_97E659ED8D5D259C_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x176F5D70)
#define CLASS_1_97E659ED8D5D259C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5D50)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_2_TypeDefinitionIndex = 55217;

class Class_1_97E659ED8D5D259C_2 : public ::System::Object
{
public:
	::System::UInt32 EOLDMPDDFEB; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_D55CBC875E760EA4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2_METHOD_1_D55CBC875E760EA4_OFFSET))(this);
	}
};

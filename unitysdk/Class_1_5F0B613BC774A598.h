#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_5F0B613BC774A598_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1892C960)
#define CLASS_1_5F0B613BC774A598_METHOD_1_B0605DA1EF3AD819_OFFSET UNITYSDK_OFFSET(0x1892C990)
#define CLASS_1_5F0B613BC774A598_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1892C970)
#define CLASS_1_5F0B613BC774A598__CTOR_OFFSET UNITYSDK_OFFSET(0x1892C980)

inline static constexpr unsigned int Class_1_5F0B613BC774A598_TypeDefinitionIndex = 65661;

class Class_1_5F0B613BC774A598 : public ::System::Object
{
public:
	::Enum_3_0F1B992870941C13_1 Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_B0605DA1EF3AD819(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_METHOD_1_B0605DA1EF3AD819_OFFSET))(this, a1, a2, a3);
	}
};

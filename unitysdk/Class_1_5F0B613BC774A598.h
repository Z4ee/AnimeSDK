#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_5F0B613BC774A598_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2B4A80)
#define CLASS_1_5F0B613BC774A598_METHOD_1_B0605DA1EF3AD819_OFFSET UNITYSDK_OFFSET(0x1A2B4AB0)
#define CLASS_1_5F0B613BC774A598_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2B4A90)
#define CLASS_1_5F0B613BC774A598__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B4AA0)

inline static constexpr unsigned int Class_1_5F0B613BC774A598_TypeDefinitionIndex = 43836;

class Class_1_5F0B613BC774A598 : public ::System::Object
{
public:
	::Enum_3_0F1B992870941C13 Field_1_5; // 0x10
	::System::Boolean Field_1_7; // 0x14
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

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

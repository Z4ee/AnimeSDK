#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_14_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15055030)
#define CLASS_1_97E659ED8D5D259C_14_GET_NUM_OFFSET UNITYSDK_OFFSET(0x15055020)
#define CLASS_1_97E659ED8D5D259C_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15054F00)
#define CLASS_1_97E659ED8D5D259C_14_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15054FB0)
#define CLASS_1_97E659ED8D5D259C_14__CTOR_OFFSET UNITYSDK_OFFSET(0x15054EF0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_14_TypeDefinitionIndex = 64069;

class Class_1_97E659ED8D5D259C_14 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_14__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_14_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_14_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_14_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_14_GET_DELTA_OFFSET))(this);
	}
};

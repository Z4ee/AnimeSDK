#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_8_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xAA71080)
#define CLASS_1_97E659ED8D5D259C_8_GET_NUM_OFFSET UNITYSDK_OFFSET(0xAA71070)
#define CLASS_1_97E659ED8D5D259C_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA70F60)
#define CLASS_1_97E659ED8D5D259C_8_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xAA71010)
#define CLASS_1_97E659ED8D5D259C_8__CTOR_OFFSET UNITYSDK_OFFSET(0xAA70F50)
#define CLASS_1_97E659ED8D5D259C_8___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA710D0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_8_TypeDefinitionIndex = 61770;

class Class_1_97E659ED8D5D259C_8 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

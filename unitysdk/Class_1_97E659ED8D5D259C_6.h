#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_6_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x11BFA900)
#define CLASS_1_97E659ED8D5D259C_6_GET_NUM_OFFSET UNITYSDK_OFFSET(0x11BFA8F0)
#define CLASS_1_97E659ED8D5D259C_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11BFA7E0)
#define CLASS_1_97E659ED8D5D259C_6_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x11BFA890)
#define CLASS_1_97E659ED8D5D259C_6__CTOR_OFFSET UNITYSDK_OFFSET(0x11BFA7D0)
#define CLASS_1_97E659ED8D5D259C_6___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11BFA910)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_6_TypeDefinitionIndex = 61768;

class Class_1_97E659ED8D5D259C_6 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

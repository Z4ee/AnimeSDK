#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_15_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xBCF7770)
#define CLASS_1_97E659ED8D5D259C_15_GET_NUM_OFFSET UNITYSDK_OFFSET(0xBCF7760)
#define CLASS_1_97E659ED8D5D259C_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBCF7650)
#define CLASS_1_97E659ED8D5D259C_15_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBCF7700)
#define CLASS_1_97E659ED8D5D259C_15__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7640)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_15_TypeDefinitionIndex = 67063;

class Class_1_97E659ED8D5D259C_15 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_GET_DELTA_OFFSET))(this);
	}
};

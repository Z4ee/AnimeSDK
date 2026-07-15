#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_21_GET_ID_OFFSET UNITYSDK_OFFSET(0x16AD4430)
#define CLASS_1_97E659ED8D5D259C_21_SET_ID_OFFSET UNITYSDK_OFFSET(0x16AD4440)
#define CLASS_1_97E659ED8D5D259C_21__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD4450)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_21_TypeDefinitionIndex = 76482;

class Class_1_97E659ED8D5D259C_21 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_SET_ID_OFFSET))(this, a1);
	}
};

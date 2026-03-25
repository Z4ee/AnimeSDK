#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_5_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1151FBA0)
#define CLASS_1_97E659ED8D5D259C_5_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1151FB30)
#define CLASS_1_97E659ED8D5D259C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1151FB20)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_5_TypeDefinitionIndex = 54576;

class Class_1_97E659ED8D5D259C_5 : public ::System::Object
{
public:
	::System::UInt32 _AvatarID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_GET_AVATARID_OFFSET))(this);
	}
};

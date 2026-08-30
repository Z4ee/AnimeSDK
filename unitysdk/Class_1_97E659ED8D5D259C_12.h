#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_12_GET_ID_OFFSET UNITYSDK_OFFSET(0xB6D1750)
#define CLASS_1_97E659ED8D5D259C_12_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB6D1770)
#define CLASS_1_97E659ED8D5D259C_12_SET_ID_OFFSET UNITYSDK_OFFSET(0xB6D1760)
#define CLASS_1_97E659ED8D5D259C_12_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB6D1780)
#define CLASS_1_97E659ED8D5D259C_12__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D1790)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_12_TypeDefinitionIndex = 63905;

class Class_1_97E659ED8D5D259C_12 : public ::System::Object
{
public:
	::System::UInt32 _StageID_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_GET_STAGEID_OFFSET))(this);
	}

	::System::Void set_StageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_SET_STAGEID_OFFSET))(this, a1);
	}
};

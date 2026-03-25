#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_7_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x104FCF20)
#define CLASS_1_1B7044A592B17773_7_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x104FCF40)
#define CLASS_1_1B7044A592B17773_7_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0x104FCF30)
#define CLASS_1_1B7044A592B17773_7__CTOR_OFFSET UNITYSDK_OFFSET(0x104FCFC0)

inline static constexpr unsigned int Class_1_1B7044A592B17773_7_TypeDefinitionIndex = 53690;

class Class_1_1B7044A592B17773_7 : public ::System::Object
{
public:
	::System::UInt32 _BirdID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BirdID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_7_GET_BIRDID_OFFSET))(this);
	}

	::System::Void set_BirdID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_7_SET_BIRDID_OFFSET))(this, value);
	}

	static ::Class_1_1B7044A592B17773_7* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_7*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_7_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}
};

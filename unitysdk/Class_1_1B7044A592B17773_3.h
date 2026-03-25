#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_3_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA9BEC30)
#define CLASS_1_1B7044A592B17773_3_METHOD_1_D19929BF250868C9_OFFSET UNITYSDK_OFFSET(0xA9BEC50)
#define CLASS_1_1B7044A592B17773_3_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA9BEC40)
#define CLASS_1_1B7044A592B17773_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BEDC0)

inline static constexpr unsigned int Class_1_1B7044A592B17773_3_TypeDefinitionIndex = 52244;

class Class_1_1B7044A592B17773_3 : public ::System::Object
{
public:
	::System::UInt32 _FloorID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_3_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_3_SET_FLOORID_OFFSET))(this, value);
	}

	static ::Class_1_1B7044A592B17773_3* Method_1_D19929BF250868C9()
	{
		return ((::Class_1_1B7044A592B17773_3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_3_METHOD_1_D19929BF250868C9_OFFSET))();
	}
};

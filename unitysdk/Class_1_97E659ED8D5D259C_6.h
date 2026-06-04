#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_6_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAAC8A40)
#define CLASS_1_97E659ED8D5D259C_6_METHOD_1_D19929BF250868C9_OFFSET UNITYSDK_OFFSET(0xAAC8A60)
#define CLASS_1_97E659ED8D5D259C_6_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAAC8A50)
#define CLASS_1_97E659ED8D5D259C_6__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC8BD0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_6_TypeDefinitionIndex = 60131;

class Class_1_97E659ED8D5D259C_6 : public ::System::Object
{
public:
	::System::UInt32 _FloorID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_SET_FLOORID_OFFSET))(this, a1);
	}

	static ::Class_1_97E659ED8D5D259C_6* Method_1_D19929BF250868C9()
	{
		return ((::Class_1_97E659ED8D5D259C_6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_6_METHOD_1_D19929BF250868C9_OFFSET))();
	}
};

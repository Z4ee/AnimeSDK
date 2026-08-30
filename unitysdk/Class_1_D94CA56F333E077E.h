#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B823313B2CC4BC8E;

#define CLASS_1_D94CA56F333E077E_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x18856470)
#define CLASS_1_D94CA56F333E077E_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x18856490)
#define CLASS_1_D94CA56F333E077E_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x18856480)
#define CLASS_1_D94CA56F333E077E__CTOR_OFFSET UNITYSDK_OFFSET(0x18856510)

inline static constexpr unsigned int Class_1_D94CA56F333E077E_TypeDefinitionIndex = 64406;

class Class_1_D94CA56F333E077E : public ::System::Object
{
public:
	::Class_1_B823313B2CC4BC8E* _Params_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E__CTOR_OFFSET))(this);
	}

	::Class_1_B823313B2CC4BC8E* get_Params()
	{
		return ((::Class_1_B823313B2CC4BC8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_GET_PARAMS_OFFSET))(this);
	}

	::System::Void set_Params(::Class_1_B823313B2CC4BC8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_SET_PARAMS_OFFSET))(this, a1);
	}

	static ::Class_1_D94CA56F333E077E* Method_1_250203490119AF47(::Class_1_B823313B2CC4BC8E* a1)
	{
		return ((::Class_1_D94CA56F333E077E*(*)(::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + CLASS_1_D94CA56F333E077E_METHOD_1_250203490119AF47_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_107;
class Class_1_E3044AFF91E5082A;

#define CLASS_1_7B5BC5F7531D3B01_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C57E090)
#define CLASS_1_7B5BC5F7531D3B01_GET_TRACKER_OFFSET UNITYSDK_OFFSET(0x1C57E0A0)
#define CLASS_1_7B5BC5F7531D3B01__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57E0B0)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_TypeDefinitionIndex = 41834;

class Class_1_7B5BC5F7531D3B01 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_107* _Constraint_k__BackingField; // 0x10
	::Class_1_E3044AFF91E5082A* _Tracker_k__BackingField; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_107* a1, ::Class_1_E3044AFF91E5082A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_107*, ::Class_1_E3044AFF91E5082A*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_107* get_Constraint()
	{
		return ((::Class_0_16E4307DCC419505_107*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_GET_CONSTRAINT_OFFSET))(this);
	}

	::Class_1_E3044AFF91E5082A* get_Tracker()
	{
		return ((::Class_1_E3044AFF91E5082A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_GET_TRACKER_OFFSET))(this);
	}
};

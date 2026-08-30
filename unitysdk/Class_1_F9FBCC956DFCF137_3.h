#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC5D8EEC9856D94;

#define CLASS_1_F9FBCC956DFCF137_3_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xC45F110)
#define CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC45F120)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_3_TypeDefinitionIndex = 50383;

class Class_1_F9FBCC956DFCF137_3 : public ::System::Object
{
public:
	::Class_1_BEC5D8EEC9856D94* _Detail_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_BEC5D8EEC9856D94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEC5D8EEC9856D94*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET))(this, a1);
	}

	::Class_1_BEC5D8EEC9856D94* get_Detail()
	{
		return ((::Class_1_BEC5D8EEC9856D94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_GET_DETAIL_OFFSET))(this);
	}
};

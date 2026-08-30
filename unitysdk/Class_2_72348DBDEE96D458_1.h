#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_72348DBDEE96D458_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AA04B70)
#define CLASS_2_72348DBDEE96D458_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA04BD0)

inline static constexpr unsigned int Class_2_72348DBDEE96D458_1_TypeDefinitionIndex = 41897;

class Class_2_72348DBDEE96D458_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 ACKDLFEPFMC; // 0x338

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72348DBDEE96D458_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72348DBDEE96D458_1_CLEAR_OFFSET))(this);
	}
};

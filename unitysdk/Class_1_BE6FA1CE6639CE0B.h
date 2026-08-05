#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;

#define CLASS_1_BE6FA1CE6639CE0B_METHOD_1_74AE591485AF006E_OFFSET UNITYSDK_OFFSET(0x1545D530)
#define CLASS_1_BE6FA1CE6639CE0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1545D930)

inline static constexpr unsigned int Class_1_BE6FA1CE6639CE0B_TypeDefinitionIndex = 42534;

class Class_1_BE6FA1CE6639CE0B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6FA1CE6639CE0B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_74AE591485AF006E(::Class_2_01B22E9930E7BB4D* a1, ::Class_2_01B22E9930E7BB4D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + CLASS_1_BE6FA1CE6639CE0B_METHOD_1_74AE591485AF006E_OFFSET))(this, a1, a2);
	}
};

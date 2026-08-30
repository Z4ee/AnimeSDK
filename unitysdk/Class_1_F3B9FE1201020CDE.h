#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_572302DC5A1A967C;
class Class_1_89120A467F7A010D_2;

#define CLASS_1_F3B9FE1201020CDE_METHOD_1_3DD7FF0DCF043CCF_OFFSET UNITYSDK_OFFSET(0x154EAC80)
#define CLASS_1_F3B9FE1201020CDE__CTOR_OFFSET UNITYSDK_OFFSET(0x154EAD10)

inline static constexpr unsigned int Class_1_F3B9FE1201020CDE_TypeDefinitionIndex = 80392;

class Class_1_F3B9FE1201020CDE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B9FE1201020CDE__CTOR_OFFSET))(this);
	}

	::Class_1_89120A467F7A010D_2* Method_1_3DD7FF0DCF043CCF(::Class_1_572302DC5A1A967C* a1, ::System::Boolean a2)
	{
		return ((::Class_1_89120A467F7A010D_2*(*)(::PVOID, ::Class_1_572302DC5A1A967C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3B9FE1201020CDE_METHOD_1_3DD7FF0DCF043CCF_OFFSET))(this, a1, a2);
	}
};

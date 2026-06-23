#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB4BCB31282727A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x125D10A0)
#define CLASS_1_BB4BCB31282727A3__CTOR_OFFSET UNITYSDK_OFFSET(0x125D1040)

inline static constexpr unsigned int Class_1_BB4BCB31282727A3_TypeDefinitionIndex = 56879;

class Class_1_BB4BCB31282727A3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4BCB31282727A3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4BCB31282727A3_DISPOSE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1E974C5B9D85B342_COMPARE_OFFSET UNITYSDK_OFFSET(0xCEB2DE0)
#define CLASS_1_1E974C5B9D85B342__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB3080)

inline static constexpr unsigned int Class_1_1E974C5B9D85B342_TypeDefinitionIndex = 62251;

class Class_1_1E974C5B9D85B342 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E974C5B9D85B342__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E974C5B9D85B342_COMPARE_OFFSET))(this, a1, a2);
	}
};

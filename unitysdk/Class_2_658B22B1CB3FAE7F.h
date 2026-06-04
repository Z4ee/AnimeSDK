#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

namespace System { class Action; }

#define CLASS_2_658B22B1CB3FAE7F_METHOD_2_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xAB3A1F0)
#define CLASS_2_658B22B1CB3FAE7F__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3A350)

inline static constexpr unsigned int Class_2_658B22B1CB3FAE7F_TypeDefinitionIndex = 73689;

class Class_2_658B22B1CB3FAE7F : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_658B22B1CB3FAE7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_658B22B1CB3FAE7F_METHOD_2_E67B8EE7D04609D0_OFFSET))(this, a1);
	}
};

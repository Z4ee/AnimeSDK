#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class Action; }

#define CLASS_2_782BEED4B457999A_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x1147D8D0)
#define CLASS_2_782BEED4B457999A__CTOR_OFFSET UNITYSDK_OFFSET(0x1147D870)

inline static constexpr unsigned int Class_2_782BEED4B457999A_TypeDefinitionIndex = 49566;

class Class_2_782BEED4B457999A : public ::System::Exception
{
public:
	::System::Action* Field_2_0; // 0x88

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_782BEED4B457999A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_782BEED4B457999A_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_CFA1ECBD615F0345_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A76B150)
#define CLASS_1_CFA1ECBD615F0345_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x1A76B190)
#define CLASS_1_CFA1ECBD615F0345__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76B200)

inline static constexpr unsigned int Class_1_CFA1ECBD615F0345_TypeDefinitionIndex = 75155;

class Class_1_CFA1ECBD615F0345 : public ::System::Object
{
public:
	::System::Action* PEIHJAEIGHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFA1ECBD615F0345__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFA1ECBD615F0345_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFA1ECBD615F0345_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}
};

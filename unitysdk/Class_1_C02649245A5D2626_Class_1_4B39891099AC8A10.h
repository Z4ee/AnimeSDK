#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_C02649245A5D2626_CLASS_1_4B39891099AC8A10_METHOD_1_60A3B91E53C54D7D_OFFSET UNITYSDK_OFFSET(0x1A27D760)
#define CLASS_1_C02649245A5D2626_CLASS_1_4B39891099AC8A10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27D750)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_4B39891099AC8A10_TypeDefinitionIndex = 52540;

class Class_1_C02649245A5D2626_Class_1_4B39891099AC8A10 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_4B39891099AC8A10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60A3B91E53C54D7D(::UnityEngine::Animator* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_4B39891099AC8A10_METHOD_1_60A3B91E53C54D7D_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_BE37E8E5B7815649_METHOD_2_9AF9F778CB2EF62A_OFFSET UNITYSDK_OFFSET(0x8C02720)
#define CLASS_2_BE37E8E5B7815649__CTOR_OFFSET UNITYSDK_OFFSET(0x8C027C0)
#define CLASS_2_BE37E8E5B7815649__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C02670)
#define CLASS_2_BE37E8E5B7815649___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8C027F0)

inline static constexpr unsigned int Class_2_BE37E8E5B7815649_TypeDefinitionIndex = 58887;

class Class_2_BE37E8E5B7815649 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9AF9F778CB2EF62A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649_METHOD_2_9AF9F778CB2EF62A_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

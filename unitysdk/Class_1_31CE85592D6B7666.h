#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB21B0C235B14349.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_124;
namespace System { class String; }

#define CLASS_1_31CE85592D6B7666_METHOD_1_6C8CDD20E8BBABD6_OFFSET UNITYSDK_OFFSET(0x1E3A50E0)
#define CLASS_1_31CE85592D6B7666_METHOD_1_D4718453C79689B9_OFFSET UNITYSDK_OFFSET(0x1E3AF380)
#define CLASS_1_31CE85592D6B7666__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39A3B0)

inline static constexpr unsigned int Class_1_31CE85592D6B7666_TypeDefinitionIndex = 34517;

class Class_1_31CE85592D6B7666 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_124* Method_1_6C8CDD20E8BBABD6(::System::String* a1, ::Enum_3_EB21B0C235B14349 a2)
	{
		return ((::Class_0_16E4307DCC419505_124*(*)(::PVOID, ::System::String*, ::Enum_3_EB21B0C235B14349))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666_METHOD_1_6C8CDD20E8BBABD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D4718453C79689B9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666_METHOD_1_D4718453C79689B9_OFFSET))(this, a1);
	}
};

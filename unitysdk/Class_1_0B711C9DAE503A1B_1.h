#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0B711C9DAE503A1B_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE517060)
#define CLASS_1_0B711C9DAE503A1B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE517050)

inline static constexpr unsigned int Class_1_0B711C9DAE503A1B_1_TypeDefinitionIndex = 72640;

class Class_1_0B711C9DAE503A1B_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

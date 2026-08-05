#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }

#define CLASS_2_B1EADBB032000D74_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xF785190)
#define CLASS_2_B1EADBB032000D74_METHOD_2_C1B4CBB360023B50_OFFSET UNITYSDK_OFFSET(0xF784E10)
#define CLASS_2_B1EADBB032000D74__CTOR_OFFSET UNITYSDK_OFFSET(0xF785180)

inline static constexpr unsigned int Class_2_B1EADBB032000D74_TypeDefinitionIndex = 41791;

class Class_2_B1EADBB032000D74 : public ::Class_1_7898AD955658DC56
{
public:
	::System::Action* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1EADBB032000D74__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C1B4CBB360023B50(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B1EADBB032000D74_METHOD_2_C1B4CBB360023B50_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B1EADBB032000D74_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}
};

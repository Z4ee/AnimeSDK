#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DF55450D611DC90F.h"

namespace System { class Exception; }
namespace System { class String; }

#define CLASS_3_61881234675283C4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF9ED2E0)
#define CLASS_3_61881234675283C4__CTOR_2_OFFSET UNITYSDK_OFFSET(0xF9ED360)
#define CLASS_3_61881234675283C4__CTOR_OFFSET UNITYSDK_OFFSET(0xF9ED260)

inline static constexpr unsigned int Class_3_61881234675283C4_TypeDefinitionIndex = 38245;

class Class_3_61881234675283C4 : public ::Class_2_DF55450D611DC90F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61881234675283C4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_61881234675283C4__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_61881234675283C4__CTOR_2_OFFSET))(this, a1, a2);
	}
};

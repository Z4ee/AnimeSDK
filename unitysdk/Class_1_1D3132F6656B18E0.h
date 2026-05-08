#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_1D3132F6656B18E0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x137F2AE0)
#define CLASS_1_1D3132F6656B18E0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x137F2B80)
#define CLASS_1_1D3132F6656B18E0__CTOR_OFFSET UNITYSDK_OFFSET(0x137F2AD0)

inline static constexpr unsigned int Class_1_1D3132F6656B18E0_TypeDefinitionIndex = 49639;

class Class_1_1D3132F6656B18E0 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::DateTime Field_1_0; // 0x18

	::System::Void _ctor(::System::DateTime a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1D3132F6656B18E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3132F6656B18E0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3132F6656B18E0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};

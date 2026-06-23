#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }

#define CLASS_1_B2533700DCCB314A_CLASS_1_6AAAC2ACFB1DE14B_METHOD_1_44C52D85B3FC57D1_OFFSET UNITYSDK_OFFSET(0x11C2B400)
#define CLASS_1_B2533700DCCB314A_CLASS_1_6AAAC2ACFB1DE14B__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2B3F0)

inline static constexpr unsigned int Class_1_B2533700DCCB314A_Class_1_6AAAC2ACFB1DE14B_TypeDefinitionIndex = 42091;

class Class_1_B2533700DCCB314A_Class_1_6AAAC2ACFB1DE14B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_CLASS_1_6AAAC2ACFB1DE14B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_44C52D85B3FC57D1(::MoleMole::MarcelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MarcelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_CLASS_1_6AAAC2ACFB1DE14B_METHOD_1_44C52D85B3FC57D1_OFFSET))(this, a1);
	}
};

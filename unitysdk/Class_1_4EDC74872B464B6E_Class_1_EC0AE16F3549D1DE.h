#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace System { class Action; }

#define CLASS_1_4EDC74872B464B6E_CLASS_1_EC0AE16F3549D1DE_METHOD_1_10E2F450D1C9922D_OFFSET UNITYSDK_OFFSET(0x11303540)
#define CLASS_1_4EDC74872B464B6E_CLASS_1_EC0AE16F3549D1DE__CTOR_OFFSET UNITYSDK_OFFSET(0x11303530)

inline static constexpr unsigned int Class_1_4EDC74872B464B6E_Class_1_EC0AE16F3549D1DE_TypeDefinitionIndex = 40475;

class Class_1_4EDC74872B464B6E_Class_1_EC0AE16F3549D1DE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_CLASS_1_EC0AE16F3549D1DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_10E2F450D1C9922D(::MoleMole::ConfigUIMainPageBuddiesShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageBuddiesShow*))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_CLASS_1_EC0AE16F3549D1DE_METHOD_1_10E2F450D1C9922D_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace System { class Action; }

#define CLASS_1_4EDC74872B464B6E_CLASS_1_AB5DC5590529F673_METHOD_1_3BF218562BF04A17_OFFSET UNITYSDK_OFFSET(0x10A04400)
#define CLASS_1_4EDC74872B464B6E_CLASS_1_AB5DC5590529F673__CTOR_OFFSET UNITYSDK_OFFSET(0x10A043F0)

inline static constexpr unsigned int Class_1_4EDC74872B464B6E_Class_1_AB5DC5590529F673_TypeDefinitionIndex = 71469;

class Class_1_4EDC74872B464B6E_Class_1_AB5DC5590529F673 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_CLASS_1_AB5DC5590529F673__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3BF218562BF04A17(::MoleMole::ConfigUIMainPageBuddiesShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageBuddiesShow*))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_CLASS_1_AB5DC5590529F673_METHOD_1_3BF218562BF04A17_OFFSET))(this, a1);
	}
};

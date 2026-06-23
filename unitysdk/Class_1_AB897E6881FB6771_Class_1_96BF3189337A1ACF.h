#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }

#define CLASS_1_AB897E6881FB6771_CLASS_1_96BF3189337A1ACF_METHOD_1_83A84EE1EB658A4B_OFFSET UNITYSDK_OFFSET(0x133C5C40)
#define CLASS_1_AB897E6881FB6771_CLASS_1_96BF3189337A1ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x133C5C30)

inline static constexpr unsigned int Class_1_AB897E6881FB6771_Class_1_96BF3189337A1ACF_TypeDefinitionIndex = 85017;

class Class_1_AB897E6881FB6771_Class_1_96BF3189337A1ACF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_96BF3189337A1ACF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_83A84EE1EB658A4B(::MoleMole::ConfigBuddyUISetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyUISetting*))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_96BF3189337A1ACF_METHOD_1_83A84EE1EB658A4B_OFFSET))(this, a1);
	}
};

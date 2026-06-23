#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicRotationRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E7DD9BD46826E65_CLASS_1_C3EA87693C49FC2B_METHOD_1_36D8D7A879BF12CA_OFFSET UNITYSDK_OFFSET(0xD5A08F0)
#define CLASS_1_6E7DD9BD46826E65_CLASS_1_C3EA87693C49FC2B__CTOR_OFFSET UNITYSDK_OFFSET(0xD5A08E0)

inline static constexpr unsigned int Class_1_6E7DD9BD46826E65_Class_1_C3EA87693C49FC2B_TypeDefinitionIndex = 76883;

class Class_1_6E7DD9BD46826E65_Class_1_C3EA87693C49FC2B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_CLASS_1_C3EA87693C49FC2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36D8D7A879BF12CA(::MoleMole::Config::ConfigLogicRotationRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicRotationRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_CLASS_1_C3EA87693C49FC2B_METHOD_1_36D8D7A879BF12CA_OFFSET))(this, a1);
	}
};

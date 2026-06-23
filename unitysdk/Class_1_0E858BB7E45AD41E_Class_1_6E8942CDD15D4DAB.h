#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E858BB7E45AD41E_Class_1_61AE483B33052410_54;
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0E858BB7E45AD41E_CLASS_1_6E8942CDD15D4DAB_METHOD_1_E5C47A312CF8CD99_OFFSET UNITYSDK_OFFSET(0x13348FD0)
#define CLASS_1_0E858BB7E45AD41E_CLASS_1_6E8942CDD15D4DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13348FC0)

inline static constexpr unsigned int Class_1_0E858BB7E45AD41E_Class_1_6E8942CDD15D4DAB_TypeDefinitionIndex = 71178;

class Class_1_0E858BB7E45AD41E_Class_1_6E8942CDD15D4DAB : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimationV2*>* Field_1_2; // 0x10
	::Class_1_0E858BB7E45AD41E_Class_1_61AE483B33052410_54* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_6E8942CDD15D4DAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5C47A312CF8CD99(::MoleMole::Config::ConfigUIScriptableAnimationV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_6E8942CDD15D4DAB_METHOD_1_E5C47A312CF8CD99_OFFSET))(this, a1);
	}
};

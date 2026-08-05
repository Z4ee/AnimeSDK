#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_115901D5FECFA821_METHOD_1_057F294E7CDE5570_OFFSET UNITYSDK_OFFSET(0x18B90E50)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_115901D5FECFA821__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90E40)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_115901D5FECFA821_TypeDefinitionIndex = 67635;

class Class_1_5C5D1BCD30A891BA_Class_1_115901D5FECFA821 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityVignettes*>* Field_1_7; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_115901D5FECFA821__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_057F294E7CDE5570(::MoleMole::Config::ConfigEntityVignettes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityVignettes*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_115901D5FECFA821_METHOD_1_057F294E7CDE5570_OFFSET))(this, a1);
	}
};

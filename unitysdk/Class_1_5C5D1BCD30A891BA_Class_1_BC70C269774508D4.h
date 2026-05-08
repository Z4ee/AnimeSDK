#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_BC70C269774508D4_METHOD_1_4C4CDCD5B6B9E098_OFFSET UNITYSDK_OFFSET(0xDAE69F0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_BC70C269774508D4__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE69E0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_BC70C269774508D4_TypeDefinitionIndex = 69930;

class Class_1_5C5D1BCD30A891BA_Class_1_BC70C269774508D4 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigChromaticAberrations*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_BC70C269774508D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C4CDCD5B6B9E098(::MoleMole::Config::ConfigChromaticAberrations* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChromaticAberrations*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_BC70C269774508D4_METHOD_1_4C4CDCD5B6B9E098_OFFSET))(this, a1);
	}
};

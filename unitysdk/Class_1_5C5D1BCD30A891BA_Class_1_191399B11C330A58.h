#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrections; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_191399B11C330A58_METHOD_1_C4C53E244103A151_OFFSET UNITYSDK_OFFSET(0x156FCE00)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_191399B11C330A58__CTOR_OFFSET UNITYSDK_OFFSET(0x156FCDF0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_191399B11C330A58_TypeDefinitionIndex = 67654;

class Class_1_5C5D1BCD30A891BA_Class_1_191399B11C330A58 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAvatarColorCorrections*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_191399B11C330A58__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C4C53E244103A151(::MoleMole::Config::ConfigEntityAvatarColorCorrections* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAvatarColorCorrections*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_191399B11C330A58_METHOD_1_C4C53E244103A151_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace System { class Action; }

#define CLASS_1_999E01F82446A553_CLASS_1_265937201FBAE06B_METHOD_1_EB437556E796726E_OFFSET UNITYSDK_OFFSET(0x10073DD0)
#define CLASS_1_999E01F82446A553_CLASS_1_265937201FBAE06B__CTOR_OFFSET UNITYSDK_OFFSET(0x10073DC0)

inline static constexpr unsigned int Class_1_999E01F82446A553_Class_1_265937201FBAE06B_TypeDefinitionIndex = 66675;

class Class_1_999E01F82446A553_Class_1_265937201FBAE06B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_CLASS_1_265937201FBAE06B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EB437556E796726E(::MoleMole::Config::ConfigPlayerAccessory* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessory*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_CLASS_1_265937201FBAE06B_METHOD_1_EB437556E796726E_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace System { class Action; }

#define CLASS_1_E8064385E473D41C_CLASS_1_E54560B5F928017E_METHOD_1_D88A3AEF6F6F9284_OFFSET UNITYSDK_OFFSET(0x15570D60)
#define CLASS_1_E8064385E473D41C_CLASS_1_E54560B5F928017E__CTOR_OFFSET UNITYSDK_OFFSET(0x15570D50)

inline static constexpr unsigned int Class_1_E8064385E473D41C_Class_1_E54560B5F928017E_TypeDefinitionIndex = 50588;

class Class_1_E8064385E473D41C_Class_1_E54560B5F928017E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8064385E473D41C_CLASS_1_E54560B5F928017E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D88A3AEF6F6F9284(::MoleMole::Config::ConfigPlayerAccessory* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessory*))((::PBYTE)hIl2Cpp + CLASS_1_E8064385E473D41C_CLASS_1_E54560B5F928017E_METHOD_1_D88A3AEF6F6F9284_OFFSET))(this, a1);
	}
};

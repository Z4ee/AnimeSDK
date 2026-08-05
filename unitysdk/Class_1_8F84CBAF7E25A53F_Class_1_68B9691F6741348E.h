#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E_METHOD_1_1195E0FC6D287E3F_OFFSET UNITYSDK_OFFSET(0x15622A70)
#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E_METHOD_1_89658FEA52C85B20_OFFSET UNITYSDK_OFFSET(0x15622E80)
#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E__CTOR_OFFSET UNITYSDK_OFFSET(0x15622A60)

inline static constexpr unsigned int Class_1_8F84CBAF7E25A53F_Class_1_68B9691F6741348E_TypeDefinitionIndex = 81893;

class Class_1_8F84CBAF7E25A53F_Class_1_68B9691F6741348E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1195E0FC6D287E3F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E_METHOD_1_1195E0FC6D287E3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_89658FEA52C85B20(::MoleMole::NewConfigUICommon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_68B9691F6741348E_METHOD_1_89658FEA52C85B20_OFFSET))(this, a1);
	}
};

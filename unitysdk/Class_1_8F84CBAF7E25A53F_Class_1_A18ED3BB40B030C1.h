#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1_METHOD_1_64D2F1AEDE309556_OFFSET UNITYSDK_OFFSET(0x11381370)
#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1_METHOD_1_89658FEA52C85B20_OFFSET UNITYSDK_OFFSET(0x11381780)
#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1__CTOR_OFFSET UNITYSDK_OFFSET(0x11381360)

inline static constexpr unsigned int Class_1_8F84CBAF7E25A53F_Class_1_A18ED3BB40B030C1_TypeDefinitionIndex = 81603;

class Class_1_8F84CBAF7E25A53F_Class_1_A18ED3BB40B030C1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64D2F1AEDE309556(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1_METHOD_1_64D2F1AEDE309556_OFFSET))(this, a1);
	}

	::System::Void Method_1_89658FEA52C85B20(::MoleMole::NewConfigUICommon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_A18ED3BB40B030C1_METHOD_1_89658FEA52C85B20_OFFSET))(this, a1);
	}
};

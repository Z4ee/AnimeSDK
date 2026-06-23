#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace System { class Action; }

#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_6BDEBA49D1948DC0_METHOD_1_3C83E36AAAE5CED5_OFFSET UNITYSDK_OFFSET(0x12A86430)
#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_6BDEBA49D1948DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A86420)

inline static constexpr unsigned int Class_1_D10A8F352BB9A7EB_Class_1_6BDEBA49D1948DC0_TypeDefinitionIndex = 52470;

class Class_1_D10A8F352BB9A7EB_Class_1_6BDEBA49D1948DC0 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_6BDEBA49D1948DC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C83E36AAAE5CED5(::MoleMole::ConfigTempleLevelUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_6BDEBA49D1948DC0_METHOD_1_3C83E36AAAE5CED5_OFFSET))(this, a1);
	}
};

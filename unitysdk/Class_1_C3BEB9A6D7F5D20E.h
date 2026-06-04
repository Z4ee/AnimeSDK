#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B2C62D16DB8AC428;
class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_046018BC9A4742E7_OFFSET UNITYSDK_OFFSET(0xACFB090)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0xACFB190)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xACFB280)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xACFB290)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_4156C4E288B69D59_OFFSET UNITYSDK_OFFSET(0xACFB130)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0xACFB200)
#define CLASS_1_C3BEB9A6D7F5D20E__CTOR_OFFSET UNITYSDK_OFFSET(0xACFB120)

inline static constexpr unsigned int Class_1_C3BEB9A6D7F5D20E_TypeDefinitionIndex = 67615;

class Class_1_C3BEB9A6D7F5D20E : public ::System::Object
{
public:
	::RPG::Client::SimpleTextStyleController* Field_1_0; // 0x10
	::Class_1_B2C62D16DB8AC428* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E__CTOR_OFFSET))(this);
	}

	static ::Class_1_C3BEB9A6D7F5D20E* Method_1_046018BC9A4742E7(::RPG::Client::SimpleTextStyleController* a1)
	{
		return ((::Class_1_C3BEB9A6D7F5D20E*(*)(::RPG::Client::SimpleTextStyleController*))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_046018BC9A4742E7_OFFSET))(a1);
	}

	::System::Void Method_1_4156C4E288B69D59(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_4156C4E288B69D59_OFFSET))(this, a1);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::Class_1_B2C62D16DB8AC428* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B2C62D16DB8AC428*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}
};

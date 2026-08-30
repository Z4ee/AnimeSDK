#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40540E08ABD916B4;
class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_046018BC9A4742E7_OFFSET UNITYSDK_OFFSET(0x17D6E520)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x17D6E780)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_4156C4E288B69D59_OFFSET UNITYSDK_OFFSET(0x17D6E5C0)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_509F08B65797743F_OFFSET UNITYSDK_OFFSET(0x17D6E620)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x17D6E6C0)
#define CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17D6E740)
#define CLASS_1_C3BEB9A6D7F5D20E__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6E5B0)

inline static constexpr unsigned int Class_1_C3BEB9A6D7F5D20E_TypeDefinitionIndex = 72299;

class Class_1_C3BEB9A6D7F5D20E : public ::System::Object
{
public:
	::Class_1_40540E08ABD916B4* IFIMNENDJMJ; // 0x10
	::RPG::Client::SimpleTextStyleController* ADEINJIJCHG; // 0x18

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

	::System::Void Method_1_509F08B65797743F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_509F08B65797743F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::Class_1_40540E08ABD916B4* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_40540E08ABD916B4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BEB9A6D7F5D20E_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}
};

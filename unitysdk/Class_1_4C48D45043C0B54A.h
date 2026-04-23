#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E93F5233A379C3C;
class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4C48D45043C0B54A_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x11B9F740)
#define CLASS_1_4C48D45043C0B54A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11B9F830)
#define CLASS_1_4C48D45043C0B54A_METHOD_1_2ED67301241712DE_OFFSET UNITYSDK_OFFSET(0x11B9F620)
#define CLASS_1_4C48D45043C0B54A_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x11B9F840)
#define CLASS_1_4C48D45043C0B54A_METHOD_1_4156C4E288B69D59_OFFSET UNITYSDK_OFFSET(0x11B9F6E0)
#define CLASS_1_4C48D45043C0B54A_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x11B9F7B0)
#define CLASS_1_4C48D45043C0B54A__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9F6D0)

inline static constexpr unsigned int Class_1_4C48D45043C0B54A_TypeDefinitionIndex = 66675;

class Class_1_4C48D45043C0B54A : public ::System::Object
{
public:
	::Class_1_0E93F5233A379C3C* Field_1_1; // 0x10
	::RPG::Client::SimpleTextStyleController* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A__CTOR_OFFSET))(this);
	}

	static ::Class_1_4C48D45043C0B54A* Method_1_2ED67301241712DE(::RPG::Client::SimpleTextStyleController* a1)
	{
		return ((::Class_1_4C48D45043C0B54A*(*)(::RPG::Client::SimpleTextStyleController*))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_2ED67301241712DE_OFFSET))(a1);
	}

	::System::Void Method_1_4156C4E288B69D59(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_4156C4E288B69D59_OFFSET))(this, a1);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::Class_1_0E93F5233A379C3C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0E93F5233A379C3C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C48D45043C0B54A_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}
};

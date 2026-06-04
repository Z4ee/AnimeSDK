#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_B55657B4A455121A_METHOD_3_1FEC466530D44C17_OFFSET UNITYSDK_OFFSET(0x192CE880)
#define CLASS_3_B55657B4A455121A_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x192CE900)
#define CLASS_3_B55657B4A455121A__CTOR_OFFSET UNITYSDK_OFFSET(0x192CE8D0)

inline static constexpr unsigned int Class_3_B55657B4A455121A_TypeDefinitionIndex = 20248;

class Class_3_B55657B4A455121A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x29
	::System::Single Field_3_4; // 0x2C
	::System::Boolean Field_3_5; // 0x30
	::System::Boolean Field_3_6; // 0x31
	::System::Boolean Field_3_7; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B55657B4A455121A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1FEC466530D44C17(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B55657B4A455121A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B55657B4A455121A*&))((::PBYTE)hIl2Cpp + CLASS_3_B55657B4A455121A_METHOD_3_1FEC466530D44C17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B55657B4A455121A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B55657B4A455121A*))((::PBYTE)hIl2Cpp + CLASS_3_B55657B4A455121A_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};

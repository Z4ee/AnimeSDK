#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_A40833FE408673C3_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1B3A2250)
#define CLASS_3_A40833FE408673C3_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1B3A2210)
#define CLASS_3_A40833FE408673C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A2240)

inline static constexpr unsigned int Class_3_A40833FE408673C3_TypeDefinitionIndex = 20641;

class Class_3_A40833FE408673C3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x2C
	::System::Boolean Field_3_4; // 0x2D
	::System::Boolean Field_3_5; // 0x2E
	::System::Boolean Field_3_6; // 0x2F
	::System::Boolean Field_3_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A40833FE408673C3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A40833FE408673C3*&))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A40833FE408673C3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A40833FE408673C3*))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};

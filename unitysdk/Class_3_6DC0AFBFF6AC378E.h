#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1B332420)
#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1B332470)
#define CLASS_3_6DC0AFBFF6AC378E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B332460)

inline static constexpr unsigned int Class_3_6DC0AFBFF6AC378E_TypeDefinitionIndex = 22491;

class Class_3_6DC0AFBFF6AC378E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::FormatString Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::MVector3 Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x44
	::RPG::MVector3 Field_3_6; // 0x48
	::System::Single Field_3_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC0AFBFF6AC378E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC0AFBFF6AC378E*&))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC0AFBFF6AC378E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC0AFBFF6AC378E*))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};

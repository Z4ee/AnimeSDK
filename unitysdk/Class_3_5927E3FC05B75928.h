#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_5927E3FC05B75928_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1B39BF00)
#define CLASS_3_5927E3FC05B75928_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1B39BE60)
#define CLASS_3_5927E3FC05B75928__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39BEC0)

inline static constexpr unsigned int Class_3_5927E3FC05B75928_TypeDefinitionIndex = 19986;

class Class_3_5927E3FC05B75928 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x40
	::RPG::GameCore::DynamicValueContextScope Field_3_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5927E3FC05B75928__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5927E3FC05B75928*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5927E3FC05B75928*&))((::PBYTE)hIl2Cpp + CLASS_3_5927E3FC05B75928_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5927E3FC05B75928* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5927E3FC05B75928*))((::PBYTE)hIl2Cpp + CLASS_3_5927E3FC05B75928_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};

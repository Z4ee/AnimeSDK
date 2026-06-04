#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_3C24DF586FFAB6EA_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x192C90A0)
#define CLASS_3_3C24DF586FFAB6EA_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x192C9170)
#define CLASS_3_3C24DF586FFAB6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x192C9120)

inline static constexpr unsigned int Class_3_3C24DF586FFAB6EA_TypeDefinitionIndex = 19627;

class Class_3_3C24DF586FFAB6EA : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x40
	::RPG::GameCore::DynamicValueContextScope Field_3_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24DF586FFAB6EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3C24DF586FFAB6EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3C24DF586FFAB6EA*&))((::PBYTE)hIl2Cpp + CLASS_3_3C24DF586FFAB6EA_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3C24DF586FFAB6EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3C24DF586FFAB6EA*))((::PBYTE)hIl2Cpp + CLASS_3_3C24DF586FFAB6EA_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};

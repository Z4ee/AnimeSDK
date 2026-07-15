#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define CLASS_3_CBA1E7FD4C82B228_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1B339D20)
#define CLASS_3_CBA1E7FD4C82B228_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1B339C70)
#define CLASS_3_CBA1E7FD4C82B228__CTOR_OFFSET UNITYSDK_OFFSET(0x1B339CE0)

inline static constexpr unsigned int Class_3_CBA1E7FD4C82B228_TypeDefinitionIndex = 23366;

class Class_3_CBA1E7FD4C82B228 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_1; // 0x20
	::Il2CppArray<::System::String*>* Field_3_2; // 0x28
	::RPG::GameCore::ValueEvaluatorConfig* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::RtSkillPropertyType Field_3_5; // 0x40
	::RPG::GameCore::PropertyModifyFunction Field_3_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBA1E7FD4C82B228__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CBA1E7FD4C82B228*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CBA1E7FD4C82B228*&))((::PBYTE)hIl2Cpp + CLASS_3_CBA1E7FD4C82B228_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CBA1E7FD4C82B228* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CBA1E7FD4C82B228*))((::PBYTE)hIl2Cpp + CLASS_3_CBA1E7FD4C82B228_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};

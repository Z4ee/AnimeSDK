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

#define CLASS_3_DDEAA6466F33136D_METHOD_3_BFB6BF984819FF8F_OFFSET UNITYSDK_OFFSET(0x18973960)
#define CLASS_3_DDEAA6466F33136D_METHOD_3_F045AD2368F02E87_OFFSET UNITYSDK_OFFSET(0x18973A40)
#define CLASS_3_DDEAA6466F33136D__CTOR_OFFSET UNITYSDK_OFFSET(0x189739E0)

inline static constexpr unsigned int Class_3_DDEAA6466F33136D_TypeDefinitionIndex = 23225;

class Class_3_DDEAA6466F33136D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_1; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_3; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::Il2CppArray<::System::String*>* Field_3_2; // 0x30
	::RPG::GameCore::ValueEvaluatorConfig* Field_3_6; // 0x38
	::RPG::GameCore::RtSkillPropertyType Field_3_4; // 0x40
	::RPG::GameCore::PropertyModifyFunction Field_3_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDEAA6466F33136D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFB6BF984819FF8F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DDEAA6466F33136D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DDEAA6466F33136D*&))((::PBYTE)hIl2Cpp + CLASS_3_DDEAA6466F33136D_METHOD_3_BFB6BF984819FF8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F045AD2368F02E87(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DDEAA6466F33136D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DDEAA6466F33136D*))((::PBYTE)hIl2Cpp + CLASS_3_DDEAA6466F33136D_METHOD_3_F045AD2368F02E87_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define CLASS_3_1FCBC74BD89E81C9_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x19152960)
#define CLASS_3_1FCBC74BD89E81C9_METHOD_3_F39F86C4A9457EE8_OFFSET UNITYSDK_OFFSET(0x191528E0)
#define CLASS_3_1FCBC74BD89E81C9__CTOR_OFFSET UNITYSDK_OFFSET(0x19152930)

inline static constexpr unsigned int Class_3_1FCBC74BD89E81C9_TypeDefinitionIndex = 23229;

class Class_3_1FCBC74BD89E81C9 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_1; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_2; // 0x20
	::RPG::GameCore::ValueEvaluatorConfig* Field_3_4; // 0x28
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_0; // 0x30
	::RPG::GameCore::RtSkillPropertyType Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FCBC74BD89E81C9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F39F86C4A9457EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1FCBC74BD89E81C9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1FCBC74BD89E81C9*&))((::PBYTE)hIl2Cpp + CLASS_3_1FCBC74BD89E81C9_METHOD_3_F39F86C4A9457EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1FCBC74BD89E81C9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1FCBC74BD89E81C9*))((::PBYTE)hIl2Cpp + CLASS_3_1FCBC74BD89E81C9_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};

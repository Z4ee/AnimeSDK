#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_4_4DB89EBAD1A1F6DD_METHOD_4_3051109D4354B20C_OFFSET UNITYSDK_OFFSET(0x183688F0)
#define CLASS_4_4DB89EBAD1A1F6DD_METHOD_4_C0421DF35F714DA6_OFFSET UNITYSDK_OFFSET(0x18368820)
#define CLASS_4_4DB89EBAD1A1F6DD__CTOR_OFFSET UNITYSDK_OFFSET(0x183688A0)

inline static constexpr unsigned int Class_4_4DB89EBAD1A1F6DD_TypeDefinitionIndex = 23247;

class Class_4_4DB89EBAD1A1F6DD : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_4_3; // 0x20
	::Il2CppArray<::System::String*>* Field_4_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x30
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DB89EBAD1A1F6DD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_C0421DF35F714DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4DB89EBAD1A1F6DD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4DB89EBAD1A1F6DD*&))((::PBYTE)hIl2Cpp + CLASS_4_4DB89EBAD1A1F6DD_METHOD_4_C0421DF35F714DA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_3051109D4354B20C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4DB89EBAD1A1F6DD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4DB89EBAD1A1F6DD*))((::PBYTE)hIl2Cpp + CLASS_4_4DB89EBAD1A1F6DD_METHOD_4_3051109D4354B20C_OFFSET))(a1, a2);
	}
};

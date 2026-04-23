#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_93F25953CFE140A8_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x189832E0)
#define CLASS_4_93F25953CFE140A8_METHOD_4_F50D6F293391C101_OFFSET UNITYSDK_OFFSET(0x18983210)
#define CLASS_4_93F25953CFE140A8__CTOR_OFFSET UNITYSDK_OFFSET(0x18983290)

inline static constexpr unsigned int Class_4_93F25953CFE140A8_TypeDefinitionIndex = 23205;

class Class_4_93F25953CFE140A8 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::RtBehaviorFlag Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_93F25953CFE140A8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F50D6F293391C101(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_93F25953CFE140A8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_93F25953CFE140A8*&))((::PBYTE)hIl2Cpp + CLASS_4_93F25953CFE140A8_METHOD_4_F50D6F293391C101_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_93F25953CFE140A8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_93F25953CFE140A8*))((::PBYTE)hIl2Cpp + CLASS_4_93F25953CFE140A8_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};

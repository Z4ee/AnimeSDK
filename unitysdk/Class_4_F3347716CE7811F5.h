#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_F3347716CE7811F5_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x187825F0)
#define CLASS_4_F3347716CE7811F5_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x187826C0)
#define CLASS_4_F3347716CE7811F5__CTOR_OFFSET UNITYSDK_OFFSET(0x18782670)

inline static constexpr unsigned int Class_4_F3347716CE7811F5_TypeDefinitionIndex = 23063;

class Class_4_F3347716CE7811F5 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F3347716CE7811F5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F3347716CE7811F5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F3347716CE7811F5*&))((::PBYTE)hIl2Cpp + CLASS_4_F3347716CE7811F5_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F3347716CE7811F5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F3347716CE7811F5*))((::PBYTE)hIl2Cpp + CLASS_4_F3347716CE7811F5_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};

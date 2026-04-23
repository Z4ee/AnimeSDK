#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_6D0E8932F0D4E197_METHOD_2_6735E9F7D77F8D86_OFFSET UNITYSDK_OFFSET(0x1918C580)
#define CLASS_2_6D0E8932F0D4E197_METHOD_2_73A5AD30183CEFAD_OFFSET UNITYSDK_OFFSET(0x1918C6B0)
#define CLASS_2_6D0E8932F0D4E197__CTOR_OFFSET UNITYSDK_OFFSET(0x1918C750)

inline static constexpr unsigned int Class_2_6D0E8932F0D4E197_TypeDefinitionIndex = 22305;

class Class_2_6D0E8932F0D4E197 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D0E8932F0D4E197__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_6735E9F7D77F8D86(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_6D0E8932F0D4E197*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_6D0E8932F0D4E197*&))((::PBYTE)hIl2Cpp + CLASS_2_6D0E8932F0D4E197_METHOD_2_6735E9F7D77F8D86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_73A5AD30183CEFAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_6D0E8932F0D4E197* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_6D0E8932F0D4E197*))((::PBYTE)hIl2Cpp + CLASS_2_6D0E8932F0D4E197_METHOD_2_73A5AD30183CEFAD_OFFSET))(a1, a2);
	}
};

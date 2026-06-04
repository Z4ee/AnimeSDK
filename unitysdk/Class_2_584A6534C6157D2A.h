#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_584A6534C6157D2A_METHOD_2_73A5AD30183CEFAD_OFFSET UNITYSDK_OFFSET(0x192D9F80)
#define CLASS_2_584A6534C6157D2A_METHOD_2_AFE1D20263C6047D_OFFSET UNITYSDK_OFFSET(0x192D9DF0)
#define CLASS_2_584A6534C6157D2A__CTOR_OFFSET UNITYSDK_OFFSET(0x192DA020)

inline static constexpr unsigned int Class_2_584A6534C6157D2A_TypeDefinitionIndex = 22058;

class Class_2_584A6534C6157D2A : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_AFE1D20263C6047D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_584A6534C6157D2A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_584A6534C6157D2A*&))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A_METHOD_2_AFE1D20263C6047D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_73A5AD30183CEFAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_584A6534C6157D2A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_584A6534C6157D2A*))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A_METHOD_2_73A5AD30183CEFAD_OFFSET))(a1, a2);
	}
};

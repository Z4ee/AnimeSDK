#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_584A6534C6157D2A_METHOD_2_73A5AD30183CEFAD_OFFSET UNITYSDK_OFFSET(0x16E746D0)
#define CLASS_2_584A6534C6157D2A_METHOD_2_A3ED3B3659088F67_OFFSET UNITYSDK_OFFSET(0x16E745E0)
#define CLASS_2_584A6534C6157D2A__CTOR_OFFSET UNITYSDK_OFFSET(0x16E74770)

inline static constexpr unsigned int Class_2_584A6534C6157D2A_TypeDefinitionIndex = 21567;

class Class_2_584A6534C6157D2A : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_A3ED3B3659088F67(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_584A6534C6157D2A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_584A6534C6157D2A*&))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A_METHOD_2_A3ED3B3659088F67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_73A5AD30183CEFAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_584A6534C6157D2A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_584A6534C6157D2A*))((::PBYTE)hIl2Cpp + CLASS_2_584A6534C6157D2A_METHOD_2_73A5AD30183CEFAD_OFFSET))(a1, a2);
	}
};

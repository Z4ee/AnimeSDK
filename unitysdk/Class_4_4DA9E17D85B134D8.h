#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_4DA9E17D85B134D8_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x1ACCD540)
#define CLASS_4_4DA9E17D85B134D8_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1ACCD7B0)
#define CLASS_4_4DA9E17D85B134D8_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1ACCD780)
#define CLASS_4_4DA9E17D85B134D8_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1ACCD580)
#define CLASS_4_4DA9E17D85B134D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCD570)

inline static constexpr unsigned int Class_4_4DA9E17D85B134D8_TypeDefinitionIndex = 21737;

class Class_4_4DA9E17D85B134D8 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::FormatString Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DA9E17D85B134D8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4DA9E17D85B134D8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4DA9E17D85B134D8*&))((::PBYTE)hIl2Cpp + CLASS_4_4DA9E17D85B134D8_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4DA9E17D85B134D8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4DA9E17D85B134D8*))((::PBYTE)hIl2Cpp + CLASS_4_4DA9E17D85B134D8_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_4DA9E17D85B134D8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_4DA9E17D85B134D8*&))((::PBYTE)hIl2Cpp + CLASS_4_4DA9E17D85B134D8_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_4DA9E17D85B134D8* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_4DA9E17D85B134D8*))((::PBYTE)hIl2Cpp + CLASS_4_4DA9E17D85B134D8_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

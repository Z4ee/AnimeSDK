#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_5354087FF9599135_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1B38A1B0)
#define CLASS_4_5354087FF9599135_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B38A180)
#define CLASS_4_5354087FF9599135_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1B389F00)
#define CLASS_4_5354087FF9599135_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1B389F40)
#define CLASS_4_5354087FF9599135__CTOR_OFFSET UNITYSDK_OFFSET(0x1B389F30)

inline static constexpr unsigned int Class_4_5354087FF9599135_TypeDefinitionIndex = 22036;

class Class_4_5354087FF9599135 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::System::String* Field_4_1; // 0x28
	::RPG::GameCore::OrbitAreaState Field_4_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5354087FF9599135__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5354087FF9599135*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5354087FF9599135*&))((::PBYTE)hIl2Cpp + CLASS_4_5354087FF9599135_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5354087FF9599135* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5354087FF9599135*))((::PBYTE)hIl2Cpp + CLASS_4_5354087FF9599135_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_5354087FF9599135*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5354087FF9599135*&))((::PBYTE)hIl2Cpp + CLASS_4_5354087FF9599135_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_5354087FF9599135* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5354087FF9599135*))((::PBYTE)hIl2Cpp + CLASS_4_5354087FF9599135_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

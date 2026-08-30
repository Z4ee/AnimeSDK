#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_E7FA572F81E53DA8_METHOD_4_18C3FB2E98626E1C_OFFSET UNITYSDK_OFFSET(0x1C8B6220)
#define CLASS_4_E7FA572F81E53DA8_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1C8B6270)
#define CLASS_4_E7FA572F81E53DA8_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1C8B5F70)
#define CLASS_4_E7FA572F81E53DA8_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1C8B5FE0)
#define CLASS_4_E7FA572F81E53DA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B5FC0)

inline static constexpr unsigned int Class_4_E7FA572F81E53DA8_TypeDefinitionIndex = 21254;

class Class_4_E7FA572F81E53DA8 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* MNLINFEODPJ; // 0x20
	::RPG::GameCore::ChenLingFesProperty FODBMMCKAEN; // 0x28
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E7FA572F81E53DA8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E7FA572F81E53DA8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E7FA572F81E53DA8*&))((::PBYTE)hIl2Cpp + CLASS_4_E7FA572F81E53DA8_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E7FA572F81E53DA8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E7FA572F81E53DA8*))((::PBYTE)hIl2Cpp + CLASS_4_E7FA572F81E53DA8_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_18C3FB2E98626E1C(::SimpleJSON::JSONNode* a1, ::Class_4_E7FA572F81E53DA8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E7FA572F81E53DA8*&))((::PBYTE)hIl2Cpp + CLASS_4_E7FA572F81E53DA8_METHOD_4_18C3FB2E98626E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_E7FA572F81E53DA8* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E7FA572F81E53DA8*))((::PBYTE)hIl2Cpp + CLASS_4_E7FA572F81E53DA8_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};

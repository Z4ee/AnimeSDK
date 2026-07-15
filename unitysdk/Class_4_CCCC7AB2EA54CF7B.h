#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ElationPointReadType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x193B4B80)
#define CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x193B4B50)
#define CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x193B48D0)
#define CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x193B4910)
#define CLASS_4_CCCC7AB2EA54CF7B__CTOR_OFFSET UNITYSDK_OFFSET(0x193B4900)

inline static constexpr unsigned int Class_4_CCCC7AB2EA54CF7B_TypeDefinitionIndex = 21963;

class Class_4_CCCC7AB2EA54CF7B : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::RPG::GameCore::CompareType Field_4_1; // 0x28
	::RPG::GameCore::ElationPointReadType Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CCCC7AB2EA54CF7B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_CCCC7AB2EA54CF7B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_CCCC7AB2EA54CF7B*&))((::PBYTE)hIl2Cpp + CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_CCCC7AB2EA54CF7B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_CCCC7AB2EA54CF7B*))((::PBYTE)hIl2Cpp + CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_CCCC7AB2EA54CF7B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CCCC7AB2EA54CF7B*&))((::PBYTE)hIl2Cpp + CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_CCCC7AB2EA54CF7B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CCCC7AB2EA54CF7B*))((::PBYTE)hIl2Cpp + CLASS_4_CCCC7AB2EA54CF7B_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};

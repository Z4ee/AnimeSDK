#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E69DD69FF08AC92C_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1935F960)
#define CLASS_4_E69DD69FF08AC92C_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x1935FC30)
#define CLASS_4_E69DD69FF08AC92C_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x1935FCB0)
#define CLASS_4_E69DD69FF08AC92C_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1935FA40)
#define CLASS_4_E69DD69FF08AC92C__CTOR_OFFSET UNITYSDK_OFFSET(0x1935F9E0)

inline static constexpr unsigned int Class_4_E69DD69FF08AC92C_TypeDefinitionIndex = 22827;

class Class_4_E69DD69FF08AC92C : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::JsonEnum* Field_4_0; // 0x20
	::RPG::GameCore::CompareType Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E69DD69FF08AC92C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E69DD69FF08AC92C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E69DD69FF08AC92C*&))((::PBYTE)hIl2Cpp + CLASS_4_E69DD69FF08AC92C_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E69DD69FF08AC92C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E69DD69FF08AC92C*))((::PBYTE)hIl2Cpp + CLASS_4_E69DD69FF08AC92C_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_E69DD69FF08AC92C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E69DD69FF08AC92C*&))((::PBYTE)hIl2Cpp + CLASS_4_E69DD69FF08AC92C_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_E69DD69FF08AC92C* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E69DD69FF08AC92C*))((::PBYTE)hIl2Cpp + CLASS_4_E69DD69FF08AC92C_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};

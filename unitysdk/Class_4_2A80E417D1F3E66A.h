#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_2A80E417D1F3E66A_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CA502A0)
#define CLASS_4_2A80E417D1F3E66A_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CA50250)
#define CLASS_4_2A80E417D1F3E66A_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1CA50000)
#define CLASS_4_2A80E417D1F3E66A_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1CA50060)
#define CLASS_4_2A80E417D1F3E66A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50050)

inline static constexpr unsigned int Class_4_2A80E417D1F3E66A_TypeDefinitionIndex = 23107;

class Class_4_2A80E417D1F3E66A : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2A80E417D1F3E66A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2A80E417D1F3E66A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2A80E417D1F3E66A*&))((::PBYTE)hIl2Cpp + CLASS_4_2A80E417D1F3E66A_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2A80E417D1F3E66A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2A80E417D1F3E66A*))((::PBYTE)hIl2Cpp + CLASS_4_2A80E417D1F3E66A_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_2A80E417D1F3E66A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2A80E417D1F3E66A*&))((::PBYTE)hIl2Cpp + CLASS_4_2A80E417D1F3E66A_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_2A80E417D1F3E66A* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2A80E417D1F3E66A*))((::PBYTE)hIl2Cpp + CLASS_4_2A80E417D1F3E66A_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};

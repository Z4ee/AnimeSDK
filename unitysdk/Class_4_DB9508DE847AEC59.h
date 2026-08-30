#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_DB9508DE847AEC59_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x1CCECE70)
#define CLASS_4_DB9508DE847AEC59_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CCED0F0)
#define CLASS_4_DB9508DE847AEC59_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CCED0B0)
#define CLASS_4_DB9508DE847AEC59_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1CCECEC0)
#define CLASS_4_DB9508DE847AEC59__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCECEB0)

inline static constexpr unsigned int Class_4_DB9508DE847AEC59_TypeDefinitionIndex = 23874;

class Class_4_DB9508DE847AEC59 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::JsonEnum* DPICNGBHFAC; // 0x20
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DB9508DE847AEC59__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DB9508DE847AEC59*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DB9508DE847AEC59*&))((::PBYTE)hIl2Cpp + CLASS_4_DB9508DE847AEC59_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DB9508DE847AEC59* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DB9508DE847AEC59*))((::PBYTE)hIl2Cpp + CLASS_4_DB9508DE847AEC59_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_DB9508DE847AEC59*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DB9508DE847AEC59*&))((::PBYTE)hIl2Cpp + CLASS_4_DB9508DE847AEC59_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_DB9508DE847AEC59* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DB9508DE847AEC59*))((::PBYTE)hIl2Cpp + CLASS_4_DB9508DE847AEC59_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};

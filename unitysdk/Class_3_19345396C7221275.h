#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_19345396C7221275_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CA66100)
#define CLASS_3_19345396C7221275_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CA66140)
#define CLASS_3_19345396C7221275__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66130)

inline static constexpr unsigned int Class_3_19345396C7221275_TypeDefinitionIndex = 22526;

class Class_3_19345396C7221275 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::Class_2_F3EEA4ED0244C1A6* OLOKHEMMGOH; // 0x20
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x28
	::RPG::GameCore::ElationPointModifyFunction FKCKKFALPBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19345396C7221275__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_19345396C7221275*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_19345396C7221275*&))((::PBYTE)hIl2Cpp + CLASS_3_19345396C7221275_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_19345396C7221275* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_19345396C7221275*))((::PBYTE)hIl2Cpp + CLASS_3_19345396C7221275_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};

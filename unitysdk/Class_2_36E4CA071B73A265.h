#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSummonCharacterExtraDataBase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_36E4CA071B73A265_METHOD_2_C82BDBCAA7E7DC47_OFFSET UNITYSDK_OFFSET(0x19128AB0)
#define CLASS_2_36E4CA071B73A265__CTOR_OFFSET UNITYSDK_OFFSET(0x19128DF0)

inline static constexpr unsigned int Class_2_36E4CA071B73A265_TypeDefinitionIndex = 23119;

class Class_2_36E4CA071B73A265 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::RtSummonCharacterExtraDataBase* Field_2_5; // 0x10
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_2_4; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_2_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x30
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36E4CA071B73A265__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C82BDBCAA7E7DC47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_36E4CA071B73A265*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_36E4CA071B73A265*&))((::PBYTE)hIl2Cpp + CLASS_2_36E4CA071B73A265_METHOD_2_C82BDBCAA7E7DC47_OFFSET))(a1, a2);
	}
};

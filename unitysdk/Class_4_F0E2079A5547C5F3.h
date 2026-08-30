#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_F0E2079A5547C5F3_METHOD_4_2925F5E32466503A_OFFSET UNITYSDK_OFFSET(0x1CFF2940)
#define CLASS_4_F0E2079A5547C5F3_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1CFF2B90)
#define CLASS_4_F0E2079A5547C5F3_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CFF2B60)
#define CLASS_4_F0E2079A5547C5F3_METHOD_4_C65FDB2FAF4ABCC7_OFFSET UNITYSDK_OFFSET(0x1CFF2980)
#define CLASS_4_F0E2079A5547C5F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF2970)

inline static constexpr unsigned int Class_4_F0E2079A5547C5F3_TypeDefinitionIndex = 23924;

class Class_4_F0E2079A5547C5F3 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x28
	::RPG::GameCore::TargetEvaluator* NJLICGGKCAB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0E2079A5547C5F3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_2925F5E32466503A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F0E2079A5547C5F3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F0E2079A5547C5F3*&))((::PBYTE)hIl2Cpp + CLASS_4_F0E2079A5547C5F3_METHOD_4_2925F5E32466503A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C65FDB2FAF4ABCC7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F0E2079A5547C5F3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F0E2079A5547C5F3*))((::PBYTE)hIl2Cpp + CLASS_4_F0E2079A5547C5F3_METHOD_4_C65FDB2FAF4ABCC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_F0E2079A5547C5F3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F0E2079A5547C5F3*&))((::PBYTE)hIl2Cpp + CLASS_4_F0E2079A5547C5F3_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_F0E2079A5547C5F3* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F0E2079A5547C5F3*))((::PBYTE)hIl2Cpp + CLASS_4_F0E2079A5547C5F3_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

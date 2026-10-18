#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_632AF6743E81CBF7_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1CE8FAF0)
#define CLASS_4_632AF6743E81CBF7_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CE8FAC0)
#define CLASS_4_632AF6743E81CBF7_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x1CE8F8C0)
#define CLASS_4_632AF6743E81CBF7_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1CE8F900)
#define CLASS_4_632AF6743E81CBF7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8F8F0)

inline static constexpr unsigned int Class_4_632AF6743E81CBF7_TypeDefinitionIndex = 22563;

class Class_4_632AF6743E81CBF7 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* FHLJGDGMMHK; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_632AF6743E81CBF7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_632AF6743E81CBF7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_632AF6743E81CBF7*&))((::PBYTE)hIl2Cpp + CLASS_4_632AF6743E81CBF7_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_632AF6743E81CBF7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_632AF6743E81CBF7*))((::PBYTE)hIl2Cpp + CLASS_4_632AF6743E81CBF7_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_632AF6743E81CBF7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_632AF6743E81CBF7*&))((::PBYTE)hIl2Cpp + CLASS_4_632AF6743E81CBF7_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_632AF6743E81CBF7* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_632AF6743E81CBF7*))((::PBYTE)hIl2Cpp + CLASS_4_632AF6743E81CBF7_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

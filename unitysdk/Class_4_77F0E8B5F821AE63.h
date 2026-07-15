#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_77F0E8B5F821AE63_METHOD_4_006ABDD1DFAA24CE_OFFSET UNITYSDK_OFFSET(0x1B52D7B0)
#define CLASS_4_77F0E8B5F821AE63_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1B52D9A0)
#define CLASS_4_77F0E8B5F821AE63_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B52D970)
#define CLASS_4_77F0E8B5F821AE63_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1B52D7F0)
#define CLASS_4_77F0E8B5F821AE63__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52D7E0)

inline static constexpr unsigned int Class_4_77F0E8B5F821AE63_TypeDefinitionIndex = 23218;

class Class_4_77F0E8B5F821AE63 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77F0E8B5F821AE63__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_006ABDD1DFAA24CE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_77F0E8B5F821AE63*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_77F0E8B5F821AE63*&))((::PBYTE)hIl2Cpp + CLASS_4_77F0E8B5F821AE63_METHOD_4_006ABDD1DFAA24CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_77F0E8B5F821AE63* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_77F0E8B5F821AE63*))((::PBYTE)hIl2Cpp + CLASS_4_77F0E8B5F821AE63_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_77F0E8B5F821AE63*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_77F0E8B5F821AE63*&))((::PBYTE)hIl2Cpp + CLASS_4_77F0E8B5F821AE63_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_77F0E8B5F821AE63* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_77F0E8B5F821AE63*))((::PBYTE)hIl2Cpp + CLASS_4_77F0E8B5F821AE63_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

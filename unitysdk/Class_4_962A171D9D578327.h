#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_962A171D9D578327_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1B266070)
#define CLASS_4_962A171D9D578327_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1B2663E0)
#define CLASS_4_962A171D9D578327_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x1B266110)
#define CLASS_4_962A171D9D578327_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1B266380)
#define CLASS_4_962A171D9D578327__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2660D0)

inline static constexpr unsigned int Class_4_962A171D9D578327_TypeDefinitionIndex = 23246;

class Class_4_962A171D9D578327 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x30
	::RPG::GameCore::CompareType Field_4_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_962A171D9D578327__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_962A171D9D578327*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_962A171D9D578327*&))((::PBYTE)hIl2Cpp + CLASS_4_962A171D9D578327_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6C55233E7345A091(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_962A171D9D578327* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_962A171D9D578327*))((::PBYTE)hIl2Cpp + CLASS_4_962A171D9D578327_METHOD_4_6C55233E7345A091_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_962A171D9D578327*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_962A171D9D578327*&))((::PBYTE)hIl2Cpp + CLASS_4_962A171D9D578327_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_962A171D9D578327* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_962A171D9D578327*))((::PBYTE)hIl2Cpp + CLASS_4_962A171D9D578327_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

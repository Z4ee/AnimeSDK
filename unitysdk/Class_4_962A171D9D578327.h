#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_962A171D9D578327_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1CFF4B00)
#define CLASS_4_962A171D9D578327_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1CFF4E70)
#define CLASS_4_962A171D9D578327_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x1CFF4BA0)
#define CLASS_4_962A171D9D578327_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1CFF4E10)
#define CLASS_4_962A171D9D578327__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF4B60)

inline static constexpr unsigned int Class_4_962A171D9D578327_TypeDefinitionIndex = 23826;

class Class_4_962A171D9D578327 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x20
	::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x28
	::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x30
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x38

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

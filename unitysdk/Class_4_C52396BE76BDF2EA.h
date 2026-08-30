#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_C52396BE76BDF2EA_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1DA11210)
#define CLASS_4_C52396BE76BDF2EA_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1DA11650)
#define CLASS_4_C52396BE76BDF2EA_METHOD_4_F15654ABB049A0FA_OFFSET UNITYSDK_OFFSET(0x1DA112F0)
#define CLASS_4_C52396BE76BDF2EA_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1DA115D0)
#define CLASS_4_C52396BE76BDF2EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA11290)

inline static constexpr unsigned int Class_4_C52396BE76BDF2EA_TypeDefinitionIndex = 22734;

class Class_4_C52396BE76BDF2EA : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x28
	::RPG::GameCore::DynamicFloat* CKFBELANALF; // 0x30
	::RPG::GameCore::HPDetailParamType IMOPHAJMIFO; // 0x38
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C52396BE76BDF2EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C52396BE76BDF2EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C52396BE76BDF2EA*&))((::PBYTE)hIl2Cpp + CLASS_4_C52396BE76BDF2EA_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F15654ABB049A0FA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C52396BE76BDF2EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C52396BE76BDF2EA*))((::PBYTE)hIl2Cpp + CLASS_4_C52396BE76BDF2EA_METHOD_4_F15654ABB049A0FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_C52396BE76BDF2EA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C52396BE76BDF2EA*&))((::PBYTE)hIl2Cpp + CLASS_4_C52396BE76BDF2EA_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_C52396BE76BDF2EA* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C52396BE76BDF2EA*))((::PBYTE)hIl2Cpp + CLASS_4_C52396BE76BDF2EA_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};

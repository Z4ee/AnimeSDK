#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_EB0D6451515C5549_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1CCBDFA0)
#define CLASS_3_EB0D6451515C5549_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1CCBE040)
#define CLASS_3_EB0D6451515C5549__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBE000)

inline static constexpr unsigned int Class_3_EB0D6451515C5549_TypeDefinitionIndex = 20406;

class Class_3_EB0D6451515C5549 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* GPGOMMAGIBD; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::System::Boolean LHPMNOHBIMI; // 0x30
	::System::Boolean BNIMJJNOLAI; // 0x31
	::RPG::GameCore::BubbleTalkType GKLGANJDBMM; // 0x34
	::System::UInt32 AHGIENEMKFI; // 0x38
	::System::Single OKILLMNGPGB; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB0D6451515C5549__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EB0D6451515C5549*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EB0D6451515C5549*&))((::PBYTE)hIl2Cpp + CLASS_3_EB0D6451515C5549_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EB0D6451515C5549* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EB0D6451515C5549*))((::PBYTE)hIl2Cpp + CLASS_3_EB0D6451515C5549_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};

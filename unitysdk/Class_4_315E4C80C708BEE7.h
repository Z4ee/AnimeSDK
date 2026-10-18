#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowTargetType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_4_315E4C80C708BEE7_METHOD_4_9CD365AE07B8A27E_OFFSET UNITYSDK_OFFSET(0x1CC951A0)
#define CLASS_4_315E4C80C708BEE7_METHOD_4_C0421DF35F714DA6_OFFSET UNITYSDK_OFFSET(0x1CC950D0)
#define CLASS_4_315E4C80C708BEE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC95150)

inline static constexpr unsigned int Class_4_315E4C80C708BEE7_TypeDefinitionIndex = 20125;

class Class_4_315E4C80C708BEE7 : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::TaskConfig* NIDPOPHFPAB; // 0x18
	::RPG::GameCore::TargetEvaluator* IAMOJELDDPH; // 0x20
	::System::String* GNDCOFGJGHL; // 0x28
	::Il2CppArray<::System::Int32>* KIAOEIBHLPC; // 0x30
	::RPG::GameCore::FollowTargetType IPFLFDNFCPN; // 0x38
	::System::Single MEDHCKLCEBM; // 0x3C
	::System::Single ENCAOMKPBCK; // 0x40
	::System::Single PEGAHHCMJDC; // 0x44
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x48
	::System::Single GCNGBJHLFOP; // 0x4C
	::System::Single CNLICOPBIEH; // 0x50
	::System::Single ANEHPPKFBJH; // 0x54
	::System::Single KODPONEOLPM; // 0x58
	::System::Single ADNAIFCNHHF; // 0x5C
	::System::Single AHKPNDPDPMD; // 0x60
	::RPG::MVector2 MFILKKHFGOF; // 0x64
	::System::Single NGIPFFOFKJE; // 0x6C
	::System::Single CHDPLKKDACM; // 0x70
	::System::Single FKFLBHBKDPE; // 0x74
	::System::Single HGPEJNODLLO; // 0x78
	::System::Single KLFMIFKODBA; // 0x7C
	::System::Single LKAGJFKPGIO; // 0x80
	::System::Single ACBKFMGENNH; // 0x84
	::System::Single DJEIIPOPIBC; // 0x88
	::RPG::GameCore::AdvancedFollowType NKIBGPFEFGC; // 0x8C
	::System::Boolean EABHIJFPFIP; // 0x90
	::System::Boolean GGKDDBBFLKI; // 0x91

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_315E4C80C708BEE7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_C0421DF35F714DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_315E4C80C708BEE7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_315E4C80C708BEE7*&))((::PBYTE)hIl2Cpp + CLASS_4_315E4C80C708BEE7_METHOD_4_C0421DF35F714DA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_9CD365AE07B8A27E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_315E4C80C708BEE7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_315E4C80C708BEE7*))((::PBYTE)hIl2Cpp + CLASS_4_315E4C80C708BEE7_METHOD_4_9CD365AE07B8A27E_OFFSET))(a1, a2);
	}
};

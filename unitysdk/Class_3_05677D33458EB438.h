#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_05677D33458EB438_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1D5C5810)
#define CLASS_3_05677D33458EB438_METHOD_3_5CD8C9940BD71092_OFFSET UNITYSDK_OFFSET(0x1D5C5910)
#define CLASS_3_05677D33458EB438__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C58A0)

inline static constexpr unsigned int Class_3_05677D33458EB438_TypeDefinitionIndex = 23888;

class Class_3_05677D33458EB438 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KBCHNLAAKLL; // 0x18
	::RPG::GameCore::RtAttackData* GADPAGHLPLC; // 0x20
	::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::TargetEvaluator* DNOMOIIFDIN; // 0x38
	::RPG::GameCore::TargetEvaluator* JGAFNEFOLLO; // 0x40
	::RPG::GameCore::DynamicFloat* FCNMJPINEOB; // 0x48
	::System::String* AKFCLJOMGHO; // 0x50
	::System::String* CCOLBNIOBLG; // 0x58
	::System::Boolean BONOECIJPJM; // 0x60
	::System::Boolean BLHGAFKJDCD; // 0x61
	::System::Boolean JFPGICNIGCJ; // 0x62
	::System::Boolean ABCHCGCMIFL; // 0x63
	::System::Boolean DMMAOLBOHDI; // 0x64
	::System::Boolean HBIJNLPFNKL; // 0x65
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05677D33458EB438__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_05677D33458EB438*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_05677D33458EB438*&))((::PBYTE)hIl2Cpp + CLASS_3_05677D33458EB438_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5CD8C9940BD71092(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_05677D33458EB438* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_05677D33458EB438*))((::PBYTE)hIl2Cpp + CLASS_3_05677D33458EB438_METHOD_3_5CD8C9940BD71092_OFFSET))(a1, a2);
	}
};

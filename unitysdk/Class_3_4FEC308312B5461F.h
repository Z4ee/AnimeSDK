#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1D06F590)
#define CLASS_3_4FEC308312B5461F_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1D06F530)
#define CLASS_3_4FEC308312B5461F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06F570)

inline static constexpr unsigned int Class_3_4FEC308312B5461F_TypeDefinitionIndex = 24136;

class Class_3_4FEC308312B5461F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x18
	::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x20
	::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x38
	::System::Boolean JGJPOFCDKFM; // 0x40
	::System::Boolean FKJPBMMCHFL; // 0x41
	::RPG::GameCore::AliveStateMask MJKLBHBEDJH; // 0x42
	::System::Int32 LNNLLMKBAGL; // 0x44
	::System::Int32 MGKPADCJGIM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*&))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};

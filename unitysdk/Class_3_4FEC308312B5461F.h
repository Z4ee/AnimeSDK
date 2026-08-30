#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1CAE4B50)
#define CLASS_3_4FEC308312B5461F_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CAE4AE0)
#define CLASS_3_4FEC308312B5461F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE4B30)

inline static constexpr unsigned int Class_3_4FEC308312B5461F_TypeDefinitionIndex = 23861;

class Class_3_4FEC308312B5461F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x18
	::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x38
	::System::Int32 LNNLLMKBAGL; // 0x40
	::System::Boolean FKJPBMMCHFL; // 0x44
	::System::Boolean JGJPOFCDKFM; // 0x45
	::RPG::GameCore::AliveStateMask MJKLBHBEDJH; // 0x46
	::System::Int32 MGKPADCJGIM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*&))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};

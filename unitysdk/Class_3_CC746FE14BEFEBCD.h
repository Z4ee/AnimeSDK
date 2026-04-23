#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_CC746FE14BEFEBCD_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x18448390)
#define CLASS_3_CC746FE14BEFEBCD_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x184482F0)
#define CLASS_3_CC746FE14BEFEBCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18448350)

inline static constexpr unsigned int Class_3_CC746FE14BEFEBCD_TypeDefinitionIndex = 23133;

class Class_3_CC746FE14BEFEBCD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::PredicateConfig* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_8; // 0x28
	::RPG::GameCore::NewProjectileConfig* Field_3_7; // 0x30
	::RPG::GameCore::ProjectileData* Field_3_6; // 0x38
	::System::Int32 Field_3_4; // 0x40
	::System::Boolean Field_3_9; // 0x44
	::System::Boolean Field_3_5; // 0x45
	::RPG::GameCore::AliveStateMask Field_3_1; // 0x46
	::System::Int32 Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC746FE14BEFEBCD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CC746FE14BEFEBCD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CC746FE14BEFEBCD*&))((::PBYTE)hIl2Cpp + CLASS_3_CC746FE14BEFEBCD_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CC746FE14BEFEBCD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CC746FE14BEFEBCD*))((::PBYTE)hIl2Cpp + CLASS_3_CC746FE14BEFEBCD_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_B9DA9FA7666C65CE;
class Class_2_115E8993398549DB;
namespace RPG::GameCore { class AdvDistrictSetupTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EA6B7ABA574B5A62_METHOD_3_33C1D4DF2D3E46B4_OFFSET UNITYSDK_OFFSET(0xA7504D0)
#define CLASS_3_EA6B7ABA574B5A62_METHOD_3_8ADFF79B8799CA3E_OFFSET UNITYSDK_OFFSET(0xA74FF30)
#define CLASS_3_EA6B7ABA574B5A62_METHOD_3_C4D932A85CB7D669_OFFSET UNITYSDK_OFFSET(0xA750390)
#define CLASS_3_EA6B7ABA574B5A62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7505A0)
#define CLASS_3_EA6B7ABA574B5A62__CTOR_OFFSET UNITYSDK_OFFSET(0xA74FF00)

inline static constexpr unsigned int Class_3_EA6B7ABA574B5A62_TypeDefinitionIndex = 48951;

class Class_3_EA6B7ABA574B5A62 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDistrictSetupTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDistrictSetupTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDistrictSetupTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_EA6B7ABA574B5A62__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_8ADFF79B8799CA3E()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA6B7ABA574B5A62_METHOD_3_8ADFF79B8799CA3E_OFFSET))(this);
	}

	::Class_2_115E8993398549DB* Method_3_C4D932A85CB7D669(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_115E8993398549DB*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_EA6B7ABA574B5A62_METHOD_3_C4D932A85CB7D669_OFFSET))(this, a1);
	}

	::Class_1_B9DA9FA7666C65CE* Method_3_33C1D4DF2D3E46B4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B9DA9FA7666C65CE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_EA6B7ABA574B5A62_METHOD_3_33C1D4DF2D3E46B4_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA6B7ABA574B5A62_ONTASKBEGIN_OFFSET))(this);
	}
};

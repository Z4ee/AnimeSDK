#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_68E4B28398D5BEE3;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_B8861DB261D1F8CC_METHOD_3_D9BE6C1AFB4588DA_OFFSET UNITYSDK_OFFSET(0x14004220)
#define CLASS_3_B8861DB261D1F8CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14003F20)
#define CLASS_3_B8861DB261D1F8CC__CTOR_OFFSET UNITYSDK_OFFSET(0x14003E40)

inline static constexpr unsigned int Class_3_B8861DB261D1F8CC_TypeDefinitionIndex = 51784;

class Class_3_B8861DB261D1F8CC : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_68E4B28398D5BEE3*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_68E4B28398D5BEE3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_68E4B28398D5BEE3*))((::PBYTE)hIl2Cpp + CLASS_3_B8861DB261D1F8CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8861DB261D1F8CC_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_D9BE6C1AFB4588DA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::HPDetailParamType a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::HPDetailParamType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B8861DB261D1F8CC_METHOD_3_D9BE6C1AFB4588DA_OFFSET))(a1, a2, a3);
	}
};

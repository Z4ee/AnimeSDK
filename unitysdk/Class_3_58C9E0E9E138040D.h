#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_DF6C1BC2963BF275;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_58C9E0E9E138040D_METHOD_3_81E6609E6ABDB023_OFFSET UNITYSDK_OFFSET(0x18A734F0)
#define CLASS_3_58C9E0E9E138040D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A731F0)
#define CLASS_3_58C9E0E9E138040D__CTOR_OFFSET UNITYSDK_OFFSET(0x18A73110)

inline static constexpr unsigned int Class_3_58C9E0E9E138040D_TypeDefinitionIndex = 55635;

class Class_3_58C9E0E9E138040D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_DF6C1BC2963BF275*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DF6C1BC2963BF275* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DF6C1BC2963BF275*))((::PBYTE)hIl2Cpp + CLASS_3_58C9E0E9E138040D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C9E0E9E138040D_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_81E6609E6ABDB023(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::HPDetailParamType a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::HPDetailParamType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_58C9E0E9E138040D_METHOD_3_81E6609E6ABDB023_OFFSET))(a1, a2, a3);
	}
};

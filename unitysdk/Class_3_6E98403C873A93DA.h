#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class HitDamageSplit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E98403C873A93DA_METHOD_3_5DEBB98D721A0982_OFFSET UNITYSDK_OFFSET(0x17AA33B0)
#define CLASS_3_6E98403C873A93DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AA2D70)
#define CLASS_3_6E98403C873A93DA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA2D40)

inline static constexpr unsigned int Class_3_6E98403C873A93DA_TypeDefinitionIndex = 52610;

class Class_3_6E98403C873A93DA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HitDamageSplit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HitDamageSplit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HitDamageSplit*))((::PBYTE)hIl2Cpp + CLASS_3_6E98403C873A93DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E98403C873A93DA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5DEBB98D721A0982(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_6E98403C873A93DA_METHOD_3_5DEBB98D721A0982_OFFSET))(this, a1);
	}
};

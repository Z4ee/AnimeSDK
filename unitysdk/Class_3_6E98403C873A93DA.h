#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class HitDamageSplit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E98403C873A93DA_METHOD_3_0E1FF743E438F85B_OFFSET UNITYSDK_OFFSET(0x11BC5A90)
#define CLASS_3_6E98403C873A93DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BC5550)
#define CLASS_3_6E98403C873A93DA__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC5520)

inline static constexpr unsigned int Class_3_6E98403C873A93DA_TypeDefinitionIndex = 50800;

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

	::System::Void Method_3_0E1FF743E438F85B(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_6E98403C873A93DA_METHOD_3_0E1FF743E438F85B_OFFSET))(this, a1);
	}
};

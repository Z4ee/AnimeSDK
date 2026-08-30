#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayerApplyInMapTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F281CDDB5683B0DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134CC230)
#define CLASS_3_F281CDDB5683B0DF__CTOR_OFFSET UNITYSDK_OFFSET(0x134CC200)

inline static constexpr unsigned int Class_3_F281CDDB5683B0DF_TypeDefinitionIndex = 58437;

class Class_3_F281CDDB5683B0DF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayerApplyInMapTeleport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerApplyInMapTeleport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerApplyInMapTeleport*))((::PBYTE)hIl2Cpp + CLASS_3_F281CDDB5683B0DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F281CDDB5683B0DF_ONTASKBEGIN_OFFSET))(this);
	}
};

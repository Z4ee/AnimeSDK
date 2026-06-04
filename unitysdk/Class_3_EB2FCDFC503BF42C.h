#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnterFlipperLightDeviceControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EB2FCDFC503BF42C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13572030)
#define CLASS_3_EB2FCDFC503BF42C__CTOR_OFFSET UNITYSDK_OFFSET(0x13572000)

inline static constexpr unsigned int Class_3_EB2FCDFC503BF42C_TypeDefinitionIndex = 49356;

class Class_3_EB2FCDFC503BF42C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnterFlipperLightDeviceControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + CLASS_3_EB2FCDFC503BF42C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB2FCDFC503BF42C_ONTASKBEGIN_OFFSET))(this);
	}
};

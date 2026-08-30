#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetCharLightFromEntityDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_267E83B89FA44642_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F0B190)
#define CLASS_3_267E83B89FA44642_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F0B1D0)
#define CLASS_3_267E83B89FA44642__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0B160)

inline static constexpr unsigned int Class_3_267E83B89FA44642_TypeDefinitionIndex = 53462;

class Class_3_267E83B89FA44642 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetCharLightFromEntityDir*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseCameraUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E0AF7471A256B1AE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC779600)
#define CLASS_3_E0AF7471A256B1AE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC779610)
#define CLASS_3_E0AF7471A256B1AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC779520)
#define CLASS_3_E0AF7471A256B1AE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7794F0)

inline static constexpr unsigned int Class_3_E0AF7471A256B1AE_TypeDefinitionIndex = 53058;

class Class_3_E0AF7471A256B1AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseCameraUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseCameraUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseCameraUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_E0AF7471A256B1AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0AF7471A256B1AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0AF7471A256B1AE_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0AF7471A256B1AE_ONSKIP_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PreloadMap; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A9C80390A45AB25D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9246DE0)
#define CLASS_3_A9C80390A45AB25D__CTOR_OFFSET UNITYSDK_OFFSET(0x9246DB0)

inline static constexpr unsigned int Class_3_A9C80390A45AB25D_TypeDefinitionIndex = 53768;

class Class_3_A9C80390A45AB25D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PreloadMap*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + CLASS_3_A9C80390A45AB25D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9C80390A45AB25D_ONTASKBEGIN_OFFSET))(this);
	}
};

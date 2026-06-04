#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FlipEraRegion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FFD167394796D94F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3CC6E0)
#define CLASS_3_FFD167394796D94F__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CC6B0)

inline static constexpr unsigned int Class_3_FFD167394796D94F_TypeDefinitionIndex = 49360;

class Class_3_FFD167394796D94F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FlipEraRegion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FlipEraRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + CLASS_3_FFD167394796D94F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD167394796D94F_ONTASKBEGIN_OFFSET))(this);
	}
};

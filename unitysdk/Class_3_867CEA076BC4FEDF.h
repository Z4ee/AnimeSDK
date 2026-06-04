#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureCameraToOrthographic; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_867CEA076BC4FEDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13AF7F40)
#define CLASS_3_867CEA076BC4FEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF7F10)

inline static constexpr unsigned int Class_3_867CEA076BC4FEDF_TypeDefinitionIndex = 51261;

class Class_3_867CEA076BC4FEDF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureCameraToOrthographic*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraToOrthographic* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraToOrthographic*))((::PBYTE)hIl2Cpp + CLASS_3_867CEA076BC4FEDF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_867CEA076BC4FEDF_ONTASKBEGIN_OFFSET))(this);
	}
};

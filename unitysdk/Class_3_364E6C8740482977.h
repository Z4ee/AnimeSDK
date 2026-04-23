#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityArtRotation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_364E6C8740482977_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x973DB50)
#define CLASS_3_364E6C8740482977__CTOR_OFFSET UNITYSDK_OFFSET(0x973DB20)

inline static constexpr unsigned int Class_3_364E6C8740482977_TypeDefinitionIndex = 53967;

class Class_3_364E6C8740482977 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityArtRotation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + CLASS_3_364E6C8740482977__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364E6C8740482977_ONTASKBEGIN_OFFSET))(this);
	}
};

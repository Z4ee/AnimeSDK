#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesClearSpinAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68005C22BFD13FFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12368360)
#define CLASS_3_68005C22BFD13FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x12368330)

inline static constexpr unsigned int Class_3_68005C22BFD13FFE_TypeDefinitionIndex = 53730;

class Class_3_68005C22BFD13FFE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesClearSpinAnim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesClearSpinAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesClearSpinAnim*))((::PBYTE)hIl2Cpp + CLASS_3_68005C22BFD13FFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68005C22BFD13FFE_ONTASKBEGIN_OFFSET))(this);
	}
};

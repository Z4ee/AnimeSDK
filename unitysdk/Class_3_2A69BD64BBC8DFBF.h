#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceOrigamiByColony; }

#define CLASS_3_2A69BD64BBC8DFBF_METHOD_3_96259C0A3A3BCE29_OFFSET UNITYSDK_OFFSET(0x11C28CF0)
#define CLASS_3_2A69BD64BBC8DFBF_METHOD_3_D47F144816A6C387_OFFSET UNITYSDK_OFFSET(0x11C28DB0)
#define CLASS_3_2A69BD64BBC8DFBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C283B0)
#define CLASS_3_2A69BD64BBC8DFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C28380)

inline static constexpr unsigned int Class_3_2A69BD64BBC8DFBF_TypeDefinitionIndex = 49242;

class Class_3_2A69BD64BBC8DFBF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TraceOrigamiByColony*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D47F144816A6C387(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF_METHOD_3_D47F144816A6C387_OFFSET))(this, a1);
	}

	::System::Void Method_3_96259C0A3A3BCE29(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF_METHOD_3_96259C0A3A3BCE29_OFFSET))(this, a1, a2);
	}
};

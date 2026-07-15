#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceOrigamiByColony; }

#define CLASS_3_2A69BD64BBC8DFBF_METHOD_3_3A2EDCE5938F85DB_OFFSET UNITYSDK_OFFSET(0x16393B90)
#define CLASS_3_2A69BD64BBC8DFBF_METHOD_3_E14E70548CF3E083_OFFSET UNITYSDK_OFFSET(0x16393AD0)
#define CLASS_3_2A69BD64BBC8DFBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16393190)
#define CLASS_3_2A69BD64BBC8DFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16393160)

inline static constexpr unsigned int Class_3_2A69BD64BBC8DFBF_TypeDefinitionIndex = 50986;

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

	::System::Void Method_3_3A2EDCE5938F85DB(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF_METHOD_3_3A2EDCE5938F85DB_OFFSET))(this, a1);
	}

	::System::Void Method_3_E14E70548CF3E083(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2A69BD64BBC8DFBF_METHOD_3_E14E70548CF3E083_OFFSET))(this, a1, a2);
	}
};

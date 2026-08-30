#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_3AB98DAE2BB28D1E_METHOD_1_31916B3FEA7902DE_OFFSET UNITYSDK_OFFSET(0x17AEA090)
#define CLASS_1_3AB98DAE2BB28D1E_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x17AEA280)
#define CLASS_1_3AB98DAE2BB28D1E__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEA270)

inline static constexpr unsigned int Class_1_3AB98DAE2BB28D1E_TypeDefinitionIndex = 55716;

class Class_1_3AB98DAE2BB28D1E : public ::System::Object
{
public:
	::System::Int32 IKBJDOOFIHB; // 0x10
	::System::Int32 PMIODBOODIG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AB98DAE2BB28D1E__CTOR_OFFSET))(this);
	}

	static ::Class_1_3AB98DAE2BB28D1E* Method_1_31916B3FEA7902DE(::RPG::GameCore::IronTombNormalModeThresholdConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_3AB98DAE2BB28D1E*(*)(::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_3AB98DAE2BB28D1E_METHOD_1_31916B3FEA7902DE_OFFSET))(a1, a2);
	}

	static ::Class_1_3AB98DAE2BB28D1E* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_3AB98DAE2BB28D1E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB98DAE2BB28D1E_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};

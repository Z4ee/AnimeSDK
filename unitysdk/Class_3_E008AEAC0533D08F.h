#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DistrictSetupGeometryTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E008AEAC0533D08F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1745AFC0)
#define CLASS_3_E008AEAC0533D08F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1745B000)
#define CLASS_3_E008AEAC0533D08F__CTOR_OFFSET UNITYSDK_OFFSET(0x1745AF90)

inline static constexpr unsigned int Class_3_E008AEAC0533D08F_TypeDefinitionIndex = 55508;

class Class_3_E008AEAC0533D08F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DistrictSetupGeometryTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_E008AEAC0533D08F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E008AEAC0533D08F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E008AEAC0533D08F_ONTASKBEGIN_OFFSET))(this);
	}
};

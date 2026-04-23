#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropRestartFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C66B94CA1DAD347D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9069200)
#define CLASS_3_C66B94CA1DAD347D__CTOR_OFFSET UNITYSDK_OFFSET(0x90691D0)

inline static constexpr unsigned int Class_3_C66B94CA1DAD347D_TypeDefinitionIndex = 53813;

class Class_3_C66B94CA1DAD347D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropRestartFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_C66B94CA1DAD347D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C66B94CA1DAD347D_ONTASKBEGIN_OFFSET))(this);
	}
};

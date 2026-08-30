#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropRestartFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C66B94CA1DAD347D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE57B90)
#define CLASS_3_C66B94CA1DAD347D__CTOR_OFFSET UNITYSDK_OFFSET(0xBE57B60)

inline static constexpr unsigned int Class_3_C66B94CA1DAD347D_TypeDefinitionIndex = 58493;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtRemoveStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_28954B951FAFC695_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9F4D10)
#define CLASS_3_28954B951FAFC695_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9F4C00)
#define CLASS_3_28954B951FAFC695__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F4BD0)
#define CLASS_3_28954B951FAFC695___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9F4D50)

inline static constexpr unsigned int Class_3_28954B951FAFC695_TypeDefinitionIndex = 49600;

class Class_3_28954B951FAFC695 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtRemoveStageAbilityByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtRemoveStageAbilityByName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtRemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + CLASS_3_28954B951FAFC695__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28954B951FAFC695_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28954B951FAFC695_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28954B951FAFC695___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1B12CF01C1063286_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA73CB40)
#define CLASS_3_1B12CF01C1063286_METHOD_3_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0xA73CB00)
#define CLASS_3_1B12CF01C1063286_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA73CB80)
#define CLASS_3_1B12CF01C1063286__CTOR_OFFSET UNITYSDK_OFFSET(0xA73CB10)
#define CLASS_3_1B12CF01C1063286___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA73CC20)

inline static constexpr unsigned int Class_3_1B12CF01C1063286_TypeDefinitionIndex = 50279;

class Class_3_1B12CF01C1063286 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtAttachTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAttachTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_1B12CF01C1063286__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_3_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B12CF01C1063286_METHOD_3_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B12CF01C1063286_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B12CF01C1063286_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B12CF01C1063286___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

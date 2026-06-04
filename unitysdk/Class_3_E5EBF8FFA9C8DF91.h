#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLuaActionQueuePause; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5EBF8FFA9C8DF91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C27040)
#define CLASS_3_E5EBF8FFA9C8DF91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C270C0)
#define CLASS_3_E5EBF8FFA9C8DF91__CTOR_OFFSET UNITYSDK_OFFSET(0x13C27010)
#define CLASS_3_E5EBF8FFA9C8DF91___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C27140)

inline static constexpr unsigned int Class_3_E5EBF8FFA9C8DF91_TypeDefinitionIndex = 54708;

class Class_3_E5EBF8FFA9C8DF91 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLuaActionQueuePause*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLuaActionQueuePause* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLuaActionQueuePause*))((::PBYTE)hIl2Cpp + CLASS_3_E5EBF8FFA9C8DF91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5EBF8FFA9C8DF91_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5EBF8FFA9C8DF91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5EBF8FFA9C8DF91___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

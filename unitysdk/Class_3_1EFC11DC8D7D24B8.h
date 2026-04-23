#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EFC11DC8D7D24B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128A2BA0)
#define CLASS_3_1EFC11DC8D7D24B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128A2BE0)
#define CLASS_3_1EFC11DC8D7D24B8__CTOR_OFFSET UNITYSDK_OFFSET(0x128A2B70)
#define CLASS_3_1EFC11DC8D7D24B8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128A2E90)

inline static constexpr unsigned int Class_3_1EFC11DC8D7D24B8_TypeDefinitionIndex = 51164;

class Class_3_1EFC11DC8D7D24B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

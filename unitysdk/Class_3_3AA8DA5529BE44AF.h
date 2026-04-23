#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayRogueSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3AA8DA5529BE44AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xECCAFD0)
#define CLASS_3_3AA8DA5529BE44AF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xECCB330)
#define CLASS_3_3AA8DA5529BE44AF_METHOD_3_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0xECCB0D0)
#define CLASS_3_3AA8DA5529BE44AF_ONSKIP_OFFSET UNITYSDK_OFFSET(0xECCB2E0)
#define CLASS_3_3AA8DA5529BE44AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECCB010)
#define CLASS_3_3AA8DA5529BE44AF__CTOR_OFFSET UNITYSDK_OFFSET(0xECCAFA0)
#define CLASS_3_3AA8DA5529BE44AF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xECCB340)

inline static constexpr unsigned int Class_3_3AA8DA5529BE44AF_TypeDefinitionIndex = 53748;

class Class_3_3AA8DA5529BE44AF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayRogueSimpleTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRogueSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRogueSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF_METHOD_3_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AA8DA5529BE44AF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

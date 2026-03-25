#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetCharLightFromEntityDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_267E83B89FA44642_DISPOSE_OFFSET UNITYSDK_OFFSET(0x878E120)
#define CLASS_3_267E83B89FA44642_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x878E160)
#define CLASS_3_267E83B89FA44642__CTOR_OFFSET UNITYSDK_OFFSET(0x878E0F0)
#define CLASS_3_267E83B89FA44642___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x878E560)

inline static constexpr unsigned int Class_3_267E83B89FA44642_TypeDefinitionIndex = 43073;

class Class_3_267E83B89FA44642 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetCharLightFromEntityDir*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_267E83B89FA44642___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

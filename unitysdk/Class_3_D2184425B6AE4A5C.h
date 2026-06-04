#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EFB31D576AFB2C7A.h"

namespace RPG::GameCore { class RtBattleVCameraConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D2184425B6AE4A5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x112AE290)
#define CLASS_3_D2184425B6AE4A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x112AE270)
#define CLASS_3_D2184425B6AE4A5C___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x112AE3A0)

inline static constexpr unsigned int Class_3_D2184425B6AE4A5C_TypeDefinitionIndex = 50607;

class Class_3_D2184425B6AE4A5C : public ::Class_2_EFB31D576AFB2C7A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_3_D2184425B6AE4A5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2184425B6AE4A5C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2184425B6AE4A5C___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};

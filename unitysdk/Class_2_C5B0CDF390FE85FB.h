#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_C5B0CDF390FE85FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89AECA0)
#define CLASS_2_C5B0CDF390FE85FB_DOONENTER_OFFSET UNITYSDK_OFFSET(0x89AECF0)
#define CLASS_2_C5B0CDF390FE85FB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x89AED80)
#define CLASS_2_C5B0CDF390FE85FB__CTOR_OFFSET UNITYSDK_OFFSET(0x89AEC60)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89AEE10)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x89AEE20)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x89AEE30)

inline static constexpr unsigned int Class_2_C5B0CDF390FE85FB_TypeDefinitionIndex = 46334;

class Class_2_C5B0CDF390FE85FB : public ::Class_1_87854DF4F09D42E1
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};

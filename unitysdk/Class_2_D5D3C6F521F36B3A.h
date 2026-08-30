#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupForceVisibleReason.h"
#include "unitysdk/RPG/GameCore/GroupInvisibleReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_D5D3C6F521F36B3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DDE2F0)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17DDE450)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x17DDE4B0)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_6B76E9F6796B173D_OFFSET UNITYSDK_OFFSET(0x17DDE720)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_82E70A1D8784F4AB_1_OFFSET UNITYSDK_OFFSET(0x17DDED00)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_82E70A1D8784F4AB_OFFSET UNITYSDK_OFFSET(0x17DDE870)
#define CLASS_2_D5D3C6F521F36B3A_METHOD_2_D8AF815800B66104_OFFSET UNITYSDK_OFFSET(0x17DDE340)
#define CLASS_2_D5D3C6F521F36B3A__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDE2E0)

inline static constexpr unsigned int Class_2_D5D3C6F521F36B3A_TypeDefinitionIndex = 57249;

class Class_2_D5D3C6F521F36B3A : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupForceVisibleReason> GMMAGOGANEB; // 0x18
	::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupInvisibleReason> EAHBDCJLJJO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D8AF815800B66104(::System::Boolean a1, ::RPG::GameCore::GroupInvisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_D8AF815800B66104_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B76E9F6796B173D(::System::Boolean a1, ::RPG::GameCore::GroupForceVisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupForceVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_6B76E9F6796B173D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_82E70A1D8784F4AB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_82E70A1D8784F4AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82E70A1D8784F4AB_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_82E70A1D8784F4AB_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D3C6F521F36B3A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

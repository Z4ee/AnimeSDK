#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupForceVisibleReason.h"
#include "unitysdk/RPG/GameCore/GroupInvisibleReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_21BC63FA69E5DF83_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12539140)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x125392A0)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_6BDFE6569CCA41AC_OFFSET UNITYSDK_OFFSET(0x125395C0)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_82E70A1D8784F4AB_1_OFFSET UNITYSDK_OFFSET(0x12539BA0)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_82E70A1D8784F4AB_OFFSET UNITYSDK_OFFSET(0x12539710)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_98C5A8A1D97E2DBE_OFFSET UNITYSDK_OFFSET(0x12539190)
#define CLASS_2_21BC63FA69E5DF83_METHOD_2_C20A8E714F76AB3E_OFFSET UNITYSDK_OFFSET(0x12539300)
#define CLASS_2_21BC63FA69E5DF83__CTOR_OFFSET UNITYSDK_OFFSET(0x12539130)

inline static constexpr unsigned int Class_2_21BC63FA69E5DF83_TypeDefinitionIndex = 52613;

class Class_2_21BC63FA69E5DF83 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupForceVisibleReason> Field_2_1; // 0x18
	::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupInvisibleReason> Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_98C5A8A1D97E2DBE(::System::Boolean a1, ::RPG::GameCore::GroupInvisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_98C5A8A1D97E2DBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BDFE6569CCA41AC(::System::Boolean a1, ::RPG::GameCore::GroupForceVisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupForceVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_6BDFE6569CCA41AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C20A8E714F76AB3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_C20A8E714F76AB3E_OFFSET))(this);
	}

	::System::Void Method_2_82E70A1D8784F4AB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_82E70A1D8784F4AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82E70A1D8784F4AB_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_82E70A1D8784F4AB_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21BC63FA69E5DF83_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

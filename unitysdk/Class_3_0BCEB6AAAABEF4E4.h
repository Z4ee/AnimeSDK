#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DelayExecuteOnNextWave_1.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_0BCEB6AAAABEF4E4_METHOD_3_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x10A08320)
#define CLASS_3_0BCEB6AAAABEF4E4_METHOD_3_EAA76DD2AE71C42F_OFFSET UNITYSDK_OFFSET(0x10A083C0)
#define CLASS_3_0BCEB6AAAABEF4E4__CTOR_OFFSET UNITYSDK_OFFSET(0x10A083A0)

inline static constexpr unsigned int Class_3_0BCEB6AAAABEF4E4_TypeDefinitionIndex = 44111;

class Class_3_0BCEB6AAAABEF4E4 : public ::RPG::GameCore::DelayExecuteOnNextWave_1<::System::Int32>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BCEB6AAAABEF4E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0BCEB6AAAABEF4E4_METHOD_3_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_3_EAA76DD2AE71C42F(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0BCEB6AAAABEF4E4_METHOD_3_EAA76DD2AE71C42F_OFFSET))(this, P0);
	}
};

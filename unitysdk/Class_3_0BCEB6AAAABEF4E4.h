#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DelayExecuteOnNextWave_1.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_0BCEB6AAAABEF4E4_METHOD_3_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x19153430)
#define CLASS_3_0BCEB6AAAABEF4E4__CTOR_OFFSET UNITYSDK_OFFSET(0x191534B0)

inline static constexpr unsigned int Class_3_0BCEB6AAAABEF4E4_TypeDefinitionIndex = 55325;

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
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_8E321AF4785EC78E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA61C50)
#define CLASS_2_8E321AF4785EC78E_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xBA61C00)
#define CLASS_2_8E321AF4785EC78E_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xBA61CA0)
#define CLASS_2_8E321AF4785EC78E__CTOR_OFFSET UNITYSDK_OFFSET(0xBA61CB0)

inline static constexpr unsigned int Class_2_8E321AF4785EC78E_TypeDefinitionIndex = 57109;

class Class_2_8E321AF4785EC78E : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* IJLHOACGDBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E321AF4785EC78E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8E321AF4785EC78E_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E321AF4785EC78E_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E321AF4785EC78E_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};

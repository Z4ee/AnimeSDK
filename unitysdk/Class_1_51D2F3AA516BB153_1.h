#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_51D2F3AA516BB153_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1896F790)
#define CLASS_1_51D2F3AA516BB153_1_METHOD_1_D15377D43DB8B379_OFFSET UNITYSDK_OFFSET(0x1896F720)
#define CLASS_1_51D2F3AA516BB153_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1896F7E0)

inline static constexpr unsigned int Class_1_51D2F3AA516BB153_1_TypeDefinitionIndex = 55366;

class Class_1_51D2F3AA516BB153_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51D2F3AA516BB153_1__CTOR_OFFSET))(this);
	}

	::Class_1_51D2F3AA516BB153_1* Method_1_D15377D43DB8B379(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_1_51D2F3AA516BB153_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_51D2F3AA516BB153_1_METHOD_1_D15377D43DB8B379_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51D2F3AA516BB153_1_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46_CLEAR_OFFSET UNITYSDK_OFFSET(0x1603F0D0)
#define CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x1603E7C0)
#define CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46__CTOR_OFFSET UNITYSDK_OFFSET(0x1603F120)

inline static constexpr unsigned int Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46_TypeDefinitionIndex = 57850;

class Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46 : public ::System::Object
{
public:
	::RPG::GameCore::LevelLittleGameInfo* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_CLASS_1_7A8BA05CC3614C46_CLEAR_OFFSET))(this);
	}
};

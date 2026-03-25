#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_39C3E43CBEDA89C8_CLEAR_OFFSET UNITYSDK_OFFSET(0x8801360)
#define CLASS_1_39C3E43CBEDA89C8_METHOD_1_1459F312B6A8DF68_OFFSET UNITYSDK_OFFSET(0x88012E0)
#define CLASS_1_39C3E43CBEDA89C8__CTOR_OFFSET UNITYSDK_OFFSET(0x88013C0)

inline static constexpr unsigned int Class_1_39C3E43CBEDA89C8_TypeDefinitionIndex = 44150;

class Class_1_39C3E43CBEDA89C8 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39C3E43CBEDA89C8__CTOR_OFFSET))(this);
	}

	::Class_1_39C3E43CBEDA89C8* Method_1_1459F312B6A8DF68(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_1_39C3E43CBEDA89C8*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_39C3E43CBEDA89C8_METHOD_1_1459F312B6A8DF68_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39C3E43CBEDA89C8_CLEAR_OFFSET))(this);
	}
};

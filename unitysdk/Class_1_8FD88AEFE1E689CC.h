#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillUIPreShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_8FD88AEFE1E689CC__CTOR_OFFSET UNITYSDK_OFFSET(0x114200F0)

inline static constexpr unsigned int Class_1_8FD88AEFE1E689CC_TypeDefinitionIndex = 38478;

class Class_1_8FD88AEFE1E689CC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_1; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::RPG::GameCore::SkillUIPreShowType Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD88AEFE1E689CC__CTOR_OFFSET))(this);
	}
};

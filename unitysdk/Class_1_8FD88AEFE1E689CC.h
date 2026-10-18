#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillUIPreShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_8FD88AEFE1E689CC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4F490)

inline static constexpr unsigned int Class_1_8FD88AEFE1E689CC_TypeDefinitionIndex = 47616;

class Class_1_8FD88AEFE1E689CC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* KGKEPIJIABL; // 0x10
	::RPG::GameCore::SkillUIPreShowType LFGLFCLEHMB; // 0x18
	::System::Boolean MOKNCFJICIC; // 0x1C
	::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD88AEFE1E689CC__CTOR_OFFSET))(this);
	}
};

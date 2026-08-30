#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/UltraSkillAlertType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8B83CE81FFD7409A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A753B90)

inline static constexpr unsigned int Class_1_8B83CE81FFD7409A_TypeDefinitionIndex = 73191;

class Class_1_8B83CE81FFD7409A : public ::System::Object
{
public:
	::System::String* OEDECKGEFEO; // 0x10
	::System::String* ADMPOKJGIBH; // 0x18
	::System::String* MABCLHBFLCN; // 0x20
	::RPG::GameCore::UltraSkillAlertType MNKNKEKLFJO; // 0x28
	::RPG::GameCore::SkillType JBCBONFABOM; // 0x2C
	::RPG::GameCore::BattleAlertType HNBJHDBMMNN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B83CE81FFD7409A__CTOR_OFFSET))(this);
	}
};

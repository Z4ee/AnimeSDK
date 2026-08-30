#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System { class String; }

#define CLASS_1_14EB5DEA5CB00924__CTOR_OFFSET UNITYSDK_OFFSET(0x152C6140)

inline static constexpr unsigned int Class_1_14EB5DEA5CB00924_TypeDefinitionIndex = 56021;

class Class_1_14EB5DEA5CB00924 : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* MCLLALGABAB; // 0x10
	::System::String* CIDCEJCGOGB; // 0x18
	::RPG::Client::TextID NDCFMJPEECP; // 0x20
	::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x30
	::RPG::GameCore::SkillType GMPGDEINODK; // 0x34
	::RPG::Client::TextID DKLKGHFLMDO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EB5DEA5CB00924__CTOR_OFFSET))(this);
	}
};

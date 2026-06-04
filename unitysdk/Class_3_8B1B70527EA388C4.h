#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B1B70527EA388C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9718D0)
#define CLASS_3_8B1B70527EA388C4__CTOR_OFFSET UNITYSDK_OFFSET(0xA9718A0)

inline static constexpr unsigned int Class_3_8B1B70527EA388C4_TypeDefinitionIndex = 52654;

class Class_3_8B1B70527EA388C4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterAtlasFaceEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_8B1B70527EA388C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B1B70527EA388C4_ONTASKBEGIN_OFFSET))(this);
	}
};

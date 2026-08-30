#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CacheCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8CC8E2C5954600BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B789C0)
#define CLASS_3_8CC8E2C5954600BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B78990)

inline static constexpr unsigned int Class_3_8CC8E2C5954600BC_TypeDefinitionIndex = 56534;

class Class_3_8CC8E2C5954600BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CacheCharacterAtlasFaceEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_8CC8E2C5954600BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC8E2C5954600BC_ONTASKBEGIN_OFFSET))(this);
	}
};

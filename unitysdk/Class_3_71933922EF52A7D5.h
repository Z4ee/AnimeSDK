#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReplaceCharacterEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_71933922EF52A7D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC95240)
#define CLASS_3_71933922EF52A7D5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC95210)

inline static constexpr unsigned int Class_3_71933922EF52A7D5_TypeDefinitionIndex = 52204;

class Class_3_71933922EF52A7D5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReplaceCharacterEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReplaceCharacterEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReplaceCharacterEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_71933922EF52A7D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71933922EF52A7D5_ONTASKBEGIN_OFFSET))(this);
	}
};

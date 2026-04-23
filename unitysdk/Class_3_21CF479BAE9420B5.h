#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class EnableStoryWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_21CF479BAE9420B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1189A970)
#define CLASS_3_21CF479BAE9420B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1189A860)

inline static constexpr unsigned int Class_3_21CF479BAE9420B5_TypeDefinitionIndex = 53597;

class Class_3_21CF479BAE9420B5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableStoryWin*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableStoryWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + CLASS_3_21CF479BAE9420B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21CF479BAE9420B5_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartTrackPhoto; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40EFB9AB56820469_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6C7B00)
#define CLASS_3_40EFB9AB56820469__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C7AD0)

inline static constexpr unsigned int Class_3_40EFB9AB56820469_TypeDefinitionIndex = 49811;

class Class_3_40EFB9AB56820469 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartTrackPhoto*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTrackPhoto* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTrackPhoto*))((::PBYTE)hIl2Cpp + CLASS_3_40EFB9AB56820469__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40EFB9AB56820469_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4561CC3C37643D74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198D1860)
#define CLASS_3_4561CC3C37643D74__CTOR_OFFSET UNITYSDK_OFFSET(0x198D1830)

inline static constexpr unsigned int Class_3_4561CC3C37643D74_TypeDefinitionIndex = 53246;

class Class_3_4561CC3C37643D74 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LittleGameRadialBlurEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameRadialBlurEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameRadialBlurEffect*))((::PBYTE)hIl2Cpp + CLASS_3_4561CC3C37643D74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4561CC3C37643D74_ONTASKBEGIN_OFFSET))(this);
	}
};

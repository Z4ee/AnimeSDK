#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActivityElationShowCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_311863009DC59A1A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC79BF0)
#define CLASS_3_311863009DC59A1A__CTOR_OFFSET UNITYSDK_OFFSET(0xBC79BC0)

inline static constexpr unsigned int Class_3_311863009DC59A1A_TypeDefinitionIndex = 56528;

class Class_3_311863009DC59A1A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActivityElationShowCutIn*>
{
public:
	// static const ::System::String* BMOMFJHBOEM; // 0x0
	// static const ::System::String* EBBBBJIOAHM; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityElationShowCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityElationShowCutIn*))((::PBYTE)hIl2Cpp + CLASS_3_311863009DC59A1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_311863009DC59A1A_ONTASKBEGIN_OFFSET))(this);
	}
};

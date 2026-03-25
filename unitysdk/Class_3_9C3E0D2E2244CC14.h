#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectFrameCaptureMatTex; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C3E0D2E2244CC14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8DCC870)
#define CLASS_3_9C3E0D2E2244CC14__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCC840)

inline static constexpr unsigned int Class_3_9C3E0D2E2244CC14_TypeDefinitionIndex = 44443;

class Class_3_9C3E0D2E2244CC14 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectFrameCaptureMatTex*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + CLASS_3_9C3E0D2E2244CC14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C3E0D2E2244CC14_ONTASKBEGIN_OFFSET))(this);
	}
};

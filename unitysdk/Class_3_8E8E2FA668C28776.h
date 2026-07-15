#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverridePerformanceEndScreenCut; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E8E2FA668C28776_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E7B560)
#define CLASS_3_8E8E2FA668C28776__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7B530)

inline static constexpr unsigned int Class_3_8E8E2FA668C28776_TypeDefinitionIndex = 50646;

class Class_3_8E8E2FA668C28776 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverridePerformanceEndScreenCut*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverridePerformanceEndScreenCut*))((::PBYTE)hIl2Cpp + CLASS_3_8E8E2FA668C28776__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E8E2FA668C28776_ONTASKBEGIN_OFFSET))(this);
	}
};

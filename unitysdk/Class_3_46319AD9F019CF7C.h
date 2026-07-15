#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableRootMotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_46319AD9F019CF7C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B0B130)
#define CLASS_3_46319AD9F019CF7C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0B100)

inline static constexpr unsigned int Class_3_46319AD9F019CF7C_TypeDefinitionIndex = 53351;

class Class_3_46319AD9F019CF7C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableRootMotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRootMotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + CLASS_3_46319AD9F019CF7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46319AD9F019CF7C_ONTASKBEGIN_OFFSET))(this);
	}
};

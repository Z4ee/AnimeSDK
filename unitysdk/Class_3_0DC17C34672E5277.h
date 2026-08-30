#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowRogueFormaluaUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0DC17C34672E5277_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177CA7A0)
#define CLASS_3_0DC17C34672E5277__CTOR_OFFSET UNITYSDK_OFFSET(0x177CA770)

inline static constexpr unsigned int Class_3_0DC17C34672E5277_TypeDefinitionIndex = 58831;

class Class_3_0DC17C34672E5277 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowRogueFormaluaUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + CLASS_3_0DC17C34672E5277__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DC17C34672E5277_ONTASKBEGIN_OFFSET))(this);
	}
};

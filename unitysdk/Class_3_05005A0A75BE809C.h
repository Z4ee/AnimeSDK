#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByWaitUltraCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05005A0A75BE809C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161F67E0)
#define CLASS_3_05005A0A75BE809C__CTOR_OFFSET UNITYSDK_OFFSET(0x161F6700)

inline static constexpr unsigned int Class_3_05005A0A75BE809C_TypeDefinitionIndex = 55111;

class Class_3_05005A0A75BE809C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByWaitUltraCount*>
{
public:
	::RPG::GameCore::StringHash PEPAPNKMPFB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*))((::PBYTE)hIl2Cpp + CLASS_3_05005A0A75BE809C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05005A0A75BE809C_ONTASKBEGIN_OFFSET))(this);
	}
};

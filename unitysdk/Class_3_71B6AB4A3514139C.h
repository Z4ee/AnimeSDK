#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadBackgroundPlayer; }

#define CLASS_3_71B6AB4A3514139C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14276A20)
#define CLASS_3_71B6AB4A3514139C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14276A60)
#define CLASS_3_71B6AB4A3514139C__CTOR_OFFSET UNITYSDK_OFFSET(0x142769F0)
#define CLASS_3_71B6AB4A3514139C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14276BA0)

inline static constexpr unsigned int Class_3_71B6AB4A3514139C_TypeDefinitionIndex = 49955;

class Class_3_71B6AB4A3514139C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnloadBackgroundPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadBackgroundPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadBackgroundPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_71B6AB4A3514139C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71B6AB4A3514139C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71B6AB4A3514139C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71B6AB4A3514139C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

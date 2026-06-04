#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuffBaseTask_1.h"

namespace RPG::GameCore { class AddMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_9CC3D79001B300FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134B3AE0)
#define CLASS_4_9CC3D79001B300FE__CTOR_OFFSET UNITYSDK_OFFSET(0x134B3AD0)
#define CLASS_4_9CC3D79001B300FE___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134B3CB0)

inline static constexpr unsigned int Class_4_9CC3D79001B300FE_TypeDefinitionIndex = 54068;

class Class_4_9CC3D79001B300FE : public ::RPG::GameCore::AddMazeBuffBaseTask_1<::RPG::GameCore::AddMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMazeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_4_9CC3D79001B300FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9CC3D79001B300FE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9CC3D79001B300FE___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};

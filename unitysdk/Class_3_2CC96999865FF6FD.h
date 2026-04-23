#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockFov; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CC96999865FF6FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA067C50)
#define CLASS_3_2CC96999865FF6FD__CTOR_OFFSET UNITYSDK_OFFSET(0xA067C20)

inline static constexpr unsigned int Class_3_2CC96999865FF6FD_TypeDefinitionIndex = 48862;

class Class_3_2CC96999865FF6FD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockFov*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockFov* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + CLASS_3_2CC96999865FF6FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC96999865FF6FD_ONTASKBEGIN_OFFSET))(this);
	}
};

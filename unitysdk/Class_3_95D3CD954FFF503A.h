#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95D3CD954FFF503A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB275AF0)
#define CLASS_3_95D3CD954FFF503A__CTOR_OFFSET UNITYSDK_OFFSET(0xB275AC0)

inline static constexpr unsigned int Class_3_95D3CD954FFF503A_TypeDefinitionIndex = 44708;

class Class_3_95D3CD954FFF503A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockVersusBar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockVersusBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockVersusBar*))((::PBYTE)hIl2Cpp + CLASS_3_95D3CD954FFF503A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95D3CD954FFF503A_ONTASKBEGIN_OFFSET))(this);
	}
};

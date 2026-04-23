#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDamageSharedTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39780FD3001F56F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA904E0)
#define CLASS_3_39780FD3001F56F1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA904B0)

inline static constexpr unsigned int Class_3_39780FD3001F56F1_TypeDefinitionIndex = 51062;

class Class_3_39780FD3001F56F1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDamageSharedTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDamageSharedTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDamageSharedTarget*))((::PBYTE)hIl2Cpp + CLASS_3_39780FD3001F56F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39780FD3001F56F1_ONTASKBEGIN_OFFSET))(this);
	}
};

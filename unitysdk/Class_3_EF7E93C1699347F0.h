#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLayerWeight; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EF7E93C1699347F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118EEBF0)
#define CLASS_3_EF7E93C1699347F0__CTOR_OFFSET UNITYSDK_OFFSET(0x118EEBC0)

inline static constexpr unsigned int Class_3_EF7E93C1699347F0_TypeDefinitionIndex = 51191;

class Class_3_EF7E93C1699347F0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLayerWeight*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLayerWeight* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLayerWeight*))((::PBYTE)hIl2Cpp + CLASS_3_EF7E93C1699347F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF7E93C1699347F0_ONTASKBEGIN_OFFSET))(this);
	}
};

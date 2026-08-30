#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AA4B90EDB9E2F944_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBE7E2D0)
#define CLASS_3_AA4B90EDB9E2F944_METHOD_3_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xBE7DA30)
#define CLASS_3_AA4B90EDB9E2F944_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBE7E2E0)
#define CLASS_3_AA4B90EDB9E2F944_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE7D9E0)
#define CLASS_3_AA4B90EDB9E2F944__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7D9B0)

inline static constexpr unsigned int Class_3_AA4B90EDB9E2F944_TypeDefinitionIndex = 58228;

class Class_3_AA4B90EDB9E2F944 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroyNPC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyNPC*))((::PBYTE)hIl2Cpp + CLASS_3_AA4B90EDB9E2F944__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA4B90EDB9E2F944_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA4B90EDB9E2F944_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA4B90EDB9E2F944_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA4B90EDB9E2F944_METHOD_3_3BCF0226A6CDC13B_OFFSET))(this);
	}
};

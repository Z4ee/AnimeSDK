#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalShowBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBE1B72760C67CEE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19A79D00)
#define CLASS_3_BBE1B72760C67CEE_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x19A79D60)
#define CLASS_3_BBE1B72760C67CEE_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19A79D10)
#define CLASS_3_BBE1B72760C67CEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A79ED0)
#define CLASS_3_BBE1B72760C67CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A79CD0)

inline static constexpr unsigned int Class_3_BBE1B72760C67CEE_TypeDefinitionIndex = 58290;

class Class_3_BBE1B72760C67CEE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalShowBillboard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalShowBillboard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalShowBillboard*))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BlockInputController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2F28D027D43292F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2BB80)
#define CLASS_3_C2F28D027D43292F_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x10B2BFD0)
#define CLASS_3_C2F28D027D43292F_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10B2BEC0)
#define CLASS_3_C2F28D027D43292F_ONSKIP_OFFSET UNITYSDK_OFFSET(0x10B2BF80)
#define CLASS_3_C2F28D027D43292F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B2BBC0)
#define CLASS_3_C2F28D027D43292F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B2BF30)
#define CLASS_3_C2F28D027D43292F_TICK_OFFSET UNITYSDK_OFFSET(0x10B2BFE0)
#define CLASS_3_C2F28D027D43292F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2BB50)
#define CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2C040)
#define CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B2C080)
#define CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10B2C0D0)

inline static constexpr unsigned int Class_3_C2F28D027D43292F_TypeDefinitionIndex = 42545;

class Class_3_C2F28D027D43292F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BlockInputController*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockInputController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockInputController*))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_ONSKIP_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C2F28D027D43292F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

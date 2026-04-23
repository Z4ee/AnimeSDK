#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalShowBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBE1B72760C67CEE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x96586D0)
#define CLASS_3_BBE1B72760C67CEE_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x9658730)
#define CLASS_3_BBE1B72760C67CEE_ONSKIP_OFFSET UNITYSDK_OFFSET(0x96586E0)
#define CLASS_3_BBE1B72760C67CEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96588A0)
#define CLASS_3_BBE1B72760C67CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x96586A0)

inline static constexpr unsigned int Class_3_BBE1B72760C67CEE_TypeDefinitionIndex = 53623;

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

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBE1B72760C67CEE_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}
};

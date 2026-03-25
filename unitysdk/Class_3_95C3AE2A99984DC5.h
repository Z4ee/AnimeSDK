#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPlayerMotionSync; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1062ACE0)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1062B060)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x1062AE40)
#define CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1062ADE0)
#define CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1062AFF0)
#define CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1062ACB0)
#define CLASS_3_95C3AE2A99984DC5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1062B0A0)

inline static constexpr unsigned int Class_3_95C3AE2A99984DC5_TypeDefinitionIndex = 47258;

class Class_3_95C3AE2A99984DC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPlayerMotionSync*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET))(this);
	}

	static ::System::Void Method_3_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_60451B2DE9D371C9_OFFSET))(a1);
	}

	static ::System::Void Method_3_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_0BDFAC56E6B704CB_OFFSET))();
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

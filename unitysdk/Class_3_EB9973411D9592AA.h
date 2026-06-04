#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetLevelReward; }
namespace System { class Object; }

#define CLASS_3_EB9973411D9592AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1354B1E0)
#define CLASS_3_EB9973411D9592AA_METHOD_3_5C715D615BCEF8BF_OFFSET UNITYSDK_OFFSET(0x1354B2A0)
#define CLASS_3_EB9973411D9592AA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1354B130)
#define CLASS_3_EB9973411D9592AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1354B100)
#define CLASS_3_EB9973411D9592AA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1354B360)

inline static constexpr unsigned int Class_3_EB9973411D9592AA_TypeDefinitionIndex = 55031;

class Class_3_EB9973411D9592AA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WaitGetLevelReward*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_5C715D615BCEF8BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_METHOD_3_5C715D615BCEF8BF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

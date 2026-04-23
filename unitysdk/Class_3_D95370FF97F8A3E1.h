#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D95370FF97F8A3E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1177A120)
#define CLASS_3_D95370FF97F8A3E1_METHOD_3_4D26F58D36CA150E_OFFSET UNITYSDK_OFFSET(0x1177A440)
#define CLASS_3_D95370FF97F8A3E1_METHOD_3_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x1177A570)
#define CLASS_3_D95370FF97F8A3E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1177A170)
#define CLASS_3_D95370FF97F8A3E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1177A0F0)
#define CLASS_3_D95370FF97F8A3E1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1177A5B0)

inline static constexpr unsigned int Class_3_D95370FF97F8A3E1_TypeDefinitionIndex = 53542;

class Class_3_D95370FF97F8A3E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateProp*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_4D26F58D36CA150E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1_METHOD_3_4D26F58D36CA150E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityClassifyType Method_3_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1_METHOD_3_9DA0D46365FF3B6A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D95370FF97F8A3E1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

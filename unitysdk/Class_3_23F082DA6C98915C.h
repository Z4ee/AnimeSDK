#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_23F082DA6C98915C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA0F9A0)
#define CLASS_3_23F082DA6C98915C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAA0F9F0)
#define CLASS_3_23F082DA6C98915C_METHOD_3_477437DD4EF9815F_OFFSET UNITYSDK_OFFSET(0xAA0FCE0)
#define CLASS_3_23F082DA6C98915C_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAA0FA00)
#define CLASS_3_23F082DA6C98915C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA0FA60)
#define CLASS_3_23F082DA6C98915C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0F970)
#define CLASS_3_23F082DA6C98915C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA0FD50)

inline static constexpr unsigned int Class_3_23F082DA6C98915C_TypeDefinitionIndex = 54079;

class Class_3_23F082DA6C98915C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDestroyGroupEntity*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_477437DD4EF9815F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C_METHOD_3_477437DD4EF9815F_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F082DA6C98915C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateGroupEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_570323688B56DA5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E11610)
#define CLASS_3_570323688B56DA5A_METHOD_3_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x8E11A40)
#define CLASS_3_570323688B56DA5A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8E11660)
#define CLASS_3_570323688B56DA5A__CTOR_OFFSET UNITYSDK_OFFSET(0x8E115E0)
#define CLASS_3_570323688B56DA5A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E11AF0)

inline static constexpr unsigned int Class_3_570323688B56DA5A_TypeDefinitionIndex = 46656;

class Class_3_570323688B56DA5A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCreateGroupEntity*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + CLASS_3_570323688B56DA5A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_570323688B56DA5A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_570323688B56DA5A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_570323688B56DA5A_METHOD_3_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_570323688B56DA5A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

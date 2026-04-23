#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetEntityAvailable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_15719C0064555ECA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B78080)
#define CLASS_3_15719C0064555ECA_METHOD_3_3B59FF842335F9D6_OFFSET UNITYSDK_OFFSET(0x11B78360)
#define CLASS_3_15719C0064555ECA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B780C0)
#define CLASS_3_15719C0064555ECA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B78050)
#define CLASS_3_15719C0064555ECA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B78400)

inline static constexpr unsigned int Class_3_15719C0064555ECA_TypeDefinitionIndex = 51988;

class Class_3_15719C0064555ECA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityAvailable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityAvailable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityAvailable*))((::PBYTE)hIl2Cpp + CLASS_3_15719C0064555ECA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15719C0064555ECA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15719C0064555ECA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_3B59FF842335F9D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_15719C0064555ECA_METHOD_3_3B59FF842335F9D6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15719C0064555ECA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

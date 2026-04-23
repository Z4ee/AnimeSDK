#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_1351228490BCFA80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250DC50)
#define CLASS_3_1351228490BCFA80_METHOD_3_5EBC62A17E81C353_OFFSET UNITYSDK_OFFSET(0x1250E440)
#define CLASS_3_1351228490BCFA80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1250DCC0)
#define CLASS_3_1351228490BCFA80__CTOR_OFFSET UNITYSDK_OFFSET(0x1250DBB0)
#define CLASS_3_1351228490BCFA80___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250E590)

inline static constexpr unsigned int Class_3_1351228490BCFA80_TypeDefinitionIndex = 51329;

class Class_3_1351228490BCFA80 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonPartner*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonPartner* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonPartner*))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_5EBC62A17E81C353(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80_METHOD_3_5EBC62A17E81C353_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

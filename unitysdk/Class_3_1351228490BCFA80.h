#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_1351228490BCFA80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15253920)
#define CLASS_3_1351228490BCFA80_METHOD_3_18661EC33C94C2B7_OFFSET UNITYSDK_OFFSET(0x152545E0)
#define CLASS_3_1351228490BCFA80_METHOD_3_817FBC49EE13601E_OFFSET UNITYSDK_OFFSET(0x152543F0)
#define CLASS_3_1351228490BCFA80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152539F0)
#define CLASS_3_1351228490BCFA80__CTOR_OFFSET UNITYSDK_OFFSET(0x15253880)

inline static constexpr unsigned int Class_3_1351228490BCFA80_TypeDefinitionIndex = 53152;

class Class_3_1351228490BCFA80 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonPartner*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

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

	::RPG::GameCore::GameEntity* Method_3_817FBC49EE13601E(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80_METHOD_3_817FBC49EE13601E_OFFSET))(this, a1);
	}

	::System::Void Method_3_18661EC33C94C2B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1351228490BCFA80_METHOD_3_18661EC33C94C2B7_OFFSET))(this, a1);
	}
};

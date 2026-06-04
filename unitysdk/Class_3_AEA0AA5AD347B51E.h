#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConvinceHpChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AEA0AA5AD347B51E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142159A0)
#define CLASS_3_AEA0AA5AD347B51E__CTOR_OFFSET UNITYSDK_OFFSET(0x14215970)

inline static constexpr unsigned int Class_3_AEA0AA5AD347B51E_TypeDefinitionIndex = 49300;

class Class_3_AEA0AA5AD347B51E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceHpChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceHpChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + CLASS_3_AEA0AA5AD347B51E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEA0AA5AD347B51E_ONTASKBEGIN_OFFSET))(this);
	}
};

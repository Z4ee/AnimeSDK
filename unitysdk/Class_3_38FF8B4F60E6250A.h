#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableLocalPlayerMoveIgnoreMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_38FF8B4F60E6250A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x18EF8830)
#define CLASS_3_38FF8B4F60E6250A_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18EF8780)
#define CLASS_3_38FF8B4F60E6250A_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18EF8840)
#define CLASS_3_38FF8B4F60E6250A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EF8730)
#define CLASS_3_38FF8B4F60E6250A__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF8700)

inline static constexpr unsigned int Class_3_38FF8B4F60E6250A_TypeDefinitionIndex = 55529;

class Class_3_38FF8B4F60E6250A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*))((::PBYTE)hIl2Cpp + CLASS_3_38FF8B4F60E6250A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FF8B4F60E6250A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FF8B4F60E6250A_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FF8B4F60E6250A_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FF8B4F60E6250A_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}
};

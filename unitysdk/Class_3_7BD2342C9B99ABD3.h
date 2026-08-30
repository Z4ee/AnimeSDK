#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetHeadButtonEff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7BD2342C9B99ABD3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B4B810)
#define CLASS_3_7BD2342C9B99ABD3__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4B7E0)

inline static constexpr unsigned int Class_3_7BD2342C9B99ABD3_TypeDefinitionIndex = 55705;

class Class_3_7BD2342C9B99ABD3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetHeadButtonEff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHeadButtonEff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHeadButtonEff*))((::PBYTE)hIl2Cpp + CLASS_3_7BD2342C9B99ABD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BD2342C9B99ABD3_ONTASKBEGIN_OFFSET))(this);
	}
};

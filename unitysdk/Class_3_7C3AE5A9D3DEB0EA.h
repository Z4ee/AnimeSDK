#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleResultAsWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C3AE5A9D3DEB0EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD19C3B0)
#define CLASS_3_7C3AE5A9D3DEB0EA__CTOR_OFFSET UNITYSDK_OFFSET(0xD19C380)

inline static constexpr unsigned int Class_3_7C3AE5A9D3DEB0EA_TypeDefinitionIndex = 54669;

class Class_3_7C3AE5A9D3DEB0EA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleResultAsWin*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleResultAsWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleResultAsWin*))((::PBYTE)hIl2Cpp + CLASS_3_7C3AE5A9D3DEB0EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3AE5A9D3DEB0EA_ONTASKBEGIN_OFFSET))(this);
	}
};

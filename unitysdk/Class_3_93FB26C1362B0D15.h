#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterStealthState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93FB26C1362B0D15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EF2AF0)
#define CLASS_3_93FB26C1362B0D15__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF2AC0)

inline static constexpr unsigned int Class_3_93FB26C1362B0D15_TypeDefinitionIndex = 50800;

class Class_3_93FB26C1362B0D15 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterStealthState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterStealthState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterStealthState*))((::PBYTE)hIl2Cpp + CLASS_3_93FB26C1362B0D15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93FB26C1362B0D15_ONTASKBEGIN_OFFSET))(this);
	}
};

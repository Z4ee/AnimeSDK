#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterEffectMaterialBlock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05A1951B6165728E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AB9E80)
#define CLASS_3_05A1951B6165728E__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB9E50)

inline static constexpr unsigned int Class_3_05A1951B6165728E_TypeDefinitionIndex = 55908;

class Class_3_05A1951B6165728E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterEffectMaterialBlock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + CLASS_3_05A1951B6165728E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05A1951B6165728E_ONTASKBEGIN_OFFSET))(this);
	}
};

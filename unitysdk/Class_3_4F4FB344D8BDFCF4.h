#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterReplaceOriginMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F4FB344D8BDFCF4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1836E360)
#define CLASS_3_4F4FB344D8BDFCF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1836E330)

inline static constexpr unsigned int Class_3_4F4FB344D8BDFCF4_TypeDefinitionIndex = 56537;

class Class_3_4F4FB344D8BDFCF4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CharacterReplaceOriginMaterial*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReplaceOriginMaterial*))((::PBYTE)hIl2Cpp + CLASS_3_4F4FB344D8BDFCF4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F4FB344D8BDFCF4_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterVisibilityFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E0D81928B4623F44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA081230)
#define CLASS_3_E0D81928B4623F44__CTOR_OFFSET UNITYSDK_OFFSET(0xA081200)

inline static constexpr unsigned int Class_3_E0D81928B4623F44_TypeDefinitionIndex = 51053;

class Class_3_E0D81928B4623F44 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterVisibilityFollow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisibilityFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisibilityFollow*))((::PBYTE)hIl2Cpp + CLASS_3_E0D81928B4623F44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0D81928B4623F44_ONTASKBEGIN_OFFSET))(this);
	}
};

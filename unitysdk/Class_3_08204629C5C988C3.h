#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIgnoreSendEnlightSection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_08204629C5C988C3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE22F970)
#define CLASS_3_08204629C5C988C3_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE22FB30)
#define CLASS_3_08204629C5C988C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE22F980)
#define CLASS_3_08204629C5C988C3__CTOR_OFFSET UNITYSDK_OFFSET(0xE22F940)

inline static constexpr unsigned int Class_3_08204629C5C988C3_TypeDefinitionIndex = 53240;

class Class_3_08204629C5C988C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetIgnoreSendEnlightSection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIgnoreSendEnlightSection*))((::PBYTE)hIl2Cpp + CLASS_3_08204629C5C988C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08204629C5C988C3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08204629C5C988C3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08204629C5C988C3_ONSKIP_OFFSET))(this);
	}
};

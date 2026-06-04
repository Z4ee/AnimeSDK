#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeactiveFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_55CADDDFA5A09ABE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC7F9C0)
#define CLASS_3_55CADDDFA5A09ABE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7F990)

inline static constexpr unsigned int Class_3_55CADDDFA5A09ABE_TypeDefinitionIndex = 52196;

class Class_3_55CADDDFA5A09ABE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeactiveFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeactiveFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeactiveFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_55CADDDFA5A09ABE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55CADDDFA5A09ABE_ONTASKBEGIN_OFFSET))(this);
	}
};

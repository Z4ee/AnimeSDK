#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02C33D751379F152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A9DB90)
#define CLASS_3_02C33D751379F152__CTOR_OFFSET UNITYSDK_OFFSET(0x13A9DB60)

inline static constexpr unsigned int Class_3_02C33D751379F152_TypeDefinitionIndex = 52200;

class Class_3_02C33D751379F152 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HeadLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeadLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeadLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_02C33D751379F152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02C33D751379F152_ONTASKBEGIN_OFFSET))(this);
	}
};

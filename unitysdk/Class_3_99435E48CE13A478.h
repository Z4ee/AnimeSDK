#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachNishastagaItemToScene; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_99435E48CE13A478_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E60A10)
#define CLASS_3_99435E48CE13A478__CTOR_OFFSET UNITYSDK_OFFSET(0x15E609E0)

inline static constexpr unsigned int Class_3_99435E48CE13A478_TypeDefinitionIndex = 55365;

class Class_3_99435E48CE13A478 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachNishastagaItemToScene*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachNishastagaItemToScene* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachNishastagaItemToScene*))((::PBYTE)hIl2Cpp + CLASS_3_99435E48CE13A478__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99435E48CE13A478_ONTASKBEGIN_OFFSET))(this);
	}
};

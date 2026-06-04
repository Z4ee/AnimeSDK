#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BFEF915959F6CB91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1353A3B0)
#define CLASS_3_BFEF915959F6CB91__CTOR_OFFSET UNITYSDK_OFFSET(0x1353A380)

inline static constexpr unsigned int Class_3_BFEF915959F6CB91_TypeDefinitionIndex = 54569;

class Class_3_BFEF915959F6CB91 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_BFEF915959F6CB91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFEF915959F6CB91_ONTASKBEGIN_OFFSET))(this);
	}
};

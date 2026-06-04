#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGroupEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DE2AB2C658E0CCCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA47D7E0)
#define CLASS_3_DE2AB2C658E0CCCB__CTOR_OFFSET UNITYSDK_OFFSET(0xA47D7B0)

inline static constexpr unsigned int Class_3_DE2AB2C658E0CCCB_TypeDefinitionIndex = 48986;

class Class_3_DE2AB2C658E0CCCB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGroupEnterCombat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGroupEnterCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGroupEnterCombat*))((::PBYTE)hIl2Cpp + CLASS_3_DE2AB2C658E0CCCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2AB2C658E0CCCB_ONTASKBEGIN_OFFSET))(this);
	}
};

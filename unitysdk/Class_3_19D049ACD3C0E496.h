#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMunicipalEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_19D049ACD3C0E496_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD3E60)
#define CLASS_3_19D049ACD3C0E496__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD3E30)

inline static constexpr unsigned int Class_3_19D049ACD3C0E496_TypeDefinitionIndex = 55935;

class Class_3_19D049ACD3C0E496 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMunicipalEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + CLASS_3_19D049ACD3C0E496__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19D049ACD3C0E496_ONTASKBEGIN_OFFSET))(this);
	}
};

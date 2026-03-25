#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddGridFightTargetEquip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93B3A14EF41F6F3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBECBC90)
#define CLASS_3_93B3A14EF41F6F3C__CTOR_OFFSET UNITYSDK_OFFSET(0xBECBC60)

inline static constexpr unsigned int Class_3_93B3A14EF41F6F3C_TypeDefinitionIndex = 43874;

class Class_3_93B3A14EF41F6F3C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddGridFightTargetEquip*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_ONTASKBEGIN_OFFSET))(this);
	}
};

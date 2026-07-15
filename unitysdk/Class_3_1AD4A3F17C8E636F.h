#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyHealData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1AD4A3F17C8E636F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F083A0)
#define CLASS_3_1AD4A3F17C8E636F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F08370)

inline static constexpr unsigned int Class_3_1AD4A3F17C8E636F_TypeDefinitionIndex = 52707;

class Class_3_1AD4A3F17C8E636F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyHealData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyHealData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyHealData*))((::PBYTE)hIl2Cpp + CLASS_3_1AD4A3F17C8E636F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AD4A3F17C8E636F_ONTASKBEGIN_OFFSET))(this);
	}
};

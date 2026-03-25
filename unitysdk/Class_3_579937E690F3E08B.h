#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeCharacterRowData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_579937E690F3E08B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87831C0)
#define CLASS_3_579937E690F3E08B__CTOR_OFFSET UNITYSDK_OFFSET(0x8783190)

inline static constexpr unsigned int Class_3_579937E690F3E08B_TypeDefinitionIndex = 43952;

class Class_3_579937E690F3E08B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeCharacterRowData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + CLASS_3_579937E690F3E08B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_579937E690F3E08B_ONTASKBEGIN_OFFSET))(this);
	}
};

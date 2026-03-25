#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyFateLevelParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0232F8FAEA206D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE469B40)
#define CLASS_3_C0232F8FAEA206D6__CTOR_OFFSET UNITYSDK_OFFSET(0xE469B10)

inline static constexpr unsigned int Class_3_C0232F8FAEA206D6_TypeDefinitionIndex = 44187;

class Class_3_C0232F8FAEA206D6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyFateLevelParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + CLASS_3_C0232F8FAEA206D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0232F8FAEA206D6_ONTASKBEGIN_OFFSET))(this);
	}
};

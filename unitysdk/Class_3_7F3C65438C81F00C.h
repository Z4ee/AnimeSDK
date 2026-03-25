#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSpecialAvatarType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F3C65438C81F00C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x114BDA90)
#define CLASS_3_7F3C65438C81F00C__CTOR_OFFSET UNITYSDK_OFFSET(0x114BDA60)

inline static constexpr unsigned int Class_3_7F3C65438C81F00C_TypeDefinitionIndex = 43648;

class Class_3_7F3C65438C81F00C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSpecialAvatarType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + CLASS_3_7F3C65438C81F00C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F3C65438C81F00C_EVALUATE_OFFSET))(this);
	}
};

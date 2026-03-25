#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_70957BA4E89CF511_EVALUATE_OFFSET UNITYSDK_OFFSET(0x105B4E50)
#define CLASS_3_70957BA4E89CF511__CTOR_OFFSET UNITYSDK_OFFSET(0x105B4E20)

inline static constexpr unsigned int Class_3_70957BA4E89CF511_TypeDefinitionIndex = 43566;

class Class_3_70957BA4E89CF511 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAvatarBaseType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_70957BA4E89CF511__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70957BA4E89CF511_EVALUATE_OFFSET))(this);
	}
};

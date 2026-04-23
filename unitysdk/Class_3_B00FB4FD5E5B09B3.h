#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B00FB4FD5E5B09B3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x119598B0)
#define CLASS_3_B00FB4FD5E5B09B3_METHOD_3_D9AD95633F9B1F0F_OFFSET UNITYSDK_OFFSET(0x11959900)
#define CLASS_3_B00FB4FD5E5B09B3__CTOR_OFFSET UNITYSDK_OFFSET(0x11959880)

inline static constexpr unsigned int Class_3_B00FB4FD5E5B09B3_TypeDefinitionIndex = 50307;

class Class_3_B00FB4FD5E5B09B3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareDynamicValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_B00FB4FD5E5B09B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B00FB4FD5E5B09B3_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_D9AD95633F9B1F0F(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_B00FB4FD5E5B09B3_METHOD_3_D9AD95633F9B1F0F_OFFSET))(a1, a2);
	}
};

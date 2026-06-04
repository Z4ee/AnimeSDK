#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_E105E8A7A7654142_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA62E730)
#define CLASS_1_E105E8A7A7654142_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA62E7C0)
#define CLASS_1_E105E8A7A7654142_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xA62E840)
#define CLASS_1_E105E8A7A7654142_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0xA62E8B0)
#define CLASS_1_E105E8A7A7654142__CTOR_OFFSET UNITYSDK_OFFSET(0xA62E5B0)

inline static constexpr unsigned int Class_1_E105E8A7A7654142_TypeDefinitionIndex = 48714;

class Class_1_E105E8A7A7654142 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::ReactionItemConfig* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ReactionItemConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_218ED161703401BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195D3810)
#define CLASS_1_218ED161703401BD_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x195D3970)
#define CLASS_1_218ED161703401BD_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x195D39F0)
#define CLASS_1_218ED161703401BD_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x195D3A60)
#define CLASS_1_218ED161703401BD__CTOR_OFFSET UNITYSDK_OFFSET(0x195D3630)

inline static constexpr unsigned int Class_1_218ED161703401BD_TypeDefinitionIndex = 52387;

class Class_1_218ED161703401BD : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
	::System::String* MCFBLJDBCAC; // 0x18
	::Class_3_07C3C4D2990C49EE* PEIHJAEIGHK; // 0x20
	::System::String* NLCHCOEHFDH; // 0x28
	::Class_3_07C3C4D2990C49EE* OLPNJHPNJNG; // 0x30

	::System::Void _ctor(::RPG::GameCore::ReactionItemConfig* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ReactionItemConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_218ED161703401BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_218ED161703401BD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_218ED161703401BD_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_218ED161703401BD_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_218ED161703401BD_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}
};

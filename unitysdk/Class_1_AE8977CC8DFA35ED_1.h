#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define CLASS_1_AE8977CC8DFA35ED_1_METHOD_1_F529FE43CE7C9911_OFFSET UNITYSDK_OFFSET(0x16573B60)
#define CLASS_1_AE8977CC8DFA35ED_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16573B50)

inline static constexpr unsigned int Class_1_AE8977CC8DFA35ED_1_TypeDefinitionIndex = 50000;

class Class_1_AE8977CC8DFA35ED_1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_1__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Method_1_F529FE43CE7C9911()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_1_METHOD_1_F529FE43CE7C9911_OFFSET))(this);
	}
};

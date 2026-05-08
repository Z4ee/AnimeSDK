#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_23E8545F36B2D435_OFFSET UNITYSDK_OFFSET(0x18E874B0)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x18E879B0)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x18E87390)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x18E87440)
#define CLASS_1_AE8977CC8DFA35ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18E87380)

inline static constexpr unsigned int Class_1_AE8977CC8DFA35ED_TypeDefinitionIndex = 44269;

class Class_1_AE8977CC8DFA35ED : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_23E8545F36B2D435()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_23E8545F36B2D435_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_6D5F59BCE8B4A09A_OFFSET))(this);
	}
};

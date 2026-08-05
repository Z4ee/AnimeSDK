#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_99C4FD03F8C3CCBF_METHOD_1_23E8545F36B2D435_OFFSET UNITYSDK_OFFSET(0x113E6CB0)
#define CLASS_1_99C4FD03F8C3CCBF_METHOD_1_423617841C2744FD_OFFSET UNITYSDK_OFFSET(0x113E7240)
#define CLASS_1_99C4FD03F8C3CCBF_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x113E71B0)
#define CLASS_1_99C4FD03F8C3CCBF_METHOD_1_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x113E6C00)
#define CLASS_1_99C4FD03F8C3CCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6BF0)

inline static constexpr unsigned int Class_1_99C4FD03F8C3CCBF_TypeDefinitionIndex = 86030;

class Class_1_99C4FD03F8C3CCBF : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_99C4FD03F8C3CCBF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C4FD03F8C3CCBF_METHOD_1_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Boolean Method_1_23E8545F36B2D435()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C4FD03F8C3CCBF_METHOD_1_23E8545F36B2D435_OFFSET))(this);
	}

	::System::Void Method_1_423617841C2744FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C4FD03F8C3CCBF_METHOD_1_423617841C2744FD_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C4FD03F8C3CCBF_METHOD_1_6D5F59BCE8B4A09A_OFFSET))(this);
	}
};

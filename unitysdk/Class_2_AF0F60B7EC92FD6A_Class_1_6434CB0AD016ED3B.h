#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF0F60B7EC92FD6A;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_6434CB0AD016ED3B_METHOD_1_665F78E853B7E060_OFFSET UNITYSDK_OFFSET(0x175F3710)
#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_6434CB0AD016ED3B__CTOR_OFFSET UNITYSDK_OFFSET(0x175F3700)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Class_1_6434CB0AD016ED3B_TypeDefinitionIndex = 85519;

class Class_2_AF0F60B7EC92FD6A_Class_1_6434CB0AD016ED3B : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_2; // 0x18
	::Class_2_AF0F60B7EC92FD6A* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_6434CB0AD016ED3B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_665F78E853B7E060(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_6434CB0AD016ED3B_METHOD_1_665F78E853B7E060_OFFSET))(this, a1);
	}
};

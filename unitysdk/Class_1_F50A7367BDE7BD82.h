#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_F50A7367BDE7BD82_METHOD_1_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x18B2F320)
#define CLASS_1_F50A7367BDE7BD82__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2F3C0)

inline static constexpr unsigned int Class_1_F50A7367BDE7BD82_TypeDefinitionIndex = 53896;

class Class_1_F50A7367BDE7BD82 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F50A7367BDE7BD82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_1_F50A7367BDE7BD82_METHOD_1_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_F50A7367BDE7BD82_METHOD_1_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x117F07D0)
#define CLASS_1_F50A7367BDE7BD82__CTOR_OFFSET UNITYSDK_OFFSET(0x117F0860)

inline static constexpr unsigned int Class_1_F50A7367BDE7BD82_TypeDefinitionIndex = 60287;

class Class_1_F50A7367BDE7BD82 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F50A7367BDE7BD82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_1_F50A7367BDE7BD82_METHOD_1_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};

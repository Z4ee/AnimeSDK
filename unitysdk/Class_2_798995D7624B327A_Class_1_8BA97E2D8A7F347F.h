#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_798995D7624B327A;
namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }

#define CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_6CCA5A860C017ED3_1_OFFSET UNITYSDK_OFFSET(0x12C1C9E0)
#define CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_6CCA5A860C017ED3_OFFSET UNITYSDK_OFFSET(0x12C1C910)
#define CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_DBA6296FF58E385F_OFFSET UNITYSDK_OFFSET(0x12C1CAB0)
#define CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1C900)

inline static constexpr unsigned int Class_2_798995D7624B327A_Class_1_8BA97E2D8A7F347F_TypeDefinitionIndex = 74628;

class Class_2_798995D7624B327A_Class_1_8BA97E2D8A7F347F : public ::System::Object
{
public:
	::Class_2_798995D7624B327A* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F__CTOR_OFFSET))(this);
	}

	::System::IComparable* Method_1_6CCA5A860C017ED3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_6CCA5A860C017ED3_OFFSET))(this, a1);
	}

	::System::IComparable* Method_1_6CCA5A860C017ED3_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_6CCA5A860C017ED3_1_OFFSET))(this, a1);
	}

	::System::IComparable* Method_1_DBA6296FF58E385F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_8BA97E2D8A7F347F_METHOD_1_DBA6296FF58E385F_OFFSET))(this, a1);
	}
};

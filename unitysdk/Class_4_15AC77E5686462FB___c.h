#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_15AC77E5686462FB___C_METHOD_1_A07DB1B89DF8A155_OFFSET UNITYSDK_OFFSET(0x169F9A50)
#define CLASS_4_15AC77E5686462FB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F9A00)
#define CLASS_4_15AC77E5686462FB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F9A40)

inline static constexpr unsigned int Class_4_15AC77E5686462FB___c_TypeDefinitionIndex = 50446;

class Class_4_15AC77E5686462FB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_00D9F8D189C6D68A_2*, ::MoleMole::HollowChessboard::HollowCell>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_3_00D9F8D189C6D68A_2*, ::MoleMole::HollowChessboard::HollowCell>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_15AC77E5686462FB___c_TypeDefinitionIndex)->GetStaticField(0x4BAB0);
	}
	static ::Class_4_15AC77E5686462FB___c** StaticGet___9()
	{
		return (::Class_4_15AC77E5686462FB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_15AC77E5686462FB___c_TypeDefinitionIndex)->GetStaticField(0x4BAB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_A07DB1B89DF8A155(::Class_3_00D9F8D189C6D68A_2* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::Class_3_00D9F8D189C6D68A_2*))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB___C_METHOD_1_A07DB1B89DF8A155_OFFSET))(this, a1);
	}
};

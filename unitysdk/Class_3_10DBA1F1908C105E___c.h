#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_0A0249BC1D25B534;
class Class_4_B99AA5AE371451AA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_10DBA1F1908C105E___C_METHOD_1_75783D13EE0C0397_OFFSET UNITYSDK_OFFSET(0x1665B470)
#define CLASS_3_10DBA1F1908C105E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1665B420)
#define CLASS_3_10DBA1F1908C105E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1665B460)

inline static constexpr unsigned int Class_3_10DBA1F1908C105E___c_TypeDefinitionIndex = 43297;

class Class_3_10DBA1F1908C105E___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_0A0249BC1D25B534*, ::Class_4_B99AA5AE371451AA*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_4_0A0249BC1D25B534*, ::Class_4_B99AA5AE371451AA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_10DBA1F1908C105E___c_TypeDefinitionIndex)->GetStaticField(0x505B0);
	}
	static ::Class_3_10DBA1F1908C105E___c** StaticGet___9()
	{
		return (::Class_3_10DBA1F1908C105E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_10DBA1F1908C105E___c_TypeDefinitionIndex)->GetStaticField(0x505B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_10DBA1F1908C105E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10DBA1F1908C105E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75783D13EE0C0397(::Class_4_0A0249BC1D25B534* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0A0249BC1D25B534*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_10DBA1F1908C105E___C_METHOD_1_75783D13EE0C0397_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_145;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5B77AFAB413B4FAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C544E10)
#define CLASS_1_5B77AFAB413B4FAB___C__CREATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C544E60)
#define CLASS_1_5B77AFAB413B4FAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544E50)

inline static constexpr unsigned int Class_1_5B77AFAB413B4FAB___c_TypeDefinitionIndex = 41816;

class Class_1_5B77AFAB413B4FAB___c : public ::System::Object
{
public:
	static ::Class_1_5B77AFAB413B4FAB___c** StaticGet___9()
	{
		return (::Class_1_5B77AFAB413B4FAB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B77AFAB413B4FAB___c_TypeDefinitionIndex)->GetStaticField(0x16650);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_145*, ::System::UInt32>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_145*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B77AFAB413B4FAB___c_TypeDefinitionIndex)->GetStaticField(0x16658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _Create_b__9_0(::Class_0_16E4307DCC419505_145* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_145*))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__CREATE_B__9_0_OFFSET))(this, a1);
	}
};

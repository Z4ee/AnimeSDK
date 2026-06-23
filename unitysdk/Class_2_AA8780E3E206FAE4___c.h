#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_AA8780E3E206FAE4___C_METHOD_1_8E1F0E91FF6BA6E4_OFFSET UNITYSDK_OFFSET(0x14DC6BA0)
#define CLASS_2_AA8780E3E206FAE4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DC6B50)
#define CLASS_2_AA8780E3E206FAE4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC6B90)

inline static constexpr unsigned int Class_2_AA8780E3E206FAE4___c_TypeDefinitionIndex = 79570;

class Class_2_AA8780E3E206FAE4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AA8780E3E206FAE4___c_TypeDefinitionIndex)->GetStaticField(0x3E570);
	}
	static ::Class_2_AA8780E3E206FAE4___c** StaticGet___9()
	{
		return (::Class_2_AA8780E3E206FAE4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AA8780E3E206FAE4___c_TypeDefinitionIndex)->GetStaticField(0x3E578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AA8780E3E206FAE4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA8780E3E206FAE4___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8E1F0E91FF6BA6E4(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_AA8780E3E206FAE4___C_METHOD_1_8E1F0E91FF6BA6E4_OFFSET))(this, a1);
	}
};

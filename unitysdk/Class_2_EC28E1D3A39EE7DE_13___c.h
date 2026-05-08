#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC28E1D3A39EE7DE_13___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1093B910)
#define CLASS_2_EC28E1D3A39EE7DE_13___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1093B8D0)
#define CLASS_2_EC28E1D3A39EE7DE_13___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1093B880)
#define CLASS_2_EC28E1D3A39EE7DE_13___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1093B8C0)

inline static constexpr unsigned int Class_2_EC28E1D3A39EE7DE_13___c_TypeDefinitionIndex = 67792;

class Class_2_EC28E1D3A39EE7DE_13___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__62_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_13___c_TypeDefinitionIndex)->GetStaticField(0x42610);
	}
	static ::Class_2_EC28E1D3A39EE7DE_13___c** StaticGet___9()
	{
		return (::Class_2_EC28E1D3A39EE7DE_13___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_13___c_TypeDefinitionIndex)->GetStaticField(0x42618);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_13___c_TypeDefinitionIndex)->GetStaticField(0x42620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_13___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_13___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_13___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_13___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};

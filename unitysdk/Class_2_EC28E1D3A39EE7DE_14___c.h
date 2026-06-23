#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC28E1D3A39EE7DE_14___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x154E4230)
#define CLASS_2_EC28E1D3A39EE7DE_14___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x154E41F0)
#define CLASS_2_EC28E1D3A39EE7DE_14___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E41A0)
#define CLASS_2_EC28E1D3A39EE7DE_14___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154E41E0)

inline static constexpr unsigned int Class_2_EC28E1D3A39EE7DE_14___c_TypeDefinitionIndex = 49671;

class Class_2_EC28E1D3A39EE7DE_14___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__62_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_14___c_TypeDefinitionIndex)->GetStaticField(0x47880);
	}
	static ::Class_2_EC28E1D3A39EE7DE_14___c** StaticGet___9()
	{
		return (::Class_2_EC28E1D3A39EE7DE_14___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_14___c_TypeDefinitionIndex)->GetStaticField(0x47888);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_14___c_TypeDefinitionIndex)->GetStaticField(0x47890);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_14___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_14___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_14___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_14___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};

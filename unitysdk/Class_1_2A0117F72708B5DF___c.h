#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6ED1F56B40EEF3F;
class Class_2_208CC9941471731A_869;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2A0117F72708B5DF___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x14E586E0)
#define CLASS_1_2A0117F72708B5DF___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x14E586C0)
#define CLASS_1_2A0117F72708B5DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E58670)
#define CLASS_1_2A0117F72708B5DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E586B0)

inline static constexpr unsigned int Class_1_2A0117F72708B5DF___c_TypeDefinitionIndex = 56458;

class Class_1_2A0117F72708B5DF___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_A6ED1F56B40EEF3F*, ::System::Boolean>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::Class_1_A6ED1F56B40EEF3F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A0117F72708B5DF___c_TypeDefinitionIndex)->GetStaticField(0x32780);
	}
	static ::Class_1_2A0117F72708B5DF___c** StaticGet___9()
	{
		return (::Class_1_2A0117F72708B5DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A0117F72708B5DF___c_TypeDefinitionIndex)->GetStaticField(0x32788);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_869*, ::System::Int32>** StaticGet___9__43_1()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_869*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A0117F72708B5DF___c_TypeDefinitionIndex)->GetStaticField(0x32790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A0117F72708B5DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A0117F72708B5DF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_869* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_869*))((::PBYTE)hIl2Cpp + CLASS_1_2A0117F72708B5DF___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_A6ED1F56B40EEF3F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A6ED1F56B40EEF3F*))((::PBYTE)hIl2Cpp + CLASS_1_2A0117F72708B5DF___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};

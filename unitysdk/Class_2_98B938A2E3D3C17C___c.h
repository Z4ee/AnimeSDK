#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_10;
class Class_3_9D33A2E94B3E53DC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_98B938A2E3D3C17C___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x190BA620)
#define CLASS_2_98B938A2E3D3C17C___C_METHOD_1_DB95BB127AF8AF7E_OFFSET UNITYSDK_OFFSET(0x190BA5F0)
#define CLASS_2_98B938A2E3D3C17C___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x190BA600)
#define CLASS_2_98B938A2E3D3C17C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190BA5A0)
#define CLASS_2_98B938A2E3D3C17C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x190BA5E0)

inline static constexpr unsigned int Class_2_98B938A2E3D3C17C___c_TypeDefinitionIndex = 67334;

class Class_2_98B938A2E3D3C17C___c : public ::System::Object
{
public:
	static ::Class_2_98B938A2E3D3C17C___c** StaticGet___9()
	{
		return (::Class_2_98B938A2E3D3C17C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98B938A2E3D3C17C___c_TypeDefinitionIndex)->GetStaticField(0x36650);
	}
	static ::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>** StaticGet___9__105_0()
	{
		return (::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98B938A2E3D3C17C___c_TypeDefinitionIndex)->GetStaticField(0x36658);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_10*, ::System::Int32>** StaticGet___9__72_1()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_10*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98B938A2E3D3C17C___c_TypeDefinitionIndex)->GetStaticField(0x36660);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>, ::Class_3_9D33A2E94B3E53DC*>** StaticGet___9__57_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>, ::Class_3_9D33A2E94B3E53DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98B938A2E3D3C17C___c_TypeDefinitionIndex)->GetStaticField(0x36668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98B938A2E3D3C17C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B938A2E3D3C17C___C__CTOR_OFFSET))(this);
	}

	::Class_3_9D33A2E94B3E53DC* Method_1_DB95BB127AF8AF7E(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*> a1)
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>))((::PBYTE)hIl2Cpp + CLASS_2_98B938A2E3D3C17C___C_METHOD_1_DB95BB127AF8AF7E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_98B938A2E3D3C17C___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_10* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_10*))((::PBYTE)hIl2Cpp + CLASS_2_98B938A2E3D3C17C___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_383;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_576F70FE740CFF91___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x14E9D3F0)
#define CLASS_2_576F70FE740CFF91___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E9D3A0)
#define CLASS_2_576F70FE740CFF91___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9D3E0)

inline static constexpr unsigned int Class_2_576F70FE740CFF91___c_TypeDefinitionIndex = 77799;

class Class_2_576F70FE740CFF91___c : public ::System::Object
{
public:
	static ::Class_2_576F70FE740CFF91___c** StaticGet___9()
	{
		return (::Class_2_576F70FE740CFF91___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_576F70FE740CFF91___c_TypeDefinitionIndex)->GetStaticField(0x44750);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_383*, ::System::Int32>** StaticGet___9__17_4()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_383*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_576F70FE740CFF91___c_TypeDefinitionIndex)->GetStaticField(0x44758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_576F70FE740CFF91___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_576F70FE740CFF91___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_383* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_383*))((::PBYTE)hIl2Cpp + CLASS_2_576F70FE740CFF91___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_920E995B355E8493;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_563361C0CAE0F9B3___C_METHOD_1_B131067221E7B531_OFFSET UNITYSDK_OFFSET(0x16646F50)
#define CLASS_1_563361C0CAE0F9B3___C_METHOD_1_EA79680CAB194A2F_OFFSET UNITYSDK_OFFSET(0x16646FA0)
#define CLASS_1_563361C0CAE0F9B3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16646F00)
#define CLASS_1_563361C0CAE0F9B3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16646F40)

inline static constexpr unsigned int Class_1_563361C0CAE0F9B3___c_TypeDefinitionIndex = 45665;

class Class_1_563361C0CAE0F9B3___c : public ::System::Object
{
public:
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::Class_1_920E995B355E8493*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::Class_1_920E995B355E8493*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_563361C0CAE0F9B3___c_TypeDefinitionIndex)->GetStaticField(0x3D780);
	}
	static ::Class_1_563361C0CAE0F9B3___c** StaticGet___9()
	{
		return (::Class_1_563361C0CAE0F9B3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_563361C0CAE0F9B3___c_TypeDefinitionIndex)->GetStaticField(0x3D788);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_563361C0CAE0F9B3___c_TypeDefinitionIndex)->GetStaticField(0x3D790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3___C__CTOR_OFFSET))(this);
	}

	::Class_1_920E995B355E8493* Method_1_B131067221E7B531(::Code::Logic::Data::ScriptObject::Level::Layer* a1)
	{
		return ((::Class_1_920E995B355E8493*(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3___C_METHOD_1_B131067221E7B531_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EA79680CAB194A2F(::Code::Logic::Data::ScriptObject::Level::Layer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3___C_METHOD_1_EA79680CAB194A2F_OFFSET))(this, a1);
	}
};

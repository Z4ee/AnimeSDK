#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1057;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7B411574727E905C___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18F13880)
#define CLASS_1_7B411574727E905C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F13830)
#define CLASS_1_7B411574727E905C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F13870)

inline static constexpr unsigned int Class_1_7B411574727E905C___c_TypeDefinitionIndex = 17095;

class Class_1_7B411574727E905C___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_1057*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_1057*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B411574727E905C___c_TypeDefinitionIndex)->GetStaticField(0x7A50);
	}
	static ::Class_1_7B411574727E905C___c** StaticGet___9()
	{
		return (::Class_1_7B411574727E905C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B411574727E905C___c_TypeDefinitionIndex)->GetStaticField(0x7A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B411574727E905C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B411574727E905C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_1057* a1, ::Class_2_208CC9941471731A_1057* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1057*, ::Class_2_208CC9941471731A_1057*))((::PBYTE)hIl2Cpp + CLASS_1_7B411574727E905C___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};

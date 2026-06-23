#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_597;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_47E5F1F1344493AA_METHOD_1_26B208DE6817D227_OFFSET UNITYSDK_OFFSET(0x13B41630)
#define CLASS_1_47E5F1F1344493AA_METHOD_1_DD22ED3303BA36F4_1_OFFSET UNITYSDK_OFFSET(0x13B41C70)
#define CLASS_1_47E5F1F1344493AA_METHOD_1_DD22ED3303BA36F4_OFFSET UNITYSDK_OFFSET(0x13B41B60)
#define CLASS_1_47E5F1F1344493AA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B41620)

inline static constexpr unsigned int Class_1_47E5F1F1344493AA_TypeDefinitionIndex = 49129;

class Class_1_47E5F1F1344493AA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E5F1F1344493AA__CTOR_OFFSET))(this);
	}

	static ::Class_2_208CC9941471731A_597* Method_1_26B208DE6817D227(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_597*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47E5F1F1344493AA_METHOD_1_26B208DE6817D227_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD22ED3303BA36F4(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47E5F1F1344493AA_METHOD_1_DD22ED3303BA36F4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DD22ED3303BA36F4_1(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47E5F1F1344493AA_METHOD_1_DD22ED3303BA36F4_1_OFFSET))(a1, a2, a3, a4);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_4C34AA347D3ACFC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F7090)

inline static constexpr unsigned int Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex = 34826;

class Class_1_4C34AA347D3ACFC1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex)->GetStaticField(0x53E10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex)->GetStaticField(0x53E18);
	}
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C34AA347D3ACFC1__CCTOR_OFFSET))();
	}
};

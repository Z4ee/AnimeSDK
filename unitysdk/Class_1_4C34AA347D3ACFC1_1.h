#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_4C34AA347D3ACFC1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CBA0F0)

inline static constexpr unsigned int Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex = 34551;

class Class_1_4C34AA347D3ACFC1_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex)->GetStaticField(0x5ADC0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex)->GetStaticField(0x5ADC8);
	}
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C34AA347D3ACFC1_1__CCTOR_OFFSET))();
	}
};

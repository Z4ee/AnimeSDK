#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_4C34AA347D3ACFC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0C99D0)

inline static constexpr unsigned int Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex = 36361;

class Class_1_4C34AA347D3ACFC1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex)->GetStaticField(0x72C0);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_TypeDefinitionIndex)->GetStaticField(0x72C8);
	}
	// static const ::System::Int32 NMGAJKCCJKO = 0x0; // 0x0
	// static const ::System::Int32 EOIMBBFNKPP = 0x1; // 0x0
	// static const ::System::Int32 KFAJCPCHJBF = 0x2; // 0x0
	// static const ::System::Int32 FHAAHMEJMCI = 0x3; // 0x0
	// static const ::System::Int32 GCNPEDHNFJK = 0x4; // 0x0
	// static const ::System::Int32 DICDJJOJKGF = 0x5; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C34AA347D3ACFC1__CCTOR_OFFSET))();
	}
};

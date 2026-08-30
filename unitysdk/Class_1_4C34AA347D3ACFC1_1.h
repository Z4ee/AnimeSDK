#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_4C34AA347D3ACFC1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5F6760)

inline static constexpr unsigned int Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex = 40775;

class Class_1_4C34AA347D3ACFC1_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex)->GetStaticField(0x25D10);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C34AA347D3ACFC1_1_TypeDefinitionIndex)->GetStaticField(0x25D18);
	}
	// static const ::System::Int32 OMJFJMKKKNJ = 0x0; // 0x0
	// static const ::System::Int32 CIMBNNMOBLK = 0x1; // 0x0
	// static const ::System::Int32 AIFJKNOEJAI = 0x2; // 0x0
	// static const ::System::Int32 JGBGMMLEBCI = 0x3; // 0x0
	// static const ::System::Int32 PJLKEFFEAHE = 0x4; // 0x0
	// static const ::System::Int32 JGJKBKOBEBG = 0x5; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C34AA347D3ACFC1_1__CCTOR_OFFSET))();
	}
};

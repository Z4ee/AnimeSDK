#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_626459426575C8A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A904770)

inline static constexpr unsigned int Class_1_626459426575C8A7_TypeDefinitionIndex = 39906;

class Class_1_626459426575C8A7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_626459426575C8A7_TypeDefinitionIndex)->GetStaticField(0x309A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_626459426575C8A7_TypeDefinitionIndex)->GetStaticField(0x309A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_626459426575C8A7__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_DB10F0E607F8EAD9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E9CB30)

inline static constexpr unsigned int Class_1_DB10F0E607F8EAD9_1_TypeDefinitionIndex = 38352;

class Class_1_DB10F0E607F8EAD9_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_13()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB10F0E607F8EAD9_1_TypeDefinitionIndex)->GetStaticField(0x18810);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_14()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB10F0E607F8EAD9_1_TypeDefinitionIndex)->GetStaticField(0x18818);
	}
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB10F0E607F8EAD9_1__CCTOR_OFFSET))();
	}
};

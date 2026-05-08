#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E59F92993EBA43C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C13F30)

inline static constexpr unsigned int Class_1_E59F92993EBA43C9_TypeDefinitionIndex = 62186;

class Class_1_E59F92993EBA43C9 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E59F92993EBA43C9_TypeDefinitionIndex)->GetStaticField(0xA570);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E59F92993EBA43C9__CCTOR_OFFSET))();
	}
};

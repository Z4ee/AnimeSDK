#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6DF1B184E59ABB97__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB82240)

inline static constexpr unsigned int Class_1_6DF1B184E59ABB97_TypeDefinitionIndex = 39101;

class Class_1_6DF1B184E59ABB97 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF1B184E59ABB97_TypeDefinitionIndex)->GetStaticField(0xBD90);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF1B184E59ABB97_TypeDefinitionIndex)->GetStaticField(0xBD94);
	}
	// static const ::System::Int32 Field_1_0 = 0xFB771; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xF4C0F; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x75AA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2581; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5F77B8E; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5F77B8F; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5F77B90; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9881CD; // 0x0
	// static const ::System::String* Field_1_10; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DF1B184E59ABB97__CCTOR_OFFSET))();
	}
};

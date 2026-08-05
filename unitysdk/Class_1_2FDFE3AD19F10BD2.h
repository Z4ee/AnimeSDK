#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2FDFE3AD19F10BD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17516B80)

inline static constexpr unsigned int Class_1_2FDFE3AD19F10BD2_TypeDefinitionIndex = 68222;

class Class_1_2FDFE3AD19F10BD2 : public ::System::Object
{
public:
	static ::Foundation::AssetPath* StaticGet_Field_1_5()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FDFE3AD19F10BD2_TypeDefinitionIndex)->GetStaticField(0x38AE0);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_7()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FDFE3AD19F10BD2_TypeDefinitionIndex)->GetStaticField(0x38AF0);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_6()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FDFE3AD19F10BD2_TypeDefinitionIndex)->GetStaticField(0x38B00);
	}
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FDFE3AD19F10BD2__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EA4E26C6BE1CB13F__CCTOR_OFFSET UNITYSDK_OFFSET(0x149207E0)

inline static constexpr unsigned int Class_1_EA4E26C6BE1CB13F_TypeDefinitionIndex = 56133;

class Class_1_EA4E26C6BE1CB13F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA4E26C6BE1CB13F_TypeDefinitionIndex)->GetStaticField(0x4F0C0);
	}
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6ACFC11; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA4E26C6BE1CB13F__CCTOR_OFFSET))();
	}
};

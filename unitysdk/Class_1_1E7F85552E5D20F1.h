#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1E7F85552E5D20F1__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAFD080)

inline static constexpr unsigned int Class_1_1E7F85552E5D20F1_TypeDefinitionIndex = 64593;

class Class_1_1E7F85552E5D20F1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E7F85552E5D20F1_TypeDefinitionIndex)->GetStaticField(0x490B0);
	}
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x6ACFC11; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E7F85552E5D20F1__CCTOR_OFFSET))();
	}
};

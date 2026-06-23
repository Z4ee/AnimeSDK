#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B6A163368DEBFA20.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define CLASS_1_2AA3CC97676AE2EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E3FDF0)

inline static constexpr unsigned int Class_1_2AA3CC97676AE2EA_TypeDefinitionIndex = 82805;

class Class_1_2AA3CC97676AE2EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::IComparer_1<::Enum_3_B6A163368DEBFA20>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::IComparer_1<::Enum_3_B6A163368DEBFA20>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AA3CC97676AE2EA_TypeDefinitionIndex)->GetStaticField(0x3B050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AA3CC97676AE2EA__CCTOR_OFFSET))();
	}
};

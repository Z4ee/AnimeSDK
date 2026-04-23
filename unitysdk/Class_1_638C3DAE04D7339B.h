#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_698098A743D71086.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_527;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_638C3DAE04D7339B_METHOD_1_A436E68B9E25A6CB_OFFSET UNITYSDK_OFFSET(0xD9E6C70)
#define CLASS_1_638C3DAE04D7339B_METHOD_1_E4B865FA28DADF90_OFFSET UNITYSDK_OFFSET(0xD9E6D00)
#define CLASS_1_638C3DAE04D7339B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9E6E30)

inline static constexpr unsigned int Class_1_638C3DAE04D7339B_TypeDefinitionIndex = 53086;

class Class_1_638C3DAE04D7339B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Struct_2_698098A743D71086>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Struct_2_698098A743D71086>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_638C3DAE04D7339B_TypeDefinitionIndex)->GetStaticField(0x4F930);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_638C3DAE04D7339B_TypeDefinitionIndex)->GetStaticField(0xFD00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_638C3DAE04D7339B__CCTOR_OFFSET))();
	}

	static ::Struct_2_698098A743D71086 Method_1_A436E68B9E25A6CB(::System::RuntimeTypeHandle a1)
	{
		return ((::Struct_2_698098A743D71086(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_638C3DAE04D7339B_METHOD_1_A436E68B9E25A6CB_OFFSET))(a1);
	}

	static ::Struct_2_698098A743D71086 Method_1_E4B865FA28DADF90(::Class_0_16E4307DCC419505_527* a1)
	{
		return ((::Struct_2_698098A743D71086(*)(::Class_0_16E4307DCC419505_527*))((::PBYTE)hIl2Cpp + CLASS_1_638C3DAE04D7339B_METHOD_1_E4B865FA28DADF90_OFFSET))(a1);
	}
};

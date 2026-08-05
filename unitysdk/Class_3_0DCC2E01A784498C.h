#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

class Class_2_604149159BD159AA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0DCC2E01A784498C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE987510)
#define CLASS_3_0DCC2E01A784498C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE987590)
#define CLASS_3_0DCC2E01A784498C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9873C0)

inline static constexpr unsigned int Class_3_0DCC2E01A784498C_TypeDefinitionIndex = 47871;

class Class_3_0DCC2E01A784498C : public ::Class_2_BCA32DB678A03168
{
public:
	::Class_2_604149159BD159AA* Field_3_0; // 0x38
	::System::Int32 Field_3_1; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0DCC2E01A784498C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DCC2E01A784498C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DCC2E01A784498C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

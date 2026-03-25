#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72F1FC265AE4154F_METHOD_1_48D6D6E56C99C05A_OFFSET UNITYSDK_OFFSET(0x8BD8830)
#define CLASS_1_72F1FC265AE4154F_METHOD_1_63DBFEDAB5E3EF2C_OFFSET UNITYSDK_OFFSET(0x8BD8540)
#define CLASS_1_72F1FC265AE4154F_METHOD_1_B32F1B681FFAD45E_OFFSET UNITYSDK_OFFSET(0x8BD8310)
#define CLASS_1_72F1FC265AE4154F__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BD8A50)

inline static constexpr unsigned int Class_1_72F1FC265AE4154F_TypeDefinitionIndex = 53935;

class Class_1_72F1FC265AE4154F : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F1FC265AE4154F_TypeDefinitionIndex)->GetStaticField(0x482F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F1FC265AE4154F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_1_B32F1B681FFAD45E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F1FC265AE4154F_METHOD_1_B32F1B681FFAD45E_OFFSET))();
	}

	static ::System::String* Method_1_63DBFEDAB5E3EF2C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72F1FC265AE4154F_METHOD_1_63DBFEDAB5E3EF2C_OFFSET))(a1);
	}

	static ::System::Void Method_1_48D6D6E56C99C05A(::Enum_3_F80BFD5B986D5503_3 a1)
	{
		return ((::System::Void(*)(::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_72F1FC265AE4154F_METHOD_1_48D6D6E56C99C05A_OFFSET))(a1);
	}
};

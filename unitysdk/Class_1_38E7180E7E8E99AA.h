#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/System/Object.h"

class Class_2_BCA32DB678A03168;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_38E7180E7E8E99AA_METHOD_1_8B6F61B296E5C2E5_OFFSET UNITYSDK_OFFSET(0xD45CC60)
#define CLASS_1_38E7180E7E8E99AA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD45B4F0)

inline static constexpr unsigned int Class_1_38E7180E7E8E99AA_TypeDefinitionIndex = 49977;

class Class_1_38E7180E7E8E99AA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_316FC8E376D95053, ::System::Func_5<::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::Class_2_BCA32DB678A03168*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_316FC8E376D95053, ::System::Func_5<::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::Class_2_BCA32DB678A03168*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38E7180E7E8E99AA_TypeDefinitionIndex)->GetStaticField(0x456E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_38E7180E7E8E99AA__CCTOR_OFFSET))();
	}

	static ::Class_2_BCA32DB678A03168* Method_1_8B6F61B296E5C2E5(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::Class_2_BCA32DB678A03168*(*)(::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_38E7180E7E8E99AA_METHOD_1_8B6F61B296E5C2E5_OFFSET))(a1, a2, a3, a4);
	}
};

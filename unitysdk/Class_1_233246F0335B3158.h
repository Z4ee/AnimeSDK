#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_233246F0335B3158_METHOD_1_22D1FE63968DB770_OFFSET UNITYSDK_OFFSET(0x183120E0)
#define CLASS_1_233246F0335B3158_METHOD_1_2EA38A17192687F2_OFFSET UNITYSDK_OFFSET(0x18312050)
#define CLASS_1_233246F0335B3158_METHOD_1_3FDF2B060E99B28D_OFFSET UNITYSDK_OFFSET(0x183121A0)
#define CLASS_1_233246F0335B3158_METHOD_1_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x18311D90)
#define CLASS_1_233246F0335B3158_METHOD_1_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x18311CD0)
#define CLASS_1_233246F0335B3158_METHOD_1_8EAB4E2B8081BC5E_OFFSET UNITYSDK_OFFSET(0x18311ED0)
#define CLASS_1_233246F0335B3158_METHOD_1_BC6BFFDCB4FF191F_OFFSET UNITYSDK_OFFSET(0x18311F60)
#define CLASS_1_233246F0335B3158__CCTOR_OFFSET UNITYSDK_OFFSET(0x18312230)

inline static constexpr unsigned int Class_1_233246F0335B3158_TypeDefinitionIndex = 9404;

class Class_1_233246F0335B3158 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233246F0335B3158_TypeDefinitionIndex)->GetStaticField(0x23FD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233246F0335B3158_TypeDefinitionIndex)->GetStaticField(0x23FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_76AAE40741F092B2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_6E1DD35AC740F721_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EAB4E2B8081BC5E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_8EAB4E2B8081BC5E_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC6BFFDCB4FF191F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_BC6BFFDCB4FF191F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2EA38A17192687F2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_2EA38A17192687F2_OFFSET))(a1);
	}

	static ::System::Void Method_1_22D1FE63968DB770(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_22D1FE63968DB770_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3FDF2B060E99B28D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_3FDF2B060E99B28D_OFFSET))(a1);
	}
};

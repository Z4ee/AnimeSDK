#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_233246F0335B3158_METHOD_1_02DFF0ECD51976CD_1_OFFSET UNITYSDK_OFFSET(0x1AC060D0)
#define CLASS_1_233246F0335B3158_METHOD_1_02DFF0ECD51976CD_OFFSET UNITYSDK_OFFSET(0x1AC05F10)
#define CLASS_1_233246F0335B3158_METHOD_1_22D1FE63968DB770_OFFSET UNITYSDK_OFFSET(0x1AC06010)
#define CLASS_1_233246F0335B3158_METHOD_1_695991F20673CFAB_OFFSET UNITYSDK_OFFSET(0x1AC05D20)
#define CLASS_1_233246F0335B3158_METHOD_1_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x1AC05BE0)
#define CLASS_1_233246F0335B3158_METHOD_1_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x1AC05B30)
#define CLASS_1_233246F0335B3158_METHOD_1_FBAC2F70799E5CFB_OFFSET UNITYSDK_OFFSET(0x1AC05DB0)
#define CLASS_1_233246F0335B3158__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC061D0)

inline static constexpr unsigned int Class_1_233246F0335B3158_TypeDefinitionIndex = 33371;

class Class_1_233246F0335B3158 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233246F0335B3158_TypeDefinitionIndex)->GetStaticField(0x478E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233246F0335B3158_TypeDefinitionIndex)->GetStaticField(0x478E8);
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

	static ::System::Void Method_1_695991F20673CFAB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_695991F20673CFAB_OFFSET))(a1);
	}

	static ::System::Void Method_1_FBAC2F70799E5CFB(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_FBAC2F70799E5CFB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_02DFF0ECD51976CD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_02DFF0ECD51976CD_OFFSET))(a1);
	}

	static ::System::Void Method_1_22D1FE63968DB770(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_22D1FE63968DB770_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_02DFF0ECD51976CD_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_233246F0335B3158_METHOD_1_02DFF0ECD51976CD_1_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x1EC32400)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_40AB31CF55027D78_OFFSET UNITYSDK_OFFSET(0x1EC324E0)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9018704AD7878B76_1_OFFSET UNITYSDK_OFFSET(0x1EC32AD0)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9018704AD7878B76_OFFSET UNITYSDK_OFFSET(0x1EC328A0)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9F8CFC116188AAF4_OFFSET UNITYSDK_OFFSET(0x1EC32660)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0x1EC329D0)
#define CLASS_1_FCD2A4E0238CFD4C_METHOD_1_DE16D5274C63D6B5_OFFSET UNITYSDK_OFFSET(0x1EC32710)
#define CLASS_1_FCD2A4E0238CFD4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC32C00)

inline static constexpr unsigned int Class_1_FCD2A4E0238CFD4C_TypeDefinitionIndex = 35171;

class Class_1_FCD2A4E0238CFD4C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_EMHABLFBAEB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCD2A4E0238CFD4C_TypeDefinitionIndex)->GetStaticField(0x4FBF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_DLNBIKBHBDL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCD2A4E0238CFD4C_TypeDefinitionIndex)->GetStaticField(0x4FBF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::Void Method_1_40AB31CF55027D78(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_40AB31CF55027D78_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F8CFC116188AAF4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9F8CFC116188AAF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE16D5274C63D6B5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_DE16D5274C63D6B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9018704AD7878B76(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9018704AD7878B76_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_CF27EDB12528CE39_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9018704AD7878B76_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCD2A4E0238CFD4C_METHOD_1_9018704AD7878B76_1_OFFSET))(a1);
	}
};

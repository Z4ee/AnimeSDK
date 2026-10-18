#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_4CF35B2FF7C3ACBA_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1EBEC8F0)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_1_OFFSET UNITYSDK_OFFSET(0x1EBECF90)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_2_OFFSET UNITYSDK_OFFSET(0x1EBED220)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0x1EBECCD0)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1EBEC6E0)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_1_OFFSET UNITYSDK_OFFSET(0x1EBED3A0)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_2_OFFSET UNITYSDK_OFFSET(0x1EBED490)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_OFFSET UNITYSDK_OFFSET(0x1EBECBE0)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_E40A3C1711FCD249_1_OFFSET UNITYSDK_OFFSET(0x1EBED110)
#define CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_E40A3C1711FCD249_OFFSET UNITYSDK_OFFSET(0x1EBEC910)
#define CLASS_1_4CF35B2FF7C3ACBA_SET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1EBEC900)

inline static constexpr unsigned int Class_1_4CF35B2FF7C3ACBA_TypeDefinitionIndex = 35211;

class Class_1_4CF35B2FF7C3ACBA : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode** StaticGet_NENLPOGCFND()
	{
		return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CF35B2FF7C3ACBA_TypeDefinitionIndex)->GetStaticField(0x47D00);
	}
	static ::System::Boolean* StaticGet__HasValue_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CF35B2FF7C3ACBA_TypeDefinitionIndex)->GetStaticField(0x110A0);
	}
	// static const ::System::String* JMJGEKALCCF; // 0x0
	// static const ::System::String* GLLLDMCOGKN; // 0x0
	// static const ::System::String* LIJMHPGNGBA; // 0x0
	// static const ::System::String* FONKOFMJLON; // 0x0
	// static const ::System::String* KFCAJMHBIKC; // 0x0
	// static const ::System::String* DKLIINHCDBI; // 0x0
	// static const ::System::String* IIMDANPBGNL; // 0x0
	// static const ::System::String* CKIOGKILGPA; // 0x0

	static ::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B3A88D7849969A71_OFFSET))(a1);
	}

	static ::System::Boolean get_HasValue()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_GET_HASVALUE_OFFSET))();
	}

	static ::System::Void set_HasValue(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_SET_HASVALUE_OFFSET))(a1);
	}

	static ::System::String* Method_1_E40A3C1711FCD249()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_E40A3C1711FCD249_OFFSET))();
	}

	static ::System::String* Method_1_B677576B49C9A880()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_OFFSET))();
	}

	static ::System::Int32 Method_1_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_OFFSET))();
	}

	static ::System::Int32 Method_1_4BDDA83A3E9868DC_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_1_OFFSET))();
	}

	static ::System::String* Method_1_E40A3C1711FCD249_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_E40A3C1711FCD249_1_OFFSET))();
	}

	static ::System::Int32 Method_1_4BDDA83A3E9868DC_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_4BDDA83A3E9868DC_2_OFFSET))();
	}

	static ::System::String* Method_1_B677576B49C9A880_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_1_OFFSET))();
	}

	static ::System::String* Method_1_B677576B49C9A880_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CF35B2FF7C3ACBA_METHOD_1_B677576B49C9A880_2_OFFSET))();
	}
};

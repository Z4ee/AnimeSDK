#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_53F03472530FDC1C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C866A0)
#define CLASS_1_53F03472530FDC1C___C__CREATERECOMMENDITEMS_B__2_0_OFFSET UNITYSDK_OFFSET(0x13C866F0)
#define CLASS_1_53F03472530FDC1C___C__CREATERECOMMENDITEMS_B__2_1_OFFSET UNITYSDK_OFFSET(0x13C86790)
#define CLASS_1_53F03472530FDC1C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C866E0)

inline static constexpr unsigned int Class_1_53F03472530FDC1C___c_TypeDefinitionIndex = 61302;

class Class_1_53F03472530FDC1C___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53F03472530FDC1C___c_TypeDefinitionIndex)->GetStaticField(0x66340);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53F03472530FDC1C___c_TypeDefinitionIndex)->GetStaticField(0x66348);
	}
	static ::Class_1_53F03472530FDC1C___c** StaticGet___9()
	{
		return (::Class_1_53F03472530FDC1C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53F03472530FDC1C___c_TypeDefinitionIndex)->GetStaticField(0x66350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateRecommendItems_b__2_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C___C__CREATERECOMMENDITEMS_B__2_0_OFFSET))(this);
	}

	::System::String* _CreateRecommendItems_b__2_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C___C__CREATERECOMMENDITEMS_B__2_1_OFFSET))(this);
	}
};

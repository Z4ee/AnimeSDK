#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
class Class_4_425BBC3CBFD638A0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET UNITYSDK_OFFSET(0xFD890E0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_30F222892C8AA97A_OFFSET UNITYSDK_OFFSET(0xFD88F20)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_564567FB2FFBCC0D_OFFSET UNITYSDK_OFFSET(0xFD88F80)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET UNITYSDK_OFFSET(0xFD89140)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_8BAE13BA2D9987F5_OFFSET UNITYSDK_OFFSET(0xFD887E0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0xFD88EC0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFD89450)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xFD885E0)
#define CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET UNITYSDK_OFFSET(0xFD892B0)

inline static constexpr unsigned int Class_3_0BA90EB3FCC97A68_TypeDefinitionIndex = 74774;

class Class_3_0BA90EB3FCC97A68 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_4_425BBC3CBFD638A0* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_8BAE13BA2D9987F5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_8BAE13BA2D9987F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_564567FB2FFBCC0D(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_564567FB2FFBCC0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_5F521621E1E6CF17(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_30F222892C8AA97A(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_30F222892C8AA97A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_2A163AA3437A6152(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET))(this, a1);
	}
};

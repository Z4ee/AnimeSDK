#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleUpdatePostFileOpItem; }
namespace RPG::Client { class IBundleUpdatePostFileOpItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_3D331EE37B20AAC1_OFFSET UNITYSDK_OFFSET(0x13553390)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_423DC5E63D621D3F_OFFSET UNITYSDK_OFFSET(0x13552DA0)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_65138EA51F724500_OFFSET UNITYSDK_OFFSET(0x13553450)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_C0A8D327571D1A01_OFFSET UNITYSDK_OFFSET(0x13552E50)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x135535E0)
#define CLASS_1_AA0DAEE7CE522CAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13553B20)
#define CLASS_1_AA0DAEE7CE522CAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13553B10)

inline static constexpr unsigned int Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex = 57232;

class Class_1_AA0DAEE7CE522CAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex)->GetStaticField(0x42BB0);
	}
	static ::System::Object** StaticGet_Field_1_1()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex)->GetStaticField(0x42BB8);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_423DC5E63D621D3F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_423DC5E63D621D3F_OFFSET))(a1);
	}

	static ::System::Void Method_1_C0A8D327571D1A01(::RPG::Client::IBundleUpdatePostFileOpItem* a1)
	{
		return ((::System::Void(*)(::RPG::Client::IBundleUpdatePostFileOpItem*))((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_C0A8D327571D1A01_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D331EE37B20AAC1(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_3D331EE37B20AAC1_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::BundleUpdatePostFileOpItem* Method_1_65138EA51F724500(::System::String* a1)
	{
		return ((::RPG::Client::BundleUpdatePostFileOpItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_65138EA51F724500_OFFSET))(a1);
	}

	static ::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_E693A0026D178D8E_OFFSET))();
	}
};

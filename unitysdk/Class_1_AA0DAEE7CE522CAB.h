#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleUpdatePostFileOpItem; }
namespace RPG::Client { class IBundleUpdatePostFileOpItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_3D331EE37B20AAC1_OFFSET UNITYSDK_OFFSET(0x1A6C17B0)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_423DC5E63D621D3F_OFFSET UNITYSDK_OFFSET(0x1A6C1240)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0x1A6C1A00)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_65138EA51F724500_OFFSET UNITYSDK_OFFSET(0x1A6C1870)
#define CLASS_1_AA0DAEE7CE522CAB_METHOD_1_C0A8D327571D1A01_OFFSET UNITYSDK_OFFSET(0x1A6C12F0)
#define CLASS_1_AA0DAEE7CE522CAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6C1FF0)
#define CLASS_1_AA0DAEE7CE522CAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C1FE0)

inline static constexpr unsigned int Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex = 61320;

class Class_1_AA0DAEE7CE522CAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_GOBMLFPGJLH()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex)->GetStaticField(0x63B90);
	}
	static ::System::Object** StaticGet_NEIMDKJOLOB()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0DAEE7CE522CAB_TypeDefinitionIndex)->GetStaticField(0x63B98);
	}
	// static const ::System::String* KLFGNENIAMP; // 0x0
	// static const ::System::String* EEGJEMMEEDI; // 0x0
	// static const ::System::String* GOMMGNEGKNE; // 0x0

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

	static ::System::Void Method_1_596FD8239C601ED8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA0DAEE7CE522CAB_METHOD_1_596FD8239C601ED8_OFFSET))();
	}
};

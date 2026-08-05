#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"

class Class_2_36F876BE02177ED7;
class Class_2_785FDC7D0DA58280;
namespace Foundation { class IRenderElement; }
namespace Foundation { class RenderLayerBucket; }
namespace Foundation { class RenderLayerConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_71CD47B574B8580E_METHOD_2_003BAE20F0E7AB2C_OFFSET UNITYSDK_OFFSET(0x1F6F7280)
#define CLASS_2_71CD47B574B8580E_METHOD_2_01559BC380116EB2_OFFSET UNITYSDK_OFFSET(0x1F6F7600)
#define CLASS_2_71CD47B574B8580E_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1F6F6ED0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1F6F7A40)
#define CLASS_2_71CD47B574B8580E_METHOD_2_2D2B08012AAFC72E_OFFSET UNITYSDK_OFFSET(0x1F6F7520)
#define CLASS_2_71CD47B574B8580E_METHOD_2_509E72AF2E5AFE95_OFFSET UNITYSDK_OFFSET(0x1F6F71E0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x1F6F65E0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_949892D87FB6B6EE_OFFSET UNITYSDK_OFFSET(0x1F6F7790)
#define CLASS_2_71CD47B574B8580E_METHOD_2_A30A1DCAF042E389_OFFSET UNITYSDK_OFFSET(0x1F6F7050)
#define CLASS_2_71CD47B574B8580E_METHOD_2_ABE028A4CD8823F1_OFFSET UNITYSDK_OFFSET(0x1F6F6550)
#define CLASS_2_71CD47B574B8580E_METHOD_2_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x1F6F7B00)
#define CLASS_2_71CD47B574B8580E_METHOD_2_CD0B5A79C9AFECE7_OFFSET UNITYSDK_OFFSET(0x1F6F78B0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_F49ECADC56FA98D0_OFFSET UNITYSDK_OFFSET(0x1F6F7BB0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1F6F79F0)
#define CLASS_2_71CD47B574B8580E_METHOD_2_F5A5858ACB836225_OFFSET UNITYSDK_OFFSET(0x1F6F7660)
#define CLASS_2_71CD47B574B8580E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F7040)
#define CLASS_2_71CD47B574B8580E__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F6F60)

inline static constexpr unsigned int Class_2_71CD47B574B8580E_TypeDefinitionIndex = 93237;

class Class_2_71CD47B574B8580E : public ::Class_1_321489CFFF7B18E7
{
public:
	static ::System::Int32* StaticGet_Field_2_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_71CD47B574B8580E_TypeDefinitionIndex)->GetStaticField(0x13180);
	}
	// static const ::System::Int32 Field_2_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_0 = 0x40; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x80; // 0x0
	// static const ::System::Int32 Field_2_6 = 0xC0; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x100; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x180; // 0x0
	// static const ::System::Int32 Field_2_11 = 0x1C0; // 0x0
	// static const ::System::Int32 Field_2_10 = 0x9C0; // 0x0
	// static const ::System::Int32 Field_2_9 = 0xBC0; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x13C0; // 0x0
	// static const ::System::Int32 Field_2_15 = 0x1400; // 0x0
	// static const ::System::Int32 Field_2_14 = 0x1440; // 0x0
	// static const ::System::Int32 Field_2_13 = 0x1480; // 0x0
	// static const ::System::Int32 Field_2_12 = 0x1880; // 0x0
	// static const ::System::Int32 Field_2_19 = 0x1C7F; // 0x0
	// static const ::System::Int32 Field_2_18 = 0x40; // 0x0
	// static const ::System::Int32 Field_2_17 = 0x80; // 0x0
	// static const ::System::Int32 Field_2_16 = 0x400; // 0x0
	// static const ::System::Int32 Field_2_23 = 0x400; // 0x0
	// static const ::System::Int32 Field_2_22 = 0x200; // 0x0
	// static const ::System::Int32 Field_2_21 = 0x800; // 0x0
	// static const ::System::Int32 Field_2_20 = 0x800; // 0x0
	::System::Collections::Generic::List_1<::Foundation::RenderLayerBucket*>* Field_2_25; // 0x18
	::Class_2_36F876BE02177ED7* Field_2_27; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::RenderLayerBucket*>* Field_2_26; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_ABE028A4CD8823F1(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_ABE028A4CD8823F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_A30A1DCAF042E389(::Foundation::IRenderElement* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_A30A1DCAF042E389_OFFSET))(this, a1);
	}

	::System::Void Method_2_509E72AF2E5AFE95(::Il2CppArray<::Foundation::RenderLayerConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::RenderLayerConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_509E72AF2E5AFE95_OFFSET))(this, a1);
	}

	::Foundation::RenderLayerBucket* Method_2_2D2B08012AAFC72E(::System::Int32 a1)
	{
		return ((::Foundation::RenderLayerBucket*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_2D2B08012AAFC72E_OFFSET))(this, a1);
	}

	::System::Void Method_2_01559BC380116EB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_01559BC380116EB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_949892D87FB6B6EE(::Foundation::IRenderElement* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_949892D87FB6B6EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5A5858ACB836225()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_F5A5858ACB836225_OFFSET))(this);
	}

	static ::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_F5599B7DA8E7E53C_OFFSET))();
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_2_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Void Method_2_003BAE20F0E7AB2C(::Foundation::RenderLayerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::RenderLayerConfig*))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_003BAE20F0E7AB2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Foundation::RenderLayerBucket*>* Method_2_F49ECADC56FA98D0()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::RenderLayerBucket*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_F49ECADC56FA98D0_OFFSET))(this);
	}

	::Foundation::RenderLayerBucket* Method_2_CD0B5A79C9AFECE7(::System::Int32 a1)
	{
		return ((::Foundation::RenderLayerBucket*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71CD47B574B8580E_METHOD_2_CD0B5A79C9AFECE7_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/Struct_2_710A4BB1F3B3A759.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_64;
class Class_0_16E4307DCC419505_74;
class Class_1_48570DED401BD199;
class Class_1_AB3731E66128D034;
class Class_1_CEF5F27F657CD849;
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AssetBundle; }

#define CLASS_1_5ED40620A04CB2FC_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1651D430)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_115E2B88594408C0_OFFSET UNITYSDK_OFFSET(0x1651F230)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_184BDEF0F95C1AAB_OFFSET UNITYSDK_OFFSET(0x1651E7C0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_26E128BBDD72725B_OFFSET UNITYSDK_OFFSET(0x1651EC60)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_292208E2A0CBEAB7_OFFSET UNITYSDK_OFFSET(0x1651E070)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x1651D610)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1651FB80)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_3E3AAE01ABAAB591_OFFSET UNITYSDK_OFFSET(0x16523DC0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1651D780)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_560F1542B7704E76_OFFSET UNITYSDK_OFFSET(0x1651DA80)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_6F329A1ED89D0535_OFFSET UNITYSDK_OFFSET(0x16522BA0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_7ACD11C46C403549_OFFSET UNITYSDK_OFFSET(0x1651DC20)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_8A0B0DB20E268B9D_OFFSET UNITYSDK_OFFSET(0x16523100)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_8F533C86D40ECAA3_OFFSET UNITYSDK_OFFSET(0x16523820)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_9FB922ABD7A32564_OFFSET UNITYSDK_OFFSET(0x16525070)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_AC48535D6C9B2971_OFFSET UNITYSDK_OFFSET(0x1651D990)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_1_OFFSET UNITYSDK_OFFSET(0x1651F800)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_OFFSET UNITYSDK_OFFSET(0x1651F3A0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0x1651F0C0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16525670)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_D0144775567A0E5A_OFFSET UNITYSDK_OFFSET(0x16522370)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_DFB7114DB1D01477_OFFSET UNITYSDK_OFFSET(0x1651E2D0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_E623175E85EF683D_OFFSET UNITYSDK_OFFSET(0x1651FBC0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_E7E36095B95B0212_OFFSET UNITYSDK_OFFSET(0x16520330)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_EAA1F63AB5C8F656_OFFSET UNITYSDK_OFFSET(0x165208A0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1651D420)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1651D450)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F68AA1B6F38F06ED_OFFSET UNITYSDK_OFFSET(0x1651D7D0)
#define CLASS_1_5ED40620A04CB2FC_SET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1651D440)
#define CLASS_1_5ED40620A04CB2FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x165256C0)
#define CLASS_1_5ED40620A04CB2FC__CTOR_OFFSET UNITYSDK_OFFSET(0x165256B0)

inline static constexpr unsigned int Class_1_5ED40620A04CB2FC_TypeDefinitionIndex = 32145;

class Class_1_5ED40620A04CB2FC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5ED40620A04CB2FC_TypeDefinitionIndex)->GetStaticField(0x45A0);
	}
	::Class_0_16E4307DCC419505_74* Field_1_2; // 0x10
	::Class_1_CEF5F27F657CD849* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_64* _BundleIndexInfo_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_64* get_BundleIndexInfo()
	{
		return ((::Class_0_16E4307DCC419505_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_GET_BUNDLEINDEXINFO_OFFSET))(this);
	}

	::System::Void set_BundleIndexInfo(::Class_0_16E4307DCC419505_64* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_64*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_SET_BUNDLEINDEXINFO_OFFSET))(this, value);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F68AA1B6F38F06ED(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_F68AA1B6F38F06ED_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_AC48535D6C9B2971(::System::String* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_AC48535D6C9B2971_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_560F1542B7704E76(::System::UInt64 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_560F1542B7704E76_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_7ACD11C46C403549(::System::String* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_7ACD11C46C403549_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_292208E2A0CBEAB7(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_292208E2A0CBEAB7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DFB7114DB1D01477(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_DFB7114DB1D01477_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_184BDEF0F95C1AAB(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_184BDEF0F95C1AAB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_26E128BBDD72725B(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt64>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_26E128BBDD72725B_OFFSET))(this, a1, a2);
	}

	::Class_1_48570DED401BD199* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_48570DED401BD199*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::Class_1_48570DED401BD199* Method_1_115E2B88594408C0(::System::UInt64 a1)
	{
		return ((::Class_1_48570DED401BD199*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_115E2B88594408C0_OFFSET))(this, a1);
	}

	::Class_1_48570DED401BD199* Method_1_C6153B4E92609AD0(::System::String* a1, ::Struct_2_710A4BB1F3B3A759& a2)
	{
		return ((::Class_1_48570DED401BD199*(*)(::PVOID, ::System::String*, ::Struct_2_710A4BB1F3B3A759&))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_OFFSET))(this, a1, a2);
	}

	::Class_1_48570DED401BD199* Method_1_C6153B4E92609AD0_1(::System::String* a1, ::Struct_2_710A4BB1F3B3A759& a2)
	{
		return ((::Class_1_48570DED401BD199*(*)(::PVOID, ::System::String*, ::Struct_2_710A4BB1F3B3A759&))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E623175E85EF683D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_E623175E85EF683D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7E36095B95B0212(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_E7E36095B95B0212_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EAA1F63AB5C8F656(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_EAA1F63AB5C8F656_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0144775567A0E5A(::System::String* a1, ::Class_1_AB3731E66128D034* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_AB3731E66128D034*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_D0144775567A0E5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F329A1ED89D0535(::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_6F329A1ED89D0535_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F533C86D40ECAA3(::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_8F533C86D40ECAA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E3AAE01ABAAB591(::RPG::Client::AssetSystem::AssetLoader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_3E3AAE01ABAAB591_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FB922ABD7A32564(::RPG::Client::AssetSystem::AssetLoader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_9FB922ABD7A32564_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8A0B0DB20E268B9D(::System::Int32 a1, ::System::Byte* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_8A0B0DB20E268B9D_OFFSET))(this, a1, a2);
	}
};

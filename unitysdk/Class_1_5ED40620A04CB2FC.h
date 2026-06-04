#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/Struct_2_710A4BB1F3B3A759.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_63;
class Class_0_16E4307DCC419505_73;
class Class_1_48570DED401BD199;
class Class_1_B7E288ED7136445D;
class Class_1_CEF5F27F657CD849;
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AssetBundle; }

#define CLASS_1_5ED40620A04CB2FC_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x189062D0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_0477E72481FB243A_OFFSET UNITYSDK_OFFSET(0x18906E00)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_115E2B88594408C0_OFFSET UNITYSDK_OFFSET(0x18907ED0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_1DE0E3EB651E997E_OFFSET UNITYSDK_OFFSET(0x18906A00)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x189063E0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18908430)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_3E3AAE01ABAAB591_OFFSET UNITYSDK_OFFSET(0x1890B670)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18906550)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_560F1542B7704E76_OFFSET UNITYSDK_OFFSET(0x18906860)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_696E2E838D5C327E_OFFSET UNITYSDK_OFFSET(0x189073A0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_7F7793441B14EE76_OFFSET UNITYSDK_OFFSET(0x1890A410)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_88F52BF9F51486DA_OFFSET UNITYSDK_OFFSET(0x1890AA70)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_895F83C62E229EB0_OFFSET UNITYSDK_OFFSET(0x18906BB0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_8A0B0DB20E268B9D_OFFSET UNITYSDK_OFFSET(0x1890AFD0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_9FB922ABD7A32564_OFFSET UNITYSDK_OFFSET(0x1890C730)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_AC3933687CB9D219_OFFSET UNITYSDK_OFFSET(0x1890B140)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_AC48535D6C9B2971_OFFSET UNITYSDK_OFFSET(0x18906770)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_1_OFFSET UNITYSDK_OFFSET(0x18908240)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C6153B4E92609AD0_OFFSET UNITYSDK_OFFSET(0x18908040)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0x18907D60)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1890CCE0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_E623175E85EF683D_OFFSET UNITYSDK_OFFSET(0x18908470)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_E7E36095B95B0212_OFFSET UNITYSDK_OFFSET(0x18908940)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_EAA1F63AB5C8F656_OFFSET UNITYSDK_OFFSET(0x18908E70)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x189062C0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x189062F0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F68AA1B6F38F06ED_OFFSET UNITYSDK_OFFSET(0x189065A0)
#define CLASS_1_5ED40620A04CB2FC_METHOD_1_F6BB8706F949CF80_OFFSET UNITYSDK_OFFSET(0x189078C0)
#define CLASS_1_5ED40620A04CB2FC_SET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x189062E0)
#define CLASS_1_5ED40620A04CB2FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1890CD30)
#define CLASS_1_5ED40620A04CB2FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1890CD20)

inline static constexpr unsigned int Class_1_5ED40620A04CB2FC_TypeDefinitionIndex = 38602;

class Class_1_5ED40620A04CB2FC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5ED40620A04CB2FC_TypeDefinitionIndex)->GetStaticField(0x237D0);
	}
	::Class_0_16E4307DCC419505_63* _BundleIndexInfo_k__BackingField; // 0x10
	::Class_1_CEF5F27F657CD849* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_73* Field_1_3; // 0x20

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

	::Class_0_16E4307DCC419505_63* get_BundleIndexInfo()
	{
		return ((::Class_0_16E4307DCC419505_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_GET_BUNDLEINDEXINFO_OFFSET))(this);
	}

	::System::Void set_BundleIndexInfo(::Class_0_16E4307DCC419505_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_63*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_SET_BUNDLEINDEXINFO_OFFSET))(this, a1);
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

	::System::UInt64 Method_1_1DE0E3EB651E997E(::System::String* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_1DE0E3EB651E997E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_895F83C62E229EB0(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_895F83C62E229EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0477E72481FB243A(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_0477E72481FB243A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_696E2E838D5C327E(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_696E2E838D5C327E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F6BB8706F949CF80(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt64>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_F6BB8706F949CF80_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_7F7793441B14EE76(::System::String* a1, ::Class_1_B7E288ED7136445D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B7E288ED7136445D*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_7F7793441B14EE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88F52BF9F51486DA(::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_88F52BF9F51486DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC3933687CB9D219(::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_48570DED401BD199*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED40620A04CB2FC_METHOD_1_AC3933687CB9D219_OFFSET))(this, a1);
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

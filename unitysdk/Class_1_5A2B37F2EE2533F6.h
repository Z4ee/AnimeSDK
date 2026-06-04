#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8B1384503A353CC0;
class Class_1_D497EBDFD5D2C087;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_034FF5461ED558FD_OFFSET UNITYSDK_OFFSET(0xA8D0EA0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_1557D531D91956C1_OFFSET UNITYSDK_OFFSET(0xA8D1090)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_1A757777365008D7_OFFSET UNITYSDK_OFFSET(0xA8CFAD0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_28492446FF58BF51_OFFSET UNITYSDK_OFFSET(0xA8D1220)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_323E84F36CA51DDD_OFFSET UNITYSDK_OFFSET(0xA8D0C30)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_3435BD25A813D852_OFFSET UNITYSDK_OFFSET(0xA8CF7B0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_4308DFE6E1E04C6A_OFFSET UNITYSDK_OFFSET(0xA8CF100)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_4AE42BC4645CCD7A_OFFSET UNITYSDK_OFFSET(0xA8CF4B0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_634B3EB8F6F3B99D_OFFSET UNITYSDK_OFFSET(0xA8CF070)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_6ACBB400CFBA57C4_OFFSET UNITYSDK_OFFSET(0xA8CF300)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xA8D12F0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_7EBAD56EAEE06994_OFFSET UNITYSDK_OFFSET(0xA8D0790)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_912D0C8A54C605AA_OFFSET UNITYSDK_OFFSET(0xA8CE2F0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_930994CCF13E87D6_OFFSET UNITYSDK_OFFSET(0xA8D1000)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_98108FF22E2125DF_OFFSET UNITYSDK_OFFSET(0xA8CE6C0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_ACCC9459ED571010_OFFSET UNITYSDK_OFFSET(0xA8CD8F0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_B43C848B078B3C34_1_OFFSET UNITYSDK_OFFSET(0xA8CD960)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xA8CD4E0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_C9F5477B68F92E19_OFFSET UNITYSDK_OFFSET(0xA8CE430)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_D242C5E37BC4FE18_OFFSET UNITYSDK_OFFSET(0xA8D11C0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_D73BACDD9BA1402B_OFFSET UNITYSDK_OFFSET(0xA8CFC70)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_DD0E4FF2872EFB46_OFFSET UNITYSDK_OFFSET(0xA8CE0A0)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_E198325B5A5C8095_OFFSET UNITYSDK_OFFSET(0xA8CE850)
#define CLASS_1_5A2B37F2EE2533F6_METHOD_1_E5F7EBAA852C4EF8_OFFSET UNITYSDK_OFFSET(0xA8CE280)
#define CLASS_1_5A2B37F2EE2533F6__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8D17E0)
#define CLASS_1_5A2B37F2EE2533F6__CTOR_OFFSET UNITYSDK_OFFSET(0xA8CC820)

inline static constexpr unsigned int Class_1_5A2B37F2EE2533F6_TypeDefinitionIndex = 68865;

class Class_1_5A2B37F2EE2533F6 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A2B37F2EE2533F6_TypeDefinitionIndex)->GetStaticField(0xA360);
	}
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Tuple_3<::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::Int64>*>*>*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_1_8B1384503A353CC0*>*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_5; // 0x30
	::Class_1_D497EBDFD5D2C087* Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Int32 Field_1_10; // 0x4C

	::System::Void _ctor(::Class_1_D497EBDFD5D2C087* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D497EBDFD5D2C087*))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_ACCC9459ED571010(::System::Single a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_ACCC9459ED571010_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_B43C848B078B3C34_1_OFFSET))(this);
	}

	::System::Boolean Method_1_DD0E4FF2872EFB46(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_DD0E4FF2872EFB46_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_912D0C8A54C605AA(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_912D0C8A54C605AA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C9F5477B68F92E19(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_C9F5477B68F92E19_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_E198325B5A5C8095(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_E198325B5A5C8095_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_634B3EB8F6F3B99D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8B1384503A353CC0* a2, ::System::Int64 a3, ::System::Int64 a4)
	{
		return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8B1384503A353CC0*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_634B3EB8F6F3B99D_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_6ACBB400CFBA57C4(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_6ACBB400CFBA57C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3435BD25A813D852(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_3435BD25A813D852_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D73BACDD9BA1402B(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::System::Int32 a4, ::System::Int64 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_D73BACDD9BA1402B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int64 Method_1_4308DFE6E1E04C6A(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Int64(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_4308DFE6E1E04C6A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4AE42BC4645CCD7A(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_4AE42BC4645CCD7A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1A757777365008D7(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_1A757777365008D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EBAD56EAEE06994(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_7EBAD56EAEE06994_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_323E84F36CA51DDD(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_323E84F36CA51DDD_OFFSET))(this, a1, a2);
	}

	::Class_1_8B1384503A353CC0* Method_1_034FF5461ED558FD(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_1_8B1384503A353CC0*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_034FF5461ED558FD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_930994CCF13E87D6(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::OfflineCullingIndex*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_930994CCF13E87D6_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_1557D531D91956C1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_1557D531D91956C1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_D242C5E37BC4FE18(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_D242C5E37BC4FE18_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_98108FF22E2125DF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_98108FF22E2125DF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_E5F7EBAA852C4EF8(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_E5F7EBAA852C4EF8_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_28492446FF58BF51(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_28492446FF58BF51_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A2B37F2EE2533F6_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}
};

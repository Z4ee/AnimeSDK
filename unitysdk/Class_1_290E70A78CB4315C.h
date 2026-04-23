#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F116EE492D6A063;
class Class_1_ED67E1BB7AEB90D8;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_290E70A78CB4315C_METHOD_1_0481BC72B9169582_OFFSET UNITYSDK_OFFSET(0x117EAFE0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_0B5C173129B07374_OFFSET UNITYSDK_OFFSET(0x117EB290)
#define CLASS_1_290E70A78CB4315C_METHOD_1_1557D531D91956C1_OFFSET UNITYSDK_OFFSET(0x117ECB20)
#define CLASS_1_290E70A78CB4315C_METHOD_1_1D700404F98894A6_OFFSET UNITYSDK_OFFSET(0x117EC6F0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_28492446FF58BF51_OFFSET UNITYSDK_OFFSET(0x117ECCB0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_3FDF8E930EFB34B1_OFFSET UNITYSDK_OFFSET(0x117EA100)
#define CLASS_1_290E70A78CB4315C_METHOD_1_4308DFE6E1E04C6A_OFFSET UNITYSDK_OFFSET(0x117EB090)
#define CLASS_1_290E70A78CB4315C_METHOD_1_50BFEED250A90262_OFFSET UNITYSDK_OFFSET(0x117EC900)
#define CLASS_1_290E70A78CB4315C_METHOD_1_609983B6F817FF40_OFFSET UNITYSDK_OFFSET(0x117EA370)
#define CLASS_1_290E70A78CB4315C_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x117E9A20)
#define CLASS_1_290E70A78CB4315C_METHOD_1_6ACBB400CFBA57C4_OFFSET UNITYSDK_OFFSET(0x117DE060)
#define CLASS_1_290E70A78CB4315C_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x117ECD80)
#define CLASS_1_290E70A78CB4315C_METHOD_1_930994CCF13E87D6_OFFSET UNITYSDK_OFFSET(0x117ECA90)
#define CLASS_1_290E70A78CB4315C_METHOD_1_98108FF22E2125DF_OFFSET UNITYSDK_OFFSET(0x117EA740)
#define CLASS_1_290E70A78CB4315C_METHOD_1_A678EC71C986AC1D_OFFSET UNITYSDK_OFFSET(0x117EB750)
#define CLASS_1_290E70A78CB4315C_METHOD_1_ACCC9459ED571010_OFFSET UNITYSDK_OFFSET(0x117E99B0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_B9FBC9A2A63447C8_OFFSET UNITYSDK_OFFSET(0x117EC2B0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_CE37F0CE174DFB2B_OFFSET UNITYSDK_OFFSET(0x117EA4A0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_D242C5E37BC4FE18_OFFSET UNITYSDK_OFFSET(0x117ECC50)
#define CLASS_1_290E70A78CB4315C_METHOD_1_D73BACDD9BA1402B_OFFSET UNITYSDK_OFFSET(0x117EB830)
#define CLASS_1_290E70A78CB4315C_METHOD_1_DF3B25BD0444E440_OFFSET UNITYSDK_OFFSET(0x117EB4B0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_E5F7EBAA852C4EF8_OFFSET UNITYSDK_OFFSET(0x117EA300)
#define CLASS_1_290E70A78CB4315C_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x117E95B0)
#define CLASS_1_290E70A78CB4315C_METHOD_1_F26E56E674FD938E_OFFSET UNITYSDK_OFFSET(0x117EA8D0)
#define CLASS_1_290E70A78CB4315C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117ED270)
#define CLASS_1_290E70A78CB4315C__CTOR_OFFSET UNITYSDK_OFFSET(0x117E8E00)

inline static constexpr unsigned int Class_1_290E70A78CB4315C_TypeDefinitionIndex = 67907;

class Class_1_290E70A78CB4315C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_290E70A78CB4315C_TypeDefinitionIndex)->GetStaticField(0x8CE0);
	}
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Tuple_3<::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::Int64>*>*>*>*>* Field_1_6; // 0x20
	::Class_1_5F116EE492D6A063* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_1_ED67E1BB7AEB90D8*>*>* Field_1_4; // 0x38
	::System::Boolean Field_1_1; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Int32 Field_1_10; // 0x48
	::System::Single Field_1_2; // 0x4C

	::System::Void _ctor(::Class_1_5F116EE492D6A063* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F116EE492D6A063*))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_ACCC9459ED571010(::System::Single a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_ACCC9459ED571010_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Boolean Method_1_3FDF8E930EFB34B1(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_3FDF8E930EFB34B1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_609983B6F817FF40(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_609983B6F817FF40_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_CE37F0CE174DFB2B(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_CE37F0CE174DFB2B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F26E56E674FD938E(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_F26E56E674FD938E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_0481BC72B9169582(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_ED67E1BB7AEB90D8* a2, ::System::Int64 a3, ::System::Int64 a4)
	{
		return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_ED67E1BB7AEB90D8*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_0481BC72B9169582_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_6ACBB400CFBA57C4(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_6ACBB400CFBA57C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_DF3B25BD0444E440(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_DF3B25BD0444E440_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D73BACDD9BA1402B(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::System::Int32 a4, ::System::Int64 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_D73BACDD9BA1402B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int64 Method_1_4308DFE6E1E04C6A(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Int64(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_4308DFE6E1E04C6A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0B5C173129B07374(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_0B5C173129B07374_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A678EC71C986AC1D(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_A678EC71C986AC1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9FBC9A2A63447C8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_B9FBC9A2A63447C8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D700404F98894A6(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_1D700404F98894A6_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_ED67E1BB7AEB90D8* Method_1_50BFEED250A90262(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_1_ED67E1BB7AEB90D8*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_50BFEED250A90262_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_930994CCF13E87D6(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::OfflineCullingIndex*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_930994CCF13E87D6_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_1557D531D91956C1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_1557D531D91956C1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_D242C5E37BC4FE18(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_D242C5E37BC4FE18_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_98108FF22E2125DF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_98108FF22E2125DF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_E5F7EBAA852C4EF8(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_E5F7EBAA852C4EF8_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_28492446FF58BF51(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_28492446FF58BF51_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290E70A78CB4315C_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}
};

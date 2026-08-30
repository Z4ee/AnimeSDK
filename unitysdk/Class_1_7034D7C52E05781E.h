#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7034D7C52E05781E_OnlyUseCameraPosToTickLodReason.h"
#include "unitysdk/Struct_2_639D4030F98AB624.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27D9C028BDC40E5D;
class Class_1_414BCDCDAD47B487;
class Class_1_D2B8D50DD9833CFC;
class Class_2_961AF441B82A290C;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class TickLodConfig; }
namespace RPG::GameCore { class TickLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7034D7C52E05781E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5B3770)
#define CLASS_1_7034D7C52E05781E_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xE5B5150)
#define CLASS_1_7034D7C52E05781E_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xE5B34C0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0xE5B4190)
#define CLASS_1_7034D7C52E05781E_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xE5B4480)
#define CLASS_1_7034D7C52E05781E_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0xE5B4090)
#define CLASS_1_7034D7C52E05781E_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE5B3E30)
#define CLASS_1_7034D7C52E05781E_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xE5B4AE0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_5015A42C2D679D72_OFFSET UNITYSDK_OFFSET(0xE5B2D00)
#define CLASS_1_7034D7C52E05781E_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xE5B3450)
#define CLASS_1_7034D7C52E05781E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xE5B3A50)
#define CLASS_1_7034D7C52E05781E_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xE5B3010)
#define CLASS_1_7034D7C52E05781E_METHOD_1_8F0B0B3BBBDAAD6F_OFFSET UNITYSDK_OFFSET(0xE5B4F60)
#define CLASS_1_7034D7C52E05781E_METHOD_1_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0xE5B4380)
#define CLASS_1_7034D7C52E05781E_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xE5B3C30)
#define CLASS_1_7034D7C52E05781E_METHOD_1_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0xE5B3B00)
#define CLASS_1_7034D7C52E05781E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xE5B2CD0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_F296D77B5A1D1EA1_OFFSET UNITYSDK_OFFSET(0xE5B4B90)
#define CLASS_1_7034D7C52E05781E_METHOD_1_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xE5B44D0)
#define CLASS_1_7034D7C52E05781E_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xE5B5160)
#define CLASS_1_7034D7C52E05781E__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5B5170)
#define CLASS_1_7034D7C52E05781E__CTOR_OFFSET UNITYSDK_OFFSET(0xE5B2D80)

inline static constexpr unsigned int Class_1_7034D7C52E05781E_TypeDefinitionIndex = 57942;

class Class_1_7034D7C52E05781E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_AKFFPNIDIMF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13570);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_ACGJKBIKNMN()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13578);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_BHHLPBCJLBH()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13580);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_BAHJOMPJPND()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13588);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_DHENEGNOJBE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13590);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OBPPGKLKLPB()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x13598);
	}
	static ::System::UInt32* StaticGet_EIEICCFEMBE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x7DB0);
	}
	static ::System::Boolean* StaticGet_BPFGBEHONML()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x7DB4);
	}
	// static const ::System::UInt32 KOHPHHHOCDK = 0x1; // 0x0
	// static const ::System::UInt32 EDECNPIJNED = 0x2; // 0x0
	// static const ::System::UInt32 MLCFELCKDEN = 0x4; // 0x0
	// static const ::System::UInt32 PDMANDMHGFL = 0x8; // 0x0
	// static const ::System::UInt32 HDENIAOLNCJ = 0x20; // 0x0
	// static const ::System::Int32 EBONJKEDGMB = 0x64; // 0x0
	// static const ::System::Single HIMAGKLPMOD; // 0x0
	// static const ::System::String* ALHJGBFOKAN; // 0x0
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* JJOFPLMDCMK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* MALPDHPDPDB; // 0x18
	::Class_1_D2B8D50DD9833CFC* _BoundsOccluderForJob_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* HPEHFHOBIGG; // 0x28
	::RPG::GameCore::TickLodConfig* KNFFAILGFIF; // 0x30
	::Class_2_961AF441B82A290C* HKPLKLDIFCM; // 0x38
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* LEJLIIGIMEC; // 0x40
	::System::Boolean DIECPKPBDEN; // 0x48
	::System::Boolean DKDLKJHNHNC; // 0x49
	::System::Boolean CPKCLCNMGHP; // 0x4A
	::Struct_2_639D4030F98AB624 LHANPGLMHMD; // 0x50
	::System::Nullable_1<::Unity::Jobs::JobHandle> CDBGDBNJOPF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_5015A42C2D679D72(::System::Boolean a1, ::Class_1_7034D7C52E05781E_OnlyUseCameraPosToTickLodReason a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Class_1_7034D7C52E05781E_OnlyUseCameraPosToTickLodReason))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_5015A42C2D679D72_OFFSET))(a1, a2);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E041300CFBBD9160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_E041300CFBBD9160_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A38E69140BEF946(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::RPG::GameCore::TickLodDetail* Method_1_F296D77B5A1D1EA1(::System::String* a1, ::System::Single a2)
	{
		return ((::RPG::GameCore::TickLodDetail*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_F296D77B5A1D1EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F0B0B3BBBDAAD6F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_8F0B0B3BBBDAAD6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_8BC85DADEC2C3862_OFFSET))(this);
	}

	::Class_1_D2B8D50DD9833CFC* get_BoundsOccluderForJob()
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
	}

	::System::Void set_BoundsOccluderForJob(::Class_1_D2B8D50DD9833CFC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B8D50DD9833CFC*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, a1);
	}
};

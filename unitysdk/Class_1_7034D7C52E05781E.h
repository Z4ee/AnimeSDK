#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7034D7C52E05781E_OnlyUseCameraPosToTickLodReason.h"
#include "unitysdk/Struct_2_639D4030F98AB624.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27D9C028BDC40E5D;
class Class_1_494BD190B553B399;
class Class_1_D2B8D50DD9833CFC;
class Class_2_81A4CCAF8860A4C5;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class TickLodConfig; }
namespace RPG::GameCore { class TickLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7034D7C52E05781E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB49B400)
#define CLASS_1_7034D7C52E05781E_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xB49C960)
#define CLASS_1_7034D7C52E05781E_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB49C4D0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xB49B1A0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB49AE10)
#define CLASS_1_7034D7C52E05781E_METHOD_1_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0xB49BCB0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB49B9C0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB49BE90)
#define CLASS_1_7034D7C52E05781E_METHOD_1_5015A42C2D679D72_OFFSET UNITYSDK_OFFSET(0xB49AB00)
#define CLASS_1_7034D7C52E05781E_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xB49B130)
#define CLASS_1_7034D7C52E05781E_METHOD_1_675E72063D0468DD_OFFSET UNITYSDK_OFFSET(0xB49BC20)
#define CLASS_1_7034D7C52E05781E_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB49B840)
#define CLASS_1_7034D7C52E05781E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB49B680)
#define CLASS_1_7034D7C52E05781E_METHOD_1_BCA70528F851BD98_OFFSET UNITYSDK_OFFSET(0xB49C560)
#define CLASS_1_7034D7C52E05781E_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB49B730)
#define CLASS_1_7034D7C52E05781E_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xB49BFC0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_D6C70BB30FD1FF7C_OFFSET UNITYSDK_OFFSET(0xB49C820)
#define CLASS_1_7034D7C52E05781E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB49AAD0)
#define CLASS_1_7034D7C52E05781E_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB49BF70)
#define CLASS_1_7034D7C52E05781E_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xB49C970)
#define CLASS_1_7034D7C52E05781E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB49C980)
#define CLASS_1_7034D7C52E05781E__CTOR_OFFSET UNITYSDK_OFFSET(0xB49AB80)

inline static constexpr unsigned int Class_1_7034D7C52E05781E_TypeDefinitionIndex = 53286;

class Class_1_7034D7C52E05781E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BA0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_25()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BA8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_24()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BB0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_27()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BB8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_26()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BC0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_23()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x68BC8);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x11600);
	}
	static ::System::UInt32* StaticGet_Field_1_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7034D7C52E05781E_TypeDefinitionIndex)->GetStaticField(0x11604);
	}
	// static const ::System::UInt32 Field_1_0 = 0x1; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x2; // 0x0
	// static const ::System::UInt32 Field_1_2 = 0x4; // 0x0
	// static const ::System::UInt32 Field_1_3 = 0x8; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x64; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_17; // 0x10
	::RPG::GameCore::TickLodConfig* Field_1_13; // 0x18
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_16; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_494BD190B553B399*>* Field_1_14; // 0x28
	::Class_2_81A4CCAF8860A4C5* Field_1_22; // 0x30
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_18; // 0x38
	::Class_1_D2B8D50DD9833CFC* _BoundsOccluderForJob_k__BackingField; // 0x40
	::System::Nullable_1<::Unity::Jobs::JobHandle> Field_1_19; // 0x48
	::Struct_2_639D4030F98AB624 Field_1_20; // 0x60
	::System::Boolean Field_1_9; // 0x70
	::System::Boolean Field_1_11; // 0x71
	::System::Boolean Field_1_21; // 0x72

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

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_675E72063D0468DD(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_675E72063D0468DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_34D5F4DBE622AF88(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::GameCore::TickLodDetail* Method_1_BCA70528F851BD98(::System::String* a1, ::System::Single a2)
	{
		return ((::RPG::GameCore::TickLodDetail*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_BCA70528F851BD98_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6C70BB30FD1FF7C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_D6C70BB30FD1FF7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::Class_1_D2B8D50DD9833CFC* get_BoundsOccluderForJob()
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
	}

	::System::Void set_BoundsOccluderForJob(::Class_1_D2B8D50DD9833CFC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B8D50DD9833CFC*))((::PBYTE)hIl2Cpp + CLASS_1_7034D7C52E05781E_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, value);
	}
};

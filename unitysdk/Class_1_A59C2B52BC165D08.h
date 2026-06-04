#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_1_A59C2B52BC165D08_Class_1_7769D02C55A6236D;
class Class_1_A59C2B52BC165D08_Class_1_FC84A6CEE639079F;
class Class_1_A59C2B52BC165D08_Class_1_FC84A6CEE639079F_1;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_A59C2B52BC165D08_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B52C80)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0x13B53AA0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x13B534D0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET UNITYSDK_OFFSET(0x13B52AE0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0x13B52930)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_23CD3925D70D65CD_OFFSET UNITYSDK_OFFSET(0x13B521B0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_3634240A95A79465_OFFSET UNITYSDK_OFFSET(0x13B52850)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_75DCC59A12CAEC8F_OFFSET UNITYSDK_OFFSET(0x13B52340)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_7B8CB1D815260910_OFFSET UNITYSDK_OFFSET(0x13B51F10)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x13B53440)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_2_OFFSET UNITYSDK_OFFSET(0x13B53A10)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13B52FE0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_8DBC929C38BA6744_OFFSET UNITYSDK_OFFSET(0x13B54820)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_8F9DF3D751E1E0BF_1_OFFSET UNITYSDK_OFFSET(0x13B52F40)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x13B52F00)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_8FA5ED7A3902267D_OFFSET UNITYSDK_OFFSET(0x13B53D30)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_9119EABE886E9F84_OFFSET UNITYSDK_OFFSET(0x13B527A0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_B50FD89017B7E0F8_OFFSET UNITYSDK_OFFSET(0x13B52E50)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_CB76634243A3F143_OFFSET UNITYSDK_OFFSET(0x13B54060)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_CDCC06C4E7F19251_1_OFFSET UNITYSDK_OFFSET(0x13B536C0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_CDCC06C4E7F19251_OFFSET UNITYSDK_OFFSET(0x13B530F0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x13B52DF0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0x13B52F80)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_DBAB84A34989917E_OFFSET UNITYSDK_OFFSET(0x13B523F0)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_E9A5CB8132825E13_1_OFFSET UNITYSDK_OFFSET(0x13B53640)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x13B53070)
#define CLASS_1_A59C2B52BC165D08_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13B54A70)
#define CLASS_1_A59C2B52BC165D08__CTOR_OFFSET UNITYSDK_OFFSET(0x13B51DD0)
#define CLASS_1_A59C2B52BC165D08__PRELOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x13B54A80)
#define CLASS_1_A59C2B52BC165D08__PRELOAD_B__4_1_OFFSET UNITYSDK_OFFSET(0x13B54BA0)

inline static constexpr unsigned int Class_1_A59C2B52BC165D08_TypeDefinitionIndex = 55795;

class Class_1_A59C2B52BC165D08 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A59C2B52BC165D08_Class_1_FC84A6CEE639079F*>* Field_1_2; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::RPG::Client::Promises::Promise* Field_1_5; // 0x38
	::Class_1_A59C2B52BC165D08_Class_1_7769D02C55A6236D* Field_1_6; // 0x40
	::RPG::Client::Promises::Promise* Field_1_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A59C2B52BC165D08_Class_1_FC84A6CEE639079F_1*>* Field_1_8; // 0x50
	::RPG::Client::Promises::Promise* Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x60
	::RPG::GameCore::GenderType Field_1_11; // 0x64

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B8CB1D815260910(::RPG::Client::CutsceneCacheInitParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_7B8CB1D815260910_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_75DCC59A12CAEC8F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_75DCC59A12CAEC8F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Timeline::TimelineAsset* Method_1_3634240A95A79465()
	{
		return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_3634240A95A79465_OFFSET))(this);
	}

	::Class_1_004034A1FAAF468A* Method_1_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_19ED9DE4E1D12CB7_OFFSET))(this, a1);
	}

	::Class_1_004034A1FAAF468A* Method_1_19ED9DE4E1D12CB7_1(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DBAB84A34989917E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_DBAB84A34989917E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_1_B50FD89017B7E0F8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_B50FD89017B7E0F8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF_1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_8F9DF3D751E1E0BF_1_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_9119EABE886E9F84(::System::String* a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_9119EABE886E9F84_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_E9A5CB8132825E13()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_E9A5CB8132825E13_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_E9A5CB8132825E13_1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_E9A5CB8132825E13_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_89D1F247B9D324EE_2_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
	}

	::System::String* Method_1_23CD3925D70D65CD(::System::String* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_23CD3925D70D65CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6E9C8027C54BFC7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_D6E9C8027C54BFC7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_CDCC06C4E7F19251_OFFSET))(this);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_CDCC06C4E7F19251_1_OFFSET))(this);
	}

	::System::Boolean Method_1_8FA5ED7A3902267D(::UnityEngine::Timeline::TrackAsset* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_8FA5ED7A3902267D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CB76634243A3F143(::UnityEngine::Timeline::TrackAsset* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_CB76634243A3F143_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DBC929C38BA6744(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_8DBC929C38BA6744_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _Preload_b__4_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08__PRELOAD_B__4_0_OFFSET))(this);
	}

	::System::Void _Preload_b__4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59C2B52BC165D08__PRELOAD_B__4_1_OFFSET))(this);
	}
};

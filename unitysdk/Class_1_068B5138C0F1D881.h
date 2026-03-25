#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_1_068B5138C0F1D881_Class_1_AB7B63CA3A0F7B1A;
class Class_1_068B5138C0F1D881_Class_1_FC84A6CEE639079F;
class Class_1_068B5138C0F1D881_Class_1_FC84A6CEE639079F_1;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_068B5138C0F1D881_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1117A1A0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_0D7638DBC93E5002_1_OFFSET UNITYSDK_OFFSET(0x1117AFA0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1117A9E0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET UNITYSDK_OFFSET(0x11179FE0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0x11179E20)
#define CLASS_1_068B5138C0F1D881_METHOD_1_3634240A95A79465_OFFSET UNITYSDK_OFFSET(0x11179D40)
#define CLASS_1_068B5138C0F1D881_METHOD_1_4C3CC3790532D701_OFFSET UNITYSDK_OFFSET(0x1117A370)
#define CLASS_1_068B5138C0F1D881_METHOD_1_4D61E98C1D8E2AEA_OFFSET UNITYSDK_OFFSET(0x11179630)
#define CLASS_1_068B5138C0F1D881_METHOD_1_61AE26E956842140_OFFSET UNITYSDK_OFFSET(0x11179880)
#define CLASS_1_068B5138C0F1D881_METHOD_1_75DCC59A12CAEC8F_OFFSET UNITYSDK_OFFSET(0x111797D0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_7B8CB1D815260910_OFFSET UNITYSDK_OFFSET(0x111793D0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x1117A950)
#define CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_2_OFFSET UNITYSDK_OFFSET(0x1117AF10)
#define CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1117A500)
#define CLASS_1_068B5138C0F1D881_METHOD_1_8BB46C9A55E4F870_OFFSET UNITYSDK_OFFSET(0x1117B550)
#define CLASS_1_068B5138C0F1D881_METHOD_1_8DBC929C38BA6744_OFFSET UNITYSDK_OFFSET(0x1117BC60)
#define CLASS_1_068B5138C0F1D881_METHOD_1_8F9DF3D751E1E0BF_1_OFFSET UNITYSDK_OFFSET(0x1117A460)
#define CLASS_1_068B5138C0F1D881_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1117A420)
#define CLASS_1_068B5138C0F1D881_METHOD_1_8FA5ED7A3902267D_OFFSET UNITYSDK_OFFSET(0x1117B220)
#define CLASS_1_068B5138C0F1D881_METHOD_1_9119EABE886E9F84_OFFSET UNITYSDK_OFFSET(0x11179C90)
#define CLASS_1_068B5138C0F1D881_METHOD_1_CDCC06C4E7F19251_1_OFFSET UNITYSDK_OFFSET(0x1117ABD0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_CDCC06C4E7F19251_OFFSET UNITYSDK_OFFSET(0x1117A610)
#define CLASS_1_068B5138C0F1D881_METHOD_1_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x1117A310)
#define CLASS_1_068B5138C0F1D881_METHOD_1_D6E9C8027C54BFC7_OFFSET UNITYSDK_OFFSET(0x1117A4A0)
#define CLASS_1_068B5138C0F1D881_METHOD_1_E9A5CB8132825E13_1_OFFSET UNITYSDK_OFFSET(0x1117AB50)
#define CLASS_1_068B5138C0F1D881_METHOD_1_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x1117A590)
#define CLASS_1_068B5138C0F1D881_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1117BEA0)
#define CLASS_1_068B5138C0F1D881__CTOR_OFFSET UNITYSDK_OFFSET(0x11179290)
#define CLASS_1_068B5138C0F1D881__PRELOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x1117BEB0)
#define CLASS_1_068B5138C0F1D881__PRELOAD_B__4_1_OFFSET UNITYSDK_OFFSET(0x1117C020)

inline static constexpr unsigned int Class_1_068B5138C0F1D881_TypeDefinitionIndex = 48314;

class Class_1_068B5138C0F1D881 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_7; // 0x10
	::Class_1_068B5138C0F1D881_Class_1_AB7B63CA3A0F7B1A* Field_1_3; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_068B5138C0F1D881_Class_1_FC84A6CEE639079F*>* Field_1_4; // 0x28
	::RPG::Client::Promises::Promise* Field_1_11; // 0x30
	::RPG::Client::Promises::Promise* Field_1_8; // 0x38
	::RPG::Client::Promises::Promise* Field_1_10; // 0x40
	::System::String* Field_1_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_068B5138C0F1D881_Class_1_FC84A6CEE639079F_1*>* Field_1_5; // 0x50
	::RPG::Client::Promises::Promise* Field_1_9; // 0x58
	::RPG::GameCore::GenderType Field_1_1; // 0x60
	::System::Boolean Field_1_6; // 0x64

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B8CB1D815260910(::RPG::Client::CutsceneCacheInitParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_7B8CB1D815260910_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_75DCC59A12CAEC8F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_75DCC59A12CAEC8F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Timeline::TimelineAsset* Method_1_3634240A95A79465()
	{
		return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_3634240A95A79465_OFFSET))(this);
	}

	::Class_1_004034A1FAAF468A* Method_1_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_19ED9DE4E1D12CB7_OFFSET))(this, a1);
	}

	::Class_1_004034A1FAAF468A* Method_1_19ED9DE4E1D12CB7_1(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_61AE26E956842140(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_61AE26E956842140_OFFSET))(this, a1);
	}

	::System::Void Method_1_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C3CC3790532D701(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_4C3CC3790532D701_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF_1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_8F9DF3D751E1E0BF_1_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_9119EABE886E9F84(::System::String* a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_9119EABE886E9F84_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_E9A5CB8132825E13()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_E9A5CB8132825E13_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_E9A5CB8132825E13_1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_E9A5CB8132825E13_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_89D1F247B9D324EE_2_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_0D7638DBC93E5002_1_OFFSET))(this);
	}

	::System::String* Method_1_4D61E98C1D8E2AEA(::System::String* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_4D61E98C1D8E2AEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6E9C8027C54BFC7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_D6E9C8027C54BFC7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_CDCC06C4E7F19251_OFFSET))(this);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_CDCC06C4E7F19251_1_OFFSET))(this);
	}

	::System::Boolean Method_1_8FA5ED7A3902267D(::UnityEngine::Timeline::TrackAsset* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_8FA5ED7A3902267D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8BB46C9A55E4F870(::UnityEngine::Timeline::TrackAsset* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_8BB46C9A55E4F870_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DBC929C38BA6744(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_8DBC929C38BA6744_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _Preload_b__4_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881__PRELOAD_B__4_0_OFFSET))(this);
	}

	::System::Void _Preload_b__4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068B5138C0F1D881__PRELOAD_B__4_1_OFFSET))(this);
	}
};

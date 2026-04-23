#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Class_2_54A5646FB63D2B4F_OverrideAspect.h"
#include "unitysdk/Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5.h"
#include "unitysdk/Class_2_54A5646FB63D2B4F_Struct_2_A5FF422FCBA8618D.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_54A5646FB63D2B4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C21900)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_12AAD2426D38E65C_OFFSET UNITYSDK_OFFSET(0x11C221C0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_134017AC3A2C19AD_OFFSET UNITYSDK_OFFSET(0x11C20C70)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_1CB1FB01B77423C6_OFFSET UNITYSDK_OFFSET(0x11C20EA0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_1E974712462AF02E_OFFSET UNITYSDK_OFFSET(0x11C224A0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_219EE22F13B5AC99_OFFSET UNITYSDK_OFFSET(0x11C21420)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_2BCCE168DA1FAC42_OFFSET UNITYSDK_OFFSET(0x11C21F00)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_396F2E6BD61E3D00_1_OFFSET UNITYSDK_OFFSET(0x11C213B0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_396F2E6BD61E3D00_OFFSET UNITYSDK_OFFSET(0x11C21080)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_4EF542E7E88B2090_OFFSET UNITYSDK_OFFSET(0x11C229B0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_52A04EBF0FB72D33_OFFSET UNITYSDK_OFFSET(0x11C21540)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_5B54271BAB4A079D_OFFSET UNITYSDK_OFFSET(0x11C21DD0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_7984DE422163E6B4_OFFSET UNITYSDK_OFFSET(0x11C228D0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_8483E8C5D58A000D_OFFSET UNITYSDK_OFFSET(0x11C21760)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_881CCFB5CB7FF9E8_OFFSET UNITYSDK_OFFSET(0x11C22390)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x11C21A90)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_8A32FA5EA368CF64_OFFSET UNITYSDK_OFFSET(0x11C22620)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_B60A372A6443812A_OFFSET UNITYSDK_OFFSET(0x11C20A70)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_D2D7B9347E6957CF_OFFSET UNITYSDK_OFFSET(0x11C210F0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_D8E4A0D579A74A4E_OFFSET UNITYSDK_OFFSET(0x11C216D0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_E0FE6023AC32F0D5_OFFSET UNITYSDK_OFFSET(0x11C21C90)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x11C218B0)
#define CLASS_2_54A5646FB63D2B4F_METHOD_2_FFD866DD4928D1D9_OFFSET UNITYSDK_OFFSET(0x11C21FB0)
#define CLASS_2_54A5646FB63D2B4F__CTOR_OFFSET UNITYSDK_OFFSET(0x11C20800)

inline static constexpr unsigned int Class_2_54A5646FB63D2B4F_TypeDefinitionIndex = 67941;

class Class_2_54A5646FB63D2B4F : public ::Class_1_7256E7A2FB36A46D
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5>* Field_2_3; // 0x18
	::System::Action_4<::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::Class_2_54A5646FB63D2B4F_Struct_2_A5FF422FCBA8618D>* Field_2_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_2; // 0x40
	::System::Int32 Field_2_7; // 0x48

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_5674E7B417F2830A_1 Method_2_B60A372A6443812A(::UnityEngine::GameObject* a1)
	{
		return ((::Struct_2_5674E7B417F2830A_1(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_B60A372A6443812A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_396F2E6BD61E3D00(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_396F2E6BD61E3D00_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_396F2E6BD61E3D00_1(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_396F2E6BD61E3D00_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D2D7B9347E6957CF(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3, ::Class_2_54A5646FB63D2B4F_OverrideAspect a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean, ::Class_2_54A5646FB63D2B4F_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_D2D7B9347E6957CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_8483E8C5D58A000D(::Struct_2_5674E7B417F2830A_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_8483E8C5D58A000D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_219EE22F13B5AC99(::Struct_2_5674E7B417F2830A_1 a1, ::Class_2_54A5646FB63D2B4F_Struct_2_A5FF422FCBA8618D& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::Class_2_54A5646FB63D2B4F_Struct_2_A5FF422FCBA8618D&))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_219EE22F13B5AC99_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_E6184566299DAB0F_OFFSET))(a1);
	}

	::System::Void Method_2_134017AC3A2C19AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_134017AC3A2C19AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0FE6023AC32F0D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_E0FE6023AC32F0D5_OFFSET))(this);
	}

	::System::Void Method_2_5B54271BAB4A079D(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_5B54271BAB4A079D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_12AAD2426D38E65C(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_12AAD2426D38E65C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2BCCE168DA1FAC42(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_2BCCE168DA1FAC42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_881CCFB5CB7FF9E8(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_881CCFB5CB7FF9E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1CB1FB01B77423C6(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*&))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_1CB1FB01B77423C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1E974712462AF02E(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_1E974712462AF02E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52A04EBF0FB72D33(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_52A04EBF0FB72D33_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FFD866DD4928D1D9(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_FFD866DD4928D1D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_2_8A32FA5EA368CF64(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_8A32FA5EA368CF64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7984DE422163E6B4(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_54A5646FB63D2B4F_OverrideAspect a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_54A5646FB63D2B4F_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_7984DE422163E6B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8E4A0D579A74A4E(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_54A5646FB63D2B4F_OverrideAspect a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_54A5646FB63D2B4F_OverrideAspect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_D8E4A0D579A74A4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4EF542E7E88B2090(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_METHOD_2_4EF542E7E88B2090_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace CriWare { class CriManaMovieController; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_1_74ED0770F35826A6_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xECB4830)
#define CLASS_1_74ED0770F35826A6_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xECB4230)
#define CLASS_1_74ED0770F35826A6_METHOD_1_18EAC247268E01AB_OFFSET UNITYSDK_OFFSET(0xECB55D0)
#define CLASS_1_74ED0770F35826A6_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xECB4050)
#define CLASS_1_74ED0770F35826A6_METHOD_1_4021FBCAADF57CEB_OFFSET UNITYSDK_OFFSET(0xECB5520)
#define CLASS_1_74ED0770F35826A6_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xECB4880)
#define CLASS_1_74ED0770F35826A6_METHOD_1_58B017F75D97C8DF_OFFSET UNITYSDK_OFFSET(0xECB6250)
#define CLASS_1_74ED0770F35826A6_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xECB5C80)
#define CLASS_1_74ED0770F35826A6_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xECB5690)
#define CLASS_1_74ED0770F35826A6_METHOD_1_68DE647BC0AFC803_OFFSET UNITYSDK_OFFSET(0xECB5EF0)
#define CLASS_1_74ED0770F35826A6_METHOD_1_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xECB5D00)
#define CLASS_1_74ED0770F35826A6_METHOD_1_7F3E89315A1D1255_OFFSET UNITYSDK_OFFSET(0xECB4AD0)
#define CLASS_1_74ED0770F35826A6_METHOD_1_822A0A66070F4C91_OFFSET UNITYSDK_OFFSET(0xECB4DD0)
#define CLASS_1_74ED0770F35826A6_METHOD_1_97965634D89B0F68_OFFSET UNITYSDK_OFFSET(0xECB5F90)
#define CLASS_1_74ED0770F35826A6_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xECB4B20)
#define CLASS_1_74ED0770F35826A6_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xECB6140)
#define CLASS_1_74ED0770F35826A6_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xECB4400)
#define CLASS_1_74ED0770F35826A6_METHOD_1_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0xECB4E60)
#define CLASS_1_74ED0770F35826A6_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xECB4980)
#define CLASS_1_74ED0770F35826A6_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0xECB4600)
#define CLASS_1_74ED0770F35826A6_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xECB4740)
#define CLASS_1_74ED0770F35826A6_METHOD_1_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0xECB4CB0)
#define CLASS_1_74ED0770F35826A6_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xECB5980)
#define CLASS_1_74ED0770F35826A6_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xECB4510)
#define CLASS_1_74ED0770F35826A6__CTOR_OFFSET UNITYSDK_OFFSET(0xECB3FA0)
#define CLASS_1_74ED0770F35826A6__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0xECB64E0)
#define CLASS_1_74ED0770F35826A6__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0xECB64F0)
#define CLASS_1_74ED0770F35826A6__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0xECB64C0)

inline static constexpr unsigned int Class_1_74ED0770F35826A6_TypeDefinitionIndex = 67419;

class Class_1_74ED0770F35826A6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::UnityEngine::Coroutine* Field_1_20; // 0x10
	::UnityEngine::Coroutine* Field_1_22; // 0x18
	::RPG::GameCore::PlayVideoSequence* Field_1_2; // 0x20
	::UnityEngine::MeshRenderer* Field_1_5; // 0x28
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_3; // 0x30
	::UnityEngine::GameObject* Field_1_4; // 0x38
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* Field_1_17; // 0x40
	::CriWare::CriManaMovieController* Field_1_6; // 0x48
	::CriWare::CriManaMovieController* Field_1_21; // 0x50
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_1_18; // 0x58
	::Il2CppArray<::CriWare::CriManaMovieController*>* Field_1_14; // 0x60
	::System::Boolean Field_1_16; // 0x68
	::System::Boolean Field_1_19; // 0x69
	::System::Boolean Field_1_9; // 0x6A
	::System::Int32 Field_1_1; // 0x6C
	::System::Int32 Field_1_7; // 0x70
	::System::UInt32 Field_1_11; // 0x74
	::CriWare::CriMana::Player_Status Field_1_15; // 0x78
	::System::Int32 Field_1_10; // 0x7C
	::System::Int32 Field_1_8; // 0x80
	::System::UInt32 Field_1_12; // 0x84
	::System::Int32 Field_1_13; // 0x88

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PlayVideoSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_1_7F3E89315A1D1255(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_7F3E89315A1D1255_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_822A0A66070F4C91(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_822A0A66070F4C91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4021FBCAADF57CEB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_4021FBCAADF57CEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_18EAC247268E01AB(::UnityEngine::MeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_18EAC247268E01AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_1_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_68DE647BC0AFC803(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_68DE647BC0AFC803_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_97965634D89B0F68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_97965634D89B0F68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_1_58B017F75D97C8DF(::RPG::GameCore::VideoSequenceItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoSequenceItem*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_58B017F75D97C8DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::System::Boolean _WaitReStartPlayVideo_b__37_0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET))(this);
	}

	::System::Void _OnVideoBegin_b__46_0(::System::UInt32 x, ::AkCallbackType y, ::AkCallbackInfo* z)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__ONVIDEOBEGIN_B__46_0_OFFSET))(this, x, y, z);
	}

	::System::Void _OnVideoBegin_b__46_1(::System::UInt32 x, ::AkCallbackType y, ::AkCallbackInfo* z)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__ONVIDEOBEGIN_B__46_1_OFFSET))(this, x, y, z);
	}
};

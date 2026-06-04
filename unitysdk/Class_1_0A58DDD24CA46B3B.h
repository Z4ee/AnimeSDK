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

#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xB2B70C0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB2B59B0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_18EAC247268E01AB_OFFSET UNITYSDK_OFFSET(0xB2B6D50)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xB2B57D0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0xB2B7420)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_343AEC10F51D93D4_OFFSET UNITYSDK_OFFSET(0xB2B7920)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4021FBCAADF57CEB_OFFSET UNITYSDK_OFFSET(0xB2B6CA0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB2B5FC0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_5EF2AC29261F6A43_OFFSET UNITYSDK_OFFSET(0xB2B6570)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xB2B73A0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0xB2B6600)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_68DE647BC0AFC803_OFFSET UNITYSDK_OFFSET(0xB2B75E0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xB2B6E10)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_834FC35654ED968C_OFFSET UNITYSDK_OFFSET(0xB2B6250)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_97965634D89B0F68_OFFSET UNITYSDK_OFFSET(0xB2B7680)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB2B62A0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xB2B7810)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xB2B5B80)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0xB2B6450)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xB2B5E90)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xB2B5C80)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB2B60C0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB2B5F70)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xB2B5D70)
#define CLASS_1_0A58DDD24CA46B3B__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B56F0)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0xB2B7BF0)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0xB2B7C00)
#define CLASS_1_0A58DDD24CA46B3B__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0xB2B7BD0)

inline static constexpr unsigned int Class_1_0A58DDD24CA46B3B_TypeDefinitionIndex = 68371;

class Class_1_0A58DDD24CA46B3B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::UnityEngine::Coroutine* Field_1_1; // 0x10
	::CriWare::CriManaMovieController* Field_1_2; // 0x18
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* Field_1_3; // 0x20
	::CriWare::CriManaMovieController* Field_1_4; // 0x28
	::UnityEngine::Coroutine* Field_1_5; // 0x30
	::UnityEngine::GameObject* Field_1_6; // 0x38
	::RPG::GameCore::PlayVideoSequence* Field_1_7; // 0x40
	::UnityEngine::MeshRenderer* Field_1_8; // 0x48
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_1_9; // 0x50
	::Il2CppArray<::CriWare::CriManaMovieController*>* Field_1_10; // 0x58
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_11; // 0x60
	::System::UInt32 Field_1_12; // 0x68
	::System::Boolean Field_1_13; // 0x6C
	::System::Boolean Field_1_14; // 0x6D
	::System::Boolean Field_1_15; // 0x6E
	::System::Int32 Field_1_16; // 0x70
	::System::Int32 Field_1_17; // 0x74
	::CriWare::CriMana::Player_Status Field_1_18; // 0x78
	::System::Int32 Field_1_19; // 0x7C
	::System::Int32 Field_1_20; // 0x80
	::System::Int32 Field_1_21; // 0x84
	::System::UInt32 Field_1_22; // 0x88

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PlayVideoSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_834FC35654ED968C(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_834FC35654ED968C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_5EF2AC29261F6A43(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_5EF2AC29261F6A43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4021FBCAADF57CEB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4021FBCAADF57CEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_18EAC247268E01AB(::UnityEngine::MeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_18EAC247268E01AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_68DE647BC0AFC803(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_68DE647BC0AFC803_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_97965634D89B0F68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_97965634D89B0F68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_62FC2DCD2EF869D5_OFFSET))(this);
	}

	::System::Void Method_1_343AEC10F51D93D4(::RPG::GameCore::VideoSequenceItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoSequenceItem*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_343AEC10F51D93D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::System::Boolean _WaitReStartPlayVideo_b__37_0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET))(this);
	}

	::System::Void _OnVideoBegin_b__46_0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _OnVideoBegin_b__46_1(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_1_OFFSET))(this, a1, a2, a3);
	}
};

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

#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x15E17EA0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_18EAC247268E01AB_OFFSET UNITYSDK_OFFSET(0x15E19390)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_343AEC10F51D93D4_OFFSET UNITYSDK_OFFSET(0x15E19EC0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4021FBCAADF57CEB_OFFSET UNITYSDK_OFFSET(0x15E192E0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15E185F0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x15E18C70)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x15E199A0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x15E19700)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_68DE647BC0AFC803_OFFSET UNITYSDK_OFFSET(0x15E19B90)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x15E17AB0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x15E19450)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_834FC35654ED968C_OFFSET UNITYSDK_OFFSET(0x15E18880)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x15E19A20)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_97965634D89B0F68_OFFSET UNITYSDK_OFFSET(0x15E19C30)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x15E188D0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x15E19DC0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15E18070)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x15E18180)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x15E184C0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15E186F0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x15E185A0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_ED333790C08F48DA_OFFSET UNITYSDK_OFFSET(0x15E18BE0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_FA84BB82F7710FBB_OFFSET UNITYSDK_OFFSET(0x15E18A80)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x15E183B0)
#define CLASS_1_0A58DDD24CA46B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x15E179D0)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0x15E1A180)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0x15E1A190)
#define CLASS_1_0A58DDD24CA46B3B__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0x15E1A160)

inline static constexpr unsigned int Class_1_0A58DDD24CA46B3B_TypeDefinitionIndex = 73120;

class Class_1_0A58DDD24CA46B3B : public ::System::Object
{
public:
	// static const ::System::Int32 KDEADIEJIDF = 0x2; // 0x0
	::CriWare::CriManaMovieController* OJLDDOIMCAF; // 0x10
	::UnityEngine::Coroutine* NKLPFEFGBJK; // 0x18
	::RPG::GameCore::PlayVideoSequence* BDDJPHFIIPK; // 0x20
	::UnityEngine::MeshRenderer* GKJEDHMABID; // 0x28
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* MJNODCEJEKN; // 0x30
	::Il2CppArray<::CriWare::CriManaMovieController*>* KFGHKHGLBMM; // 0x38
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* BPLOKGHNFCD; // 0x40
	::UnityEngine::Coroutine* DBLANGNGFJD; // 0x48
	::UnityEngine::GameObject* FICBJLNBKLH; // 0x50
	::RPG::Client::OpenWorld::StreamingItemData* MFGKNIEHDBD; // 0x58
	::CriWare::CriManaMovieController* PECHJKPMGLJ; // 0x60
	::System::Int32 MHGNBOFDHIJ; // 0x68
	::System::Int32 PHHHENIPEIJ; // 0x6C
	::System::Int32 IMCMEPAPHMC; // 0x70
	::CriWare::CriMana::Player_Status GHHGNIHGOBC; // 0x74
	::System::UInt32 EFAFKOCCPAI; // 0x78
	::System::UInt32 GJFEGINLIPF; // 0x7C
	::System::Boolean ONJLLJIPLHB; // 0x80
	::System::Boolean CBEECNAJMLA; // 0x81
	::System::Boolean GABMPMNHFNG; // 0x82
	::System::Int32 LNMNOOFDBKJ; // 0x84
	::System::Int32 DMAPPGGHNAJ; // 0x88

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

	::System::Void Method_1_FA84BB82F7710FBB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_FA84BB82F7710FBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_ED333790C08F48DA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_ED333790C08F48DA_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_94C81405F83348DF_OFFSET))(this);
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

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4F6E40C18A7A5A9E_OFFSET))(this);
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

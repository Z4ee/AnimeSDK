#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8FA503DF7A3EA7E6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole { class TimelineData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_HASSUBTITLE_OFFSET UNITYSDK_OFFSET(0x16892340)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x168923F0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x168923E0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x16894B50)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_0C66BEEC66E6618F_OFFSET UNITYSDK_OFFSET(0x16893AF0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x16894530)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x16894E00)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x16894CA0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x16894DF0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x16894A50)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x16893380)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x16893A60)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x16894CB0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168938C0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x16894C30)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x16894C90)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_E72B56432F4A822F_OFFSET UNITYSDK_OFFSET(0x16892EF0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_F15878FE8A90EF23_OFFSET UNITYSDK_OFFSET(0x16894D00)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_F4F61B09D32675B2_OFFSET UNITYSDK_OFFSET(0x16894A60)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x168937E0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x16893740)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x16892400)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16892C10)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16893900)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x168949F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogBehaviour_TypeDefinitionIndex = 40329;

	class ChatPlusDialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* NpcName; // 0x10
		::System::String* TextMapKey; // 0x18
		::System::String* VoID; // 0x20
		::System::Int32 priority; // 0x28
		::Enum_3_8FA503DF7A3EA7E6 subtitleSlot; // 0x2C
		::System::Boolean enableEmoSync; // 0x30
		::miHoYoEmotion::EmoSync* emoSync; // 0x38
		::System::String* avatarShowingKey; // 0x40
		::System::String* emoFacialKey; // 0x48
		::System::String* emoPoseKey; // 0x50
		::UnityEngine::GameObject* followTarget; // 0x58
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0x60
		::System::Boolean disableMale; // 0x68
		::System::Boolean disableFemale; // 0x69
		::UnityEngine::GameObject* _audioEmitter; // 0x70
		::System::Boolean _isPaused; // 0x78
		::System::Boolean _needPlay; // 0x79
		::System::UInt32 _audioPendingId; // 0x7C
		::Foundation::AssetRequestHandle _emoHandler; // 0x80
		::miHoYoEmotion::SequenceClipBakeData* _bakeData; // 0xA0
		::MoleMole::TimelineData* _data; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasSubtitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_HASSUBTITLE_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E72B56432F4A822F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_E72B56432F4A822F_OFFSET))(this, a1);
		}

		::System::Void Method_2_7EAA8879197594BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_7EAA8879197594BA_OFFSET))(this);
		}

		::System::Void Method_2_F4F61B09D32675B2(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_F4F61B09D32675B2_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_AA972BE565DAF9E3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_0C66BEEC66E6618F(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_0C66BEEC66E6618F_OFFSET))(this, a1);
		}

		::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_F15878FE8A90EF23(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_F15878FE8A90EF23_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_2_14AFBA2E8A242644()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_METHOD_2_14AFBA2E8A242644_OFFSET))(this);
		}
	};
}

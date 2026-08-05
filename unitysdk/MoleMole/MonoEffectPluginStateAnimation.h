#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginStateAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectPluginStateAudioData.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_HASSTATEAUDIO_OFFSET UNITYSDK_OFFSET(0x10804D10)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x10804D70)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0x10805860)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_0F3D59CED568B39A_OFFSET UNITYSDK_OFFSET(0x10804EE0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x10806660)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_5DFDABA56E3FC131_OFFSET UNITYSDK_OFFSET(0x108066F0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x108065E0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_B5B7F8C3CF418D11_1_OFFSET UNITYSDK_OFFSET(0x10805630)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_B5B7F8C3CF418D11_OFFSET UNITYSDK_OFFSET(0x10805400)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x10806880)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10804CC0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10805AF0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTBORN_OFFSET UNITYSDK_OFFSET(0x10805CD0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0x108061C0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10804BC0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x10804DB0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0x10805130)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x10806460)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginStateAnimation_TypeDefinitionIndex = 40663;

	class MonoEffectPluginStateAnimation : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean EnableTransitionCheck; // 0x58
		::System::String* DefaultState; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginStateAnimationData>* animationDataList; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginStateAudioData>* stateAudioDataList; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x80
		::System::UInt32 Field_7_4; // 0x88
		::System::String* Field_7_11; // 0x90
		::UnityEngine::Animation* Field_7_10; // 0x98
		::System::Boolean Field_7_9; // 0xA0
		::UnityEngine::GameObject* Field_7_8; // 0xA8
		::UnityEngine::GameObject* Field_7_15; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_HasStateAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_HASSTATEAUDIO_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTransitionAllowed(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET))(this, a1, a2);
		}

		::System::Boolean PlayAnimationByState(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET))(this, a1);
		}

		::System::Void OnEffectBorn(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTBORN_OFFSET))(this, a1, a2);
		}

		::System::Void OnEffectFinish(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::String* Method_7_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_7_B5B7F8C3CF418D11(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_B5B7F8C3CF418D11_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_5DFDABA56E3FC131(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_5DFDABA56E3FC131_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_7_BC46FCF99873D9DD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_BC46FCF99873D9DD_OFFSET))(this);
		}

		::System::Void Method_7_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_7_B5B7F8C3CF418D11_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_B5B7F8C3CF418D11_1_OFFSET))(this, a1);
		}

		::System::Void Method_7_0F3D59CED568B39A(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_0F3D59CED568B39A_OFFSET))(this, a1);
		}
	};
}

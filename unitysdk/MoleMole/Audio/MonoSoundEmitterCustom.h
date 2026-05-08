#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_684B8CD1961BDDD2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_EMPTY_OFFSET UNITYSDK_OFFSET(0x17515860)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x17515970)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET UNITYSDK_OFFSET(0x17514230)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x17515E80)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x17515E20)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17515AA0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17515620)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17515450)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x175156E0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x17515510)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_UNREGISTEREMITTER_OFFSET UNITYSDK_OFFSET(0x17515AF0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17515D80)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17515D10)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundEmitterCustom_TypeDefinitionIndex = 79469;

	class MonoSoundEmitterCustom : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>** StaticGet_staticMonoDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundEmitterCustom_TypeDefinitionIndex)->GetStaticField(0x3A0B0);
		}
		::Enum_3_684B8CD1961BDDD2 emitterType; // 0x18
		::System::Single radius; // 0x1C
		::UnityEngine::Vector3 offset; // 0x20
		::UnityEngine::Vector3 extend; // 0x2C
		::System::Boolean reTarget; // 0x38
		::System::String* attachPoint; // 0x40
		::UnityEngine::Transform* targetTrans; // 0x48
		::UnityEngine::GameObject* Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_SoundEmitter()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALDISABLE_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_EMPTY_OFFSET))();
		}

		static ::MoleMole::Audio::MonoSoundEmitterCustom* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::Audio::MonoSoundEmitterCustom*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnregisterEmitter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_UNREGISTEREMITTER_OFFSET))(this);
		}

		::System::Void Method_5_E1B59F840D6D6F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E1B59F840D6D6F1F_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}

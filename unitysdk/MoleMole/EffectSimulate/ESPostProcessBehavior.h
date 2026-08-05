#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { template <typename T> class KeyframeableAnimationCurve_1; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1A955640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_0B45AE683CCAAB8C_OFFSET UNITYSDK_OFFSET(0x1A955520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A9555F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_127F5A7A83D57B1C_OFFSET UNITYSDK_OFFSET(0x1A955510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_2FD8D19A3BD749D4_OFFSET UNITYSDK_OFFSET(0x1A955010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x1A9555B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_37D0D56A2AF8F49F_1_OFFSET UNITYSDK_OFFSET(0x1A956310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_37D0D56A2AF8F49F_OFFSET UNITYSDK_OFFSET(0x1A955FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_4A9B21B613D0DDF5_OFFSET UNITYSDK_OFFSET(0x1A955850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x1A9555A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x1A955600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_560C9D832629E394_OFFSET UNITYSDK_OFFSET(0x1A956D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_1_OFFSET UNITYSDK_OFFSET(0x1A954720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_2_OFFSET UNITYSDK_OFFSET(0x1A9561A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1A954C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_5BE36514DB9212B5_1_OFFSET UNITYSDK_OFFSET(0x1A956850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_5BE36514DB9212B5_OFFSET UNITYSDK_OFFSET(0x1A956190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6215A8999654A40E_OFFSET UNITYSDK_OFFSET(0x1A956130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_68887892A9E0289B_1_OFFSET UNITYSDK_OFFSET(0x1A9565D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_68887892A9E0289B_OFFSET UNITYSDK_OFFSET(0x1A955EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6EC33DB7E5118199_1_OFFSET UNITYSDK_OFFSET(0x1A9576B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6EC33DB7E5118199_OFFSET UNITYSDK_OFFSET(0x1A955FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_81F969B0AB89816D_OFFSET UNITYSDK_OFFSET(0x1A955E50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A955620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8662C524EEEB9BA2_OFFSET UNITYSDK_OFFSET(0x1A957130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0x1A957730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_86BCCB05A2C20A1E_OFFSET UNITYSDK_OFFSET(0x1A9545B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8827234047C62450_OFFSET UNITYSDK_OFFSET(0x1A9562C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8CFC3AF6A691B2FF_OFFSET UNITYSDK_OFFSET(0x1A954DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_90D0DC11D34D7114_1_OFFSET UNITYSDK_OFFSET(0x1A954B10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0x1A9549B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_94537392CFEE3AB0_OFFSET UNITYSDK_OFFSET(0x1A957750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A6CE5DAA2387E1E2_1_OFFSET UNITYSDK_OFFSET(0x1A956B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1A956990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A7AAACFF88243D85_OFFSET UNITYSDK_OFFSET(0x1A9576C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1A9555E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1A9555D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B31A23B75E1D102F_1_OFFSET UNITYSDK_OFFSET(0x1A957570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B31A23B75E1D102F_OFFSET UNITYSDK_OFFSET(0x1A956EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x1A955580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B490983EE6E194E5_1_OFFSET UNITYSDK_OFFSET(0x1A956FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B490983EE6E194E5_OFFSET UNITYSDK_OFFSET(0x1A956700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B51238B95BDFDE9E_OFFSET UNITYSDK_OFFSET(0x1A956D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B6AD24B18DB08638_OFFSET UNITYSDK_OFFSET(0x1A957530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x1A955540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D2FAC9A54C1891B4_1_OFFSET UNITYSDK_OFFSET(0x1A956D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D2FAC9A54C1891B4_OFFSET UNITYSDK_OFFSET(0x1A956860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0x1A954860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D4C1CD432356E959_OFFSET UNITYSDK_OFFSET(0x1A9562D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x1A9555C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D6A8DF3DD1989985_OFFSET UNITYSDK_OFFSET(0x1A957140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DE8BED213BF6311A_1_OFFSET UNITYSDK_OFFSET(0x1A956000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DE8BED213BF6311A_OFFSET UNITYSDK_OFFSET(0x1A955D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DFF6E1BDEC284D1F_1_OFFSET UNITYSDK_OFFSET(0x1A956480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DFF6E1BDEC284D1F_OFFSET UNITYSDK_OFFSET(0x1A956320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E250F22AE71AD55B_OFFSET UNITYSDK_OFFSET(0x1A955E70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1A955630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x1A955D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0x1A9562B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_4_OFFSET UNITYSDK_OFFSET(0x1A956470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1A955610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A955590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A954850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9558E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A955860)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessBehavior_TypeDefinitionIndex = 72471;

	class ESPostProcessBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>** StaticGet_OnScreenEffectFieldHandleTypeDropdown_NonKeyframeFieldVersion()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x36630);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*>** StaticGet_s_mapVolumeComCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x36638);
		}
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>** StaticGet_OnScreenEffectFieldHandleTypeDropdown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x36640);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* OTHER_GROUP_NAME; // 0x0
		// static const ::System::String* POST_PROCESS_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* POST_PROCESS_TEMP_SELECT_SPLIT_CHAR; // 0x0
		::System::String* _tempSelect; // 0x58
		::System::String* fadeInCurve; // 0x60
		::System::String* fadeOutCurve; // 0x68
		::System::Int32 priority; // 0x70
		::System::Boolean enableInterrupt; // 0x74
		::System::Boolean enablePermanent; // 0x75
		::System::Boolean canPlayInCoopNonAuthority; // 0x76
		::System::Boolean ignoreTimescale; // 0x77
		::System::Boolean ignoreWorldTimescale; // 0x78
		::System::Boolean ignoreOwnerTimescale; // 0x79
		::System::Boolean ignoreWitchTimescale; // 0x7A
		::System::Boolean holdPermanently; // 0x7B
		::UnityEngine::Rendering::Volume* m_stVolume; // 0x80
		::System::Single m_fTimelineTrueTime; // 0x88
		::System::Single m_fTimelineClipIn; // 0x8C
		::System::Single m_fTimelineMaxDuration; // 0x90
		::UnityEngine::AnimationCurve* m_stFadeInCurve; // 0x98
		::UnityEngine::AnimationCurve* m_stFadeOutCurve; // 0xA0
		::System::Boolean m_bVolComPreIsActive; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Single Method_3_86BCCB05A2C20A1E(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_86BCCB05A2C20A1E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Single Method_3_D3EA5C9E7ED3E40D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D3EA5C9E7ED3E40D_OFFSET))(this);
		}

		::System::Single Method_3_90D0DC11D34D7114()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_90D0DC11D34D7114_OFFSET))(this);
		}

		::System::Single Method_3_90D0DC11D34D7114_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_90D0DC11D34D7114_1_OFFSET))(this);
		}

		::System::Boolean Method_3_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Void Method_3_8CFC3AF6A691B2FF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8CFC3AF6A691B2FF_OFFSET))(this, a1);
		}

		::System::Void Method_3_2FD8D19A3BD749D4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_2FD8D19A3BD749D4_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_3_127F5A7A83D57B1C(::System::String* a1, ::System::String* a2, ::System::Single a3, ::UnityEngine::ScriptableObject*& a4, ::System::Boolean a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::String* a7)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::UnityEngine::ScriptableObject*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_127F5A7A83D57B1C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_3_0B45AE683CCAAB8C(::System::String* a1, ::System::String* a2, ::System::Single a3, ::UnityEngine::ScriptableObject*& a4, ::System::String*& a5)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_0B45AE683CCAAB8C_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_3_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_3_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_3_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_3_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_3_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_3_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_3_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_3_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Volume* get_Volume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GET_VOLUME_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* Method_3_4A9B21B613D0DDF5()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_4A9B21B613D0DDF5_OFFSET))(this);
		}

		::System::Void Method_3_E7F1AECA7CFF8AAD_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_3_DE8BED213BF6311A(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DE8BED213BF6311A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_81F969B0AB89816D(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_81F969B0AB89816D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_568AE7A1499723FD_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_1_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_3_E250F22AE71AD55B(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E250F22AE71AD55B_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_68887892A9E0289B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_68887892A9E0289B_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_37D0D56A2AF8F49F(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_37D0D56A2AF8F49F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Gradient* Method_3_6EC33DB7E5118199(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6EC33DB7E5118199_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_3_DE8BED213BF6311A_1(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DE8BED213BF6311A_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_3_6215A8999654A40E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6215A8999654A40E_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Texture* Method_3_5BE36514DB9212B5(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_5BE36514DB9212B5_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_568AE7A1499723FD_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_568AE7A1499723FD_2_OFFSET))(this);
		}

		::System::Void Method_3_E7F1AECA7CFF8AAD_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* Method_3_8827234047C62450(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8827234047C62450_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color Method_3_D4C1CD432356E959(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D4C1CD432356E959_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_37D0D56A2AF8F49F_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_37D0D56A2AF8F49F_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_3_DFF6E1BDEC284D1F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DFF6E1BDEC284D1F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_E7F1AECA7CFF8AAD_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_E7F1AECA7CFF8AAD_4_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_3_DFF6E1BDEC284D1F_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_DFF6E1BDEC284D1F_1_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_68887892A9E0289B_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_68887892A9E0289B_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_3_B490983EE6E194E5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B490983EE6E194E5_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Texture* Method_3_5BE36514DB9212B5_1(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_5BE36514DB9212B5_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color Method_3_D2FAC9A54C1891B4(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D2FAC9A54C1891B4_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_A6CE5DAA2387E1E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A6CE5DAA2387E1E2_OFFSET))(this);
		}

		::System::Boolean Method_3_A6CE5DAA2387E1E2_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A6CE5DAA2387E1E2_1_OFFSET))(this);
		}

		::System::Boolean Method_3_B51238B95BDFDE9E(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B51238B95BDFDE9E_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Texture* Method_3_560C9D832629E394(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_560C9D832629E394_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color Method_3_D2FAC9A54C1891B4_1(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D2FAC9A54C1891B4_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_3_B31A23B75E1D102F(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B31A23B75E1D102F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_3_B490983EE6E194E5_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B490983EE6E194E5_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_8662C524EEEB9BA2(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_8662C524EEEB9BA2_OFFSET))(this, a1);
		}

		::System::Void Method_3_D6A8DF3DD1989985(::UnityEngine::Rendering::Volume* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_D6A8DF3DD1989985_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_3_B6AD24B18DB08638(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B6AD24B18DB08638_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_3_B31A23B75E1D102F_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_B31A23B75E1D102F_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Gradient* Method_3_6EC33DB7E5118199_1(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_6EC33DB7E5118199_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_3_A7AAACFF88243D85(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_A7AAACFF88243D85_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_867F85CA133E06EB(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_867F85CA133E06EB_OFFSET))(this, a1);
		}

		::System::Single Method_3_94537392CFEE3AB0(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_METHOD_3_94537392CFEE3AB0_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class RendererMaterialCache; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19200D90)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0x19201030)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x192011D0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_32F371754DD4B742_OFFSET UNITYSDK_OFFSET(0x19200AF0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19200F20)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0x19200FE0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x19200E80)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8FF354B64B657510_OFFSET UNITYSDK_OFFSET(0x19201080)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x19200C00)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_EF9F68D628696187_OFFSET UNITYSDK_OFFSET(0x192014F0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x192016A0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19200A70)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterAtlasFaceBehaviour_TypeDefinitionIndex = 67115;

	class CharacterAtlasFaceBehaviour : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_PROPERTY_ATLAS_DIVISION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterAtlasFaceBehaviour_TypeDefinitionIndex)->GetStaticField(0x13140);
		}
		static ::System::Int32* StaticGet_PROPERTY_USING_ATLAS_FACE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterAtlasFaceBehaviour_TypeDefinitionIndex)->GetStaticField(0x13144);
		}
		// static const ::System::String* KEYWORD_ATLAS_FACE; // 0x0
		::RPG::Client::RendererMaterialCache* _MatCache; // 0x18
		::UnityEngine::Vector4 _AtlasDivisionVec; // 0x20
		::System::Int32 _LastEmotionIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void Method_2_32F371754DD4B742(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_32F371754DD4B742_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_2_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_2_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_2_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_2_8594010D6A57C9BB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_1_OFFSET))(this);
		}

		::System::Void Method_2_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void Method_2_8FF354B64B657510(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8FF354B64B657510_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_EF9F68D628696187(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_EF9F68D628696187_OFFSET))(a1);
		}

		::RPG::Client::CharacterAtlasFace* get_OwnerMono()
		{
			return ((::RPG::Client::CharacterAtlasFace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FC8B0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0x92FCB50)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x92FCA40)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x92FCCF0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_4B67C1952BA6377E_OFFSET UNITYSDK_OFFSET(0x92FC620)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0x92FCB00)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x92FC9A0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8FF354B64B657510_OFFSET UNITYSDK_OFFSET(0x92FCBA0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x92FD060)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x92FC730)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x92FD030)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x92FC5A0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FD0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterAtlasFaceBehaviour_TypeDefinitionIndex = 57513;

	class CharacterAtlasFaceBehaviour : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_PROPERTY_USING_ATLAS_FACE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterAtlasFaceBehaviour_TypeDefinitionIndex)->GetStaticField(0x11E50);
		}
		static ::System::Int32* StaticGet_PROPERTY_ATLAS_DIVISION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterAtlasFaceBehaviour_TypeDefinitionIndex)->GetStaticField(0x11E54);
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

		::System::Void Method_2_4B67C1952BA6377E(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_4B67C1952BA6377E_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_2_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_2_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_2_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
		}

		::System::Void Method_2_8594010D6A57C9BB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8594010D6A57C9BB_1_OFFSET))(this);
		}

		::System::Void Method_2_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Void Method_2_8FF354B64B657510(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_8FF354B64B657510_OFFSET))(this, a1);
		}

		::RPG::Client::CharacterAtlasFace* get_OwnerMono()
		{
			return ((::RPG::Client::CharacterAtlasFace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET))(this);
		}

		::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}

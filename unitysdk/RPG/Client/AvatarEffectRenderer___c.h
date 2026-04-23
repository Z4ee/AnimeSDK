#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarEffectRendererBehavior_AvatarEffectMat; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_AVATAREFFECTRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D7B7B0)
#define RPG_CLIENT_AVATAREFFECTRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D7B7F0)
#define RPG_CLIENT_AVATAREFFECTRENDERER___C__GET_MATERIALS_B__3_0_OFFSET UNITYSDK_OFFSET(0x9D7B800)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEffectRenderer___c_TypeDefinitionIndex = 64764;

	class AvatarEffectRenderer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarEffectRenderer___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarEffectRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x33860);
		}
		static ::System::Func_2<::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat*, ::UnityEngine::Material*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x33868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* _get_materials_b__3_0(::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat* a)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER___C__GET_MATERIALS_B__3_0_OFFSET))(this, a);
		}
	};
}

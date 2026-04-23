#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { class RendererSlots; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_AVATAREFFECTRENDERERBEHAVIOR_AVATAREFFECTMAT_GET_MATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D7B870)
#define RPG_CLIENT_AVATAREFFECTRENDERERBEHAVIOR_AVATAREFFECTMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D7DFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEffectRendererBehavior_AvatarEffectMat_TypeDefinitionIndex = 64766;

	class AvatarEffectRendererBehavior_AvatarEffectMat : public ::System::Object
	{
	public:
		::UnityEngine::Material* Material; // 0x10
		::Il2CppArray<::System::Int32>* PassIds; // 0x18
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* Targets; // 0x20
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder ExecutionOrder; // 0x28
		::System::Boolean AfterTransparent; // 0x2C
		::System::Boolean IgnoreMPB; // 0x2D
		::System::Boolean DrawMeshMode; // 0x2E
		::UnityEngine::Material* _MaterialInstance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERERBEHAVIOR_AVATAREFFECTMAT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_MaterialInstance()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERERBEHAVIOR_AVATAREFFECTMAT_GET_MATERIALINSTANCE_OFFSET))(this);
		}
	};
}

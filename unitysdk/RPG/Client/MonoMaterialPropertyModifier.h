#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMaterialPropertyModifier_MBProperty.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC12EEC0)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC12F040)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xC12F260)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC12EFC0)
#define RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xC12F3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialPropertyModifier_TypeDefinitionIndex = 64086;

	class MonoMaterialPropertyModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Int32 MaterialIndex; // 0x20
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty1; // 0x28
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty2; // 0x60
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty3; // 0x98
		::RPG::Client::MonoMaterialPropertyModifier_MBProperty MBProperty4; // 0xD0
		::System::Boolean KValueIsOn; // 0x108
		::UnityEngine::MaterialPropertyBlock* Field_5_7; // 0x110
		::System::Boolean Field_5_8; // 0x118
		::Il2CppArray<::RPG::Client::MonoMaterialPropertyModifier_MBProperty>* Field_5_9; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALPROPERTYMODIFIER_METHOD_5_79830F666EE579C0_OFFSET))(this);
		}
	};
}

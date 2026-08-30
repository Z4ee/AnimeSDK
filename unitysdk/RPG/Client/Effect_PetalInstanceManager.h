#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class Effect_PetalInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15E8E770)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x15E8E470)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x15E8E890)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x15E8EAE0)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E8E420)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E8EC50)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8EC40)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PetalInstanceManager_TypeDefinitionIndex = 70495;

	class Effect_PetalInstanceManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_AMMOIPKBFIM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x13F40);
		}
		static ::System::Int32* StaticGet_PNLOFMICNKO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x13F44);
		}
		::UnityEngine::Mesh* TargetMesh; // 0x18
		::UnityEngine::Material* TargetMat; // 0x20
		::UnityEngine::Color Color; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* BHCOBPEHBBD; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* PEIKACKENHJ; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Effect_PetalInstance*>* GBGADBJMECH; // 0x48
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_3B7145E79424FB75()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_3B7145E79424FB75_OFFSET))(this);
		}

		::System::Void Method_5_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_5_FE268EA0D7E91617()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_FE268EA0D7E91617_OFFSET))(this);
		}
	};
}

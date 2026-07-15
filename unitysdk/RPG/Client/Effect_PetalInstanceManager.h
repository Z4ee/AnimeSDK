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

#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1511D420)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1511D120)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1511D540)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x1511D790)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1511D0D0)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1511D900)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1511D8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PetalInstanceManager_TypeDefinitionIndex = 67373;

	class Effect_PetalInstanceManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x14860);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x14864);
		}
		::UnityEngine::Mesh* TargetMesh; // 0x18
		::UnityEngine::Material* TargetMat; // 0x20
		::UnityEngine::Color Color; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_5_5; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* Field_5_6; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Effect_PetalInstance*>* Field_5_7; // 0x48
		::UnityEngine::MaterialPropertyBlock* Field_5_8; // 0x50

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

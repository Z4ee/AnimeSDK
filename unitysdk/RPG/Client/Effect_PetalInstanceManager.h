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

#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1F8720)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xA1F8840)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0xA1F8AB0)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xA1F8490)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1F8440)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1F8C20)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8C10)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PetalInstanceManager_TypeDefinitionIndex = 65022;

	class Effect_PetalInstanceManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x11650);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PetalInstanceManager_TypeDefinitionIndex)->GetStaticField(0x11654);
		}
		::UnityEngine::Mesh* TargetMesh; // 0x18
		::UnityEngine::Material* TargetMat; // 0x20
		::UnityEngine::Color Color; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_5_3; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* Field_5_4; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Effect_PetalInstance*>* Field_5_5; // 0x48
		::UnityEngine::MaterialPropertyBlock* Field_5_6; // 0x50

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

		::System::Void Method_5_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_5_08BBACE844405300()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_08BBACE844405300_OFFSET))(this);
		}

		::System::Void Method_5_554208C84546EE8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_METHOD_5_554208C84546EE8E_OFFSET))(this);
		}
	};
}

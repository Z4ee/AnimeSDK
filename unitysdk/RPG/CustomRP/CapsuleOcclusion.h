#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7C1A8A123B7D94EB;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class CapsuleOcclusion_CapsuleTransform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA7A9800)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0xA7AA590)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_FORCESETLOCALLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xA7A9B10)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_001509067960A85A_OFFSET UNITYSDK_OFFSET(0xA7AA0C0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xA7A9B60)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA7A9910)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xA7A9D50)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7A97C0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_CA7F5040028E8432_OFFSET UNITYSDK_OFFSET(0xA7A9190)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7A9840)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA7AA2E0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETCAPSULELIGHTDIR_OFFSET UNITYSDK_OFFSET(0xA7A9A90)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETDEFAULTBONES_OFFSET UNITYSDK_OFFSET(0xA7A9480)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA7A9760)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_TESTCAPSULEDIR_OFFSET UNITYSDK_OFFSET(0xA7A99D0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA7AA3F0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7AA670)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AA610)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleOcclusion_TypeDefinitionIndex = 41916;

	class CapsuleOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_0()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CapsuleOcclusion_TypeDefinitionIndex)->GetStaticField(0x40730);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_1()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CapsuleOcclusion_TypeDefinitionIndex)->GetStaticField(0x40738);
		}
		::System::Single occulusionScale; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::CapsuleOcclusion_CapsuleTransform*>* capsulesList; // 0x20
		::Class_1_7C1A8A123B7D94EB* Field_5_4; // 0x28
		::RPG::Client::EnvironmentSystem* Field_5_5; // 0x30
		::System::Boolean Field_5_6; // 0x38
		::UnityEngine::GameObject* Field_5_7; // 0x40
		::System::Boolean Field_5_8; // 0x48
		::System::Boolean isOverride; // 0x49
		::UnityEngine::Vector3 lightDir; // 0x4C
		::UnityEngine::Mesh* smallBall; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION__CCTOR_OFFSET))();
		}

		::System::Void Method_5_CA7F5040028E8432(::RPG::CustomRP::CapsuleOcclusion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CapsuleOcclusion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_CA7F5040028E8432_OFFSET))(this, a1);
		}

		::System::Void SetDefaultBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SETDEFAULTBONES_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void TestCapsuleDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_TESTCAPSULEDIR_OFFSET))(this);
		}

		::System::Void setCapsuleLightDir(::System::Boolean a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SETCAPSULELIGHTDIR_OFFSET))(this, a1, a2);
		}

		::System::Void ForceSetLocalLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_FORCESETLOCALLIGHTDIR_OFFSET))(this);
		}

		::System::Void Method_5_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_A1C7122184516C18_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_5_001509067960A85A(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_001509067960A85A_OFFSET))(this, a1);
		}

		static ::System::Void DrawWireCapsule(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET))(a1, a2, a3);
		}
	};
}

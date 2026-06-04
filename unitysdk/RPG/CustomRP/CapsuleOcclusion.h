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

#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xCC52420)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0xCC53220)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_FORCESETLOCALLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xCC52700)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xCC52750)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xCC52940)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_81324F8D98C88EDA_OFFSET UNITYSDK_OFFSET(0xCC51D70)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC524F0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC523E0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_DE41669E7C7D4E6C_OFFSET UNITYSDK_OFFSET(0xCC52D70)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC52460)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCC52FB0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETCAPSULELIGHTDIR_OFFSET UNITYSDK_OFFSET(0xCC52680)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETDEFAULTBONES_OFFSET UNITYSDK_OFFSET(0xCC520F0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xCC52380)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_TESTCAPSULEDIR_OFFSET UNITYSDK_OFFSET(0xCC525C0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xCC530C0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC53300)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0xCC532A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleOcclusion_TypeDefinitionIndex = 48506;

	class CapsuleOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_0()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CapsuleOcclusion_TypeDefinitionIndex)->GetStaticField(0x62940);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_1()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CapsuleOcclusion_TypeDefinitionIndex)->GetStaticField(0x62948);
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

		::System::Void Method_5_81324F8D98C88EDA(::RPG::CustomRP::CapsuleOcclusion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CapsuleOcclusion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_81324F8D98C88EDA_OFFSET))(this, a1);
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

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_9681042564541CD6_OFFSET))(this);
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

		::System::Void Method_5_51BBA01F511E6107()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_51BBA01F511E6107_OFFSET))(this);
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

		::UnityEngine::Matrix4x4 Method_5_DE41669E7C7D4E6C(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_METHOD_5_DE41669E7C7D4E6C_OFFSET))(this, a1);
		}

		static ::System::Void DrawWireCapsule(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET))(a1, a2, a3);
		}
	};
}

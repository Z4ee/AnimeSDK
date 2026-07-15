#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoNPCDirectionDissolve_DissolveSpace.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18C62A90)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x18C624A0)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x18C62600)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_BC7EA5929ED4589D_OFFSET UNITYSDK_OFFSET(0x18C62730)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_F15BB39D73E654DD_OFFSET UNITYSDK_OFFSET(0x18C627A0)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C63180)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C61A90)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C62410)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C633A0)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C63390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNPCDirectionDissolve_TypeDefinitionIndex = 67015;

	class MonoNPCDirectionDissolve : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xEF50);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xEF54);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xEF58);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xEF5C);
		}
		::System::Single Field_5_4; // 0x18
		::System::Boolean EnableDissolve; // 0x1C
		::RPG::Client::MonoNPCDirectionDissolve_DissolveSpace _DissolveSpace; // 0x20
		::System::Boolean DissolveInited; // 0x24
		::UnityEngine::Transform* Root_M; // 0x28
		::System::Single Root_MCenterAdjustment; // 0x30
		::UnityEngine::Vector3 LocalDissolveDirection; // 0x34
		::UnityEngine::Transform* DissolveTargetPlanet; // 0x40
		::System::Boolean UpdateAlways; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_13; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_14; // 0x58
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* Field_5_15; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* Field_5_16; // 0x68
		::System::Collections::Generic::List_1<::System::Boolean>* Field_5_17; // 0x70
		::UnityEngine::Vector3 Field_5_18; // 0x78
		::UnityEngine::Vector3 Field_5_19; // 0x84
		::UnityEngine::Bounds Field_5_20; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_8CB9BDF340E2FC64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_8CB9BDF340E2FC64_OFFSET))(this);
		}

		::System::Void Method_5_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Boolean Method_5_BC7EA5929ED4589D(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_BC7EA5929ED4589D_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_F15BB39D73E654DD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_F15BB39D73E654DD_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONDISABLE_OFFSET))(this);
		}
	};
}

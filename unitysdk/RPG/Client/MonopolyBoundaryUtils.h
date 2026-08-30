#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonopolyWorldBoundary; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_GETVALIDMOVE_OFFSET UNITYSDK_OFFSET(0x1C29D960)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_4A3A44B26C9C3524_OFFSET UNITYSDK_OFFSET(0x1C29E230)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_CA96C44697B640C5_OFFSET UNITYSDK_OFFSET(0x1C29DAC0)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_F5FF82FB1EBC7B51_OFFSET UNITYSDK_OFFSET(0x1C29E5C0)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_REGISTERCURRENTBOUNDARYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C29D910)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C29E9E0)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29E9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBoundaryUtils_TypeDefinitionIndex = 72756;

	class MonopolyBoundaryUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_DHDOIBKDJFF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyBoundaryUtils_TypeDefinitionIndex)->GetStaticField(0x1B870);
		}
		::RPG::Client::MonopolyWorldBoundary* OFFPODABAEC; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* FPBIENMODOP; // 0x20
		::UnityEngine::Vector3 RecoverRotationParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS__CCTOR_OFFSET))();
		}

		::System::Void RegisterCurrentBoundaryProvider(::RPG::Client::MonopolyWorldBoundary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyWorldBoundary*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_REGISTERCURRENTBOUNDARYPROVIDER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetValidMove(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_GETVALIDMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_4A3A44B26C9C3524(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_4A3A44B26C9C3524_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_5_CA96C44697B640C5(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_CA96C44697B640C5_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_F5FF82FB1EBC7B51(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_METHOD_5_F5FF82FB1EBC7B51_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopTowerAnimBehavior_TowerDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_GET_SINGLETONINSTANCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1748C770)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_GET_TOWERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1748C750)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_1FDE3BA9363A99B1_1_OFFSET UNITYSDK_OFFSET(0x1748A560)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x1748A440)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x1748A4B0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_D324BB8C61889D31_OFFSET UNITYSDK_OFFSET(0x17489BE0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_SET_SINGLETONINSTANCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1748C780)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_SET_TOWERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1748C760)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1748B120)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_LoopTowerSlide_TypeDefinitionIndex = 70885;

	class LoopTowerAnimBehavior_LoopTowerSlide : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetGo; // 0x10
		::UnityEngine::Bounds RendererBounds; // 0x18
		::System::Single Weight; // 0x30
		::System::Boolean ForceAsignNext; // 0x34
		::System::Int32 NextIndex; // 0x38
		::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType _TowerDirectionType_k__BackingField; // 0x3C
		::System::Boolean IfKeepSingleton; // 0x40
		::System::Single Height; // 0x44
		::UnityEngine::GameObject* _SingletonInstanceObject_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE__CTOR_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType get_TowerDirectionType()
		{
			return ((::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_GET_TOWERDIRECTIONTYPE_OFFSET))(this);
		}

		::System::Void set_TowerDirectionType(::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_SET_TOWERDIRECTIONTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_SingletonInstanceObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_GET_SINGLETONINSTANCEOBJECT_OFFSET))(this);
		}

		::System::Void set_SingletonInstanceObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_SET_SINGLETONINSTANCEOBJECT_OFFSET))(this, a1);
		}

		::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
		}

		::System::Single Method_1_1FDE3BA9363A99B1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_1FDE3BA9363A99B1_OFFSET))(this);
		}

		::System::Single Method_1_1FDE3BA9363A99B1_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_1FDE3BA9363A99B1_1_OFFSET))(this);
		}

		::System::Void Method_1_D324BB8C61889D31(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_D324BB8C61889D31_OFFSET))(this, a1, a2);
		}
	};
}

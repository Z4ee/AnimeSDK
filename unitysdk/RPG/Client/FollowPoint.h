#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EFollowFreezeSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FollowPointMapping; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FOLLOWPOINT_GET_ISFOLLOWDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD0A90E0)
#define RPG_CLIENT_FOLLOWPOINT_GET_ISPOINTDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD0A9010)
#define RPG_CLIENT_FOLLOWPOINT_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0xD0A8A00)
#define RPG_CLIENT_FOLLOWPOINT_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD0A88A0)
#define RPG_CLIENT_FOLLOWPOINT_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0xD0A8F40)
#define RPG_CLIENT_FOLLOWPOINT_METHOD_1_D83D54151A7C7525_OFFSET UNITYSDK_OFFSET(0xD0A8790)
#define RPG_CLIENT_FOLLOWPOINT_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xD0A8B20)
#define RPG_CLIENT_FOLLOWPOINT_SET_ISFOLLOWDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD0A9140)
#define RPG_CLIENT_FOLLOWPOINT_SET_ISPOINTDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD0A9070)
#define RPG_CLIENT_FOLLOWPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A91B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FollowPoint_TypeDefinitionIndex = 68391;

	class FollowPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _PointTransformPosition; // 0x10
		::System::String* Name; // 0x20
		::UnityEngine::Transform* PointTransform; // 0x28
		::System::String* PointPath; // 0x30
		::UnityEngine::Transform* FollowTransform; // 0x38
		::System::String* FollowingPath; // 0x40
		::UnityEngine::Vector3 Offset; // 0x48
		::UnityEngine::Vector3 WorldOffset; // 0x54
		::UnityEngine::Vector3 EntityOffset; // 0x60
		::RPG::Client::EFollowFreezeSpace followFreezeFreezeSpace; // 0x6C
		::System::Boolean X; // 0x70
		::System::Boolean Y; // 0x71
		::System::Boolean Z; // 0x72
		::System::Boolean FollowRotation; // 0x73
		::UnityEngine::Vector3 OriginPos; // 0x74
		::UnityEngine::Transform* EntityRootTransform; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D83D54151A7C7525(::UnityEngine::Transform* a1, ::RPG::Client::FollowPointMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_METHOD_1_D83D54151A7C7525_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_METHOD_1_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
		}

		::System::Void Method_1_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_METHOD_1_BF972395CC722BF9_OFFSET))(this);
		}

		::System::Boolean get_IsPointDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_GET_ISPOINTDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsPointDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_SET_ISPOINTDYNAMIC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFollowDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_GET_ISFOLLOWDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsFollowDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_SET_ISFOLLOWDYNAMIC_OFFSET))(this, a1);
		}
	};
}

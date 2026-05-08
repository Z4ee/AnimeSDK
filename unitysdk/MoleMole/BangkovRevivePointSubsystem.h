#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x159BC710)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x159BC680)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x159BC880)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_TRYGETREVIVEPOINT_OFFSET UNITYSDK_OFFSET(0x159BC770)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x159BCBA0)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x159BCBC0)
#define MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x159BCC50)

namespace MoleMole
{
	inline static constexpr unsigned int BangkovRevivePointSubsystem_TypeDefinitionIndex = 40887;

	class BangkovRevivePointSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BangkovRevivePointSubsystem*>
	{
	public:
		// static const ::System::Int32 CacheSize = 0x10; // 0x0
		::Il2CppArray<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* _revivePoints; // 0x10
		::System::Int32 _head; // 0x18
		::System::Single _time; // 0x1C
		::System::Int32 _count; // 0x20
		::System::Int32 _interval; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_INITIALIZE_OFFSET))(this, interval);
		}

		::System::Boolean TryGetRevivePoint(::System::Int32 index, ::UnityEngine::Vector3& point, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_TRYGETREVIVEPOINT_OFFSET))(this, index, point, rotation);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREVIVEPOINTSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}

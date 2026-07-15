#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ReferenceStrictCheckType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_REFERENCEPOOLCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x19D49DF0)
#define RPG_REFERENCEPOOLCOMPONENT_GET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x19D49D00)
#define RPG_REFERENCEPOOLCOMPONENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19D49D60)
#define RPG_REFERENCEPOOLCOMPONENT_SET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x19D49D10)
#define RPG_REFERENCEPOOLCOMPONENT_START_OFFSET UNITYSDK_OFFSET(0x19D49E40)
#define RPG_REFERENCEPOOLCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D49F40)

namespace RPG
{
	inline static constexpr unsigned int ReferencePoolComponent_TypeDefinitionIndex = 49390;

	class ReferencePoolComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::ReferenceStrictCheckType m_EnableStrictCheck; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableStrictCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT_GET_ENABLESTRICTCHECK_OFFSET))(this);
		}

		::System::Void set_EnableStrictCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT_SET_ENABLESTRICTCHECK_OFFSET))(this, a1);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT_INITIALIZE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOLCOMPONENT_START_OFFSET))(this);
		}
	};
}

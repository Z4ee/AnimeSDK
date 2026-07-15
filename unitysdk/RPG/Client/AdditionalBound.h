#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ADDITIONALBOUND_GET_ADDITIONALBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x18AAABD0)
#define RPG_CLIENT_ADDITIONALBOUND_GET_ADDITIONALBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x18AAABB0)
#define RPG_CLIENT_ADDITIONALBOUND_SET_ADDITIONALBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x18AAABF0)
#define RPG_CLIENT_ADDITIONALBOUND_SET_ADDITIONALBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x18AAABC0)
#define RPG_CLIENT_ADDITIONALBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAAC00)

namespace RPG::Client
{
	inline static constexpr unsigned int AdditionalBound_TypeDefinitionIndex = 65815;

	class AdditionalBound : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _AdditionalBoundSize; // 0x18
		::UnityEngine::Bounds _AdditionalBoundFull; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIONALBOUND__CTOR_OFFSET))(this);
		}

		::System::Single get_AdditionalBoundSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIONALBOUND_GET_ADDITIONALBOUNDSIZE_OFFSET))(this);
		}

		::System::Void set_AdditionalBoundSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIONALBOUND_SET_ADDITIONALBOUNDSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_AdditionalBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIONALBOUND_GET_ADDITIONALBOUNDFULL_OFFSET))(this);
		}

		::System::Void set_AdditionalBoundFull(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIONALBOUND_SET_ADDITIONALBOUNDFULL_OFFSET))(this, a1);
		}
	};
}

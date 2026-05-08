#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/Utility/HeadingTracker_Item.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_HEADINGTRACKER_ADD_OFFSET UNITYSDK_OFFSET(0x1C472E80)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0x1C472E20)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_DECAYHISTORY_OFFSET UNITYSDK_OFFSET(0x1C473350)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_DECAY_OFFSET UNITYSDK_OFFSET(0x1C472E70)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_GETRELIABLEHEADING_OFFSET UNITYSDK_OFFSET(0x1C4734C0)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_GET_FILTERSIZE_OFFSET UNITYSDK_OFFSET(0x1C472E50)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_POPBOTTOM_OFFSET UNITYSDK_OFFSET(0x1C473140)
#define CINEMACHINE_UTILITY_HEADINGTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C472D80)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int HeadingTracker_TypeDefinitionIndex = 32647;

	class HeadingTracker : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_mDecayExponent()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HeadingTracker_TypeDefinitionIndex)->GetStaticField(0x7DC0);
		}
		::Il2CppArray<::Cinemachine::Utility::HeadingTracker_Item>* mHistory; // 0x10
		::System::Int32 mCount; // 0x18
		::System::Int32 mTop; // 0x1C
		::UnityEngine::Vector3 mHeadingSum; // 0x20
		::UnityEngine::Vector3 mLastGoodHeading; // 0x2C
		::System::Int32 mBottom; // 0x38
		::System::Single mWeightSum; // 0x3C
		::System::Single mWeightTime; // 0x40

		::System::Void _ctor(::System::Int32 filterSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER__CTOR_OFFSET))(this, filterSize);
		}

		::System::Int32 get_FilterSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_GET_FILTERSIZE_OFFSET))(this);
		}

		::System::Void ClearHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_CLEARHISTORY_OFFSET))(this);
		}

		static ::System::Single Decay(::System::Single time)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_DECAY_OFFSET))(time);
		}

		::System::Void Add(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_ADD_OFFSET))(this, velocity);
		}

		::System::Void PopBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_POPBOTTOM_OFFSET))(this);
		}

		::System::Void DecayHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_DECAYHISTORY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetReliableHeading()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_GETRELIABLEHEADING_OFFSET))(this);
		}
	};
}

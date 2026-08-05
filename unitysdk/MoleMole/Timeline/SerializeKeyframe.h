#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/WeightedMode.h"

#define MOLEMOLE_TIMELINE_SERIALIZEKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1973D5F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SerializeKeyframe_TypeDefinitionIndex = 56261;

	class SerializeKeyframe : public ::System::Object
	{
	public:
		::System::Single m_Time; // 0x10
		::System::Single m_Value; // 0x14
		::System::Single m_InTangent; // 0x18
		::System::Single m_OutTangent; // 0x1C
		::System::Int32 m_TangentMode; // 0x20
		::UnityEngine::WeightedMode m_WeightedMode; // 0x24
		::System::Single m_InWeight; // 0x28
		::System::Single m_OutWeight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SERIALIZEKEYFRAME__CTOR_OFFSET))(this);
		}
	};
}

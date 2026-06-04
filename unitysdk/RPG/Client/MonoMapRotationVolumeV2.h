#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOMAPROTATIONVOLUMEV2__CTOR_OFFSET UNITYSDK_OFFSET(0xC12D920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMapRotationVolumeV2_TypeDefinitionIndex = 64190;

	class MonoMapRotationVolumeV2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Triggers; // 0x18
		::System::Single PoseSwitchLineHalfLength; // 0x20
		::System::UInt32 PoseSwitcherPropID; // 0x24
		::System::String* ForbiddenZonePath; // 0x28
		::System::Single DisableForbiddenZoneDelay; // 0x30
		::System::String* PoseSwitcherRootPath; // 0x38
		::System::Single PoseSwitcherShowDelayTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPROTATIONVOLUMEV2__CTOR_OFFSET))(this);
		}
	};
}

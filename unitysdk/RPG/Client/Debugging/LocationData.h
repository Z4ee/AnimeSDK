#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Debugging/FormationPriorityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_DEBUGGING_LOCATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB737380)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int LocationData_TypeDefinitionIndex = 74315;

	class LocationData : public ::System::Object
	{
	public:
		::RPG::Client::Debugging::FormationPriorityType PriorityType; // 0x10
		::UnityEngine::Vector3 LocalPosition; // 0x14
		::System::Single LocalFaceDir; // 0x20
		::System::Boolean OverrideServant; // 0x24
		::UnityEngine::Vector3 ServantPos; // 0x28
		::System::Single ServantFaceDir; // 0x34
		::System::String* Comment; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_LOCATIONDATA__CTOR_OFFSET))(this);
		}
	};
}

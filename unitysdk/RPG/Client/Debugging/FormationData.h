#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Debugging/FormationDataServantMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Debugging { class LocationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGING_FORMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB737330)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int FormationData_TypeDefinitionIndex = 74316;

	class FormationData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean AdjustByTargetWidth; // 0x18
		::UnityEngine::Vector3 RootOffset; // 0x1C
		::RPG::Client::Debugging::FormationDataServantMode ServantMode; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Debugging::LocationData*>* LocationList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_FORMATIONDATA__CTOR_OFFSET))(this);
		}
	};
}

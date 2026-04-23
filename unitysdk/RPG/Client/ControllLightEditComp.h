#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ControllLightEditComp_LinkSlotInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D2DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ControllLightEditComp_TypeDefinitionIndex = 64702;

	class ControllLightEditComp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ControllLightEditComp_LinkSlotInfo*>* AssociatedLinkSlots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP__CTOR_OFFSET))(this);
		}
	};
}

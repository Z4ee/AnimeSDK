#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD66A8C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathControlBinder_TypeDefinitionIndex = 80070;

	class MechCraftTalentPathControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROLBINDER__CTOR_OFFSET))(this);
		}
	};
}

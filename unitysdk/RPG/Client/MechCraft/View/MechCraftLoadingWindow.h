#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_0_16E4307DCC419505_1501;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD63F5E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftLoadingWindow_TypeDefinitionIndex = 79975;

	class MechCraftLoadingWindow : public ::Sofa::BaseSofaWindow_1<::Class_0_16E4307DCC419505_1501*>
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_1501* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1501*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}

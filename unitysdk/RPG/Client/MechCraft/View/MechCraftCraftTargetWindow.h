#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_0_16E4307DCC419505_1496;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD638DC0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetWindow_TypeDefinitionIndex = 79951;

	class MechCraftCraftTargetWindow : public ::Sofa::BaseSofaWindow_1<::Class_0_16E4307DCC419505_1496*>
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_1496* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1496*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}

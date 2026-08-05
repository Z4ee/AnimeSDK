#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"

#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x188A0120)
#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188A03A0)
#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT___BASE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x188A03F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapElement_LocalPlayerContext_TypeDefinitionIndex = 71424;

	class UIThreeDMapElement_LocalPlayerContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT__CTOR_OFFSET))(this);
		}

		::Struct_2_032E3093F309FC91 GetWorldPosition()
		{
			return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::Struct_2_032E3093F309FC91 __base_GetWorldPosition()
		{
			return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT___BASE_GETWORLDPOSITION_OFFSET))(this);
		}
	};
}

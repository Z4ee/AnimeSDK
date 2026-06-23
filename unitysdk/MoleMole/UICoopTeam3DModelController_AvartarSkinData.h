#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_AVARTARSKINDATA_RELOADROLE_OFFSET UNITYSDK_OFFSET(0x175C5860)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_AVARTARSKINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x175C6910)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeam3DModelController_AvartarSkinData_TypeDefinitionIndex = 46178;

	class UICoopTeam3DModelController_AvartarSkinData : public ::System::Object
	{
	public:
		::System::Int32 SlotIndex; // 0x10
		::System::Int32 AvartarId; // 0x14
		::System::Int32 SkinId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_AVARTARSKINDATA__CTOR_OFFSET))(this);
		}

		::System::Void ReloadRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_AVARTARSKINDATA_RELOADROLE_OFFSET))(this);
		}
	};
}

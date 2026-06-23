#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12BD3A70)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x12BD3F40)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12BD3B80)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET UNITYSDK_OFFSET(0x12BD3D90)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD4010)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER___BASE_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x12BD40B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStreamingGameMarcelLayer_TypeDefinitionIndex = 63483;

	class MonoStreamingGameMarcelLayer : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET))(this);
		}

		::System::Void OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}

		::System::Void __base_OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER___BASE_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}
	};
}

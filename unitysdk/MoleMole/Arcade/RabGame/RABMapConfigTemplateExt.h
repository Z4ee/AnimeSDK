#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/RABMapConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_672.h"
#include "unitysdk/Struct_2_749BE91557627726_1.h"

class Class_0_16E4307DCC419505_7;
class Class_2_9EF8BB53DCF898D3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BD674F0)
#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1BD66F20)
#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD66C60)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RABMapConfigTemplateExt_TypeDefinitionIndex = 87887;

	class RABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::RABMapConfigTemplate
	{
	public:
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726_1>* Deploy1PCellsDescDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726_1>* NeutralCellsDescDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726_1>* Deploy2PCellsDescDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726_1>* CellsDescDict; // 0x60

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_672 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_672, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean OnCheckAndBuildConfigStructure(::Class_2_9EF8BB53DCF898D3* configMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_9EF8BB53DCF898D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET))(this, configMap);
		}

		::System::Int32 MoleMole_Arcade_RabGame_RABMapConfigTemplateInterface_get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET))(this);
		}
	};
}

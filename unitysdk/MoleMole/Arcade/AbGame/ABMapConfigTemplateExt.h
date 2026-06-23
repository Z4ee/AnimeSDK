#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/ABMapConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_790.h"
#include "unitysdk/Struct_2_749BE91557627726.h"

class Class_0_16E4307DCC419505_7;
class Class_2_B0F768D7B0826D2B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC0E820)
#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1CC0E250)
#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0DF90)

namespace MoleMole::Arcade::AbGame
{
	inline static constexpr unsigned int ABMapConfigTemplateExt_TypeDefinitionIndex = 88501;

	class ABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::ABMapConfigTemplate
	{
	public:
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726>* Deploy1PCellsDescDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726>* CellsDescDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726>* NeutralCellsDescDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Struct_2_749BE91557627726>* Deploy2PCellsDescDict; // 0x60

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_790 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_790, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean OnCheckAndBuildConfigStructure(::Class_2_B0F768D7B0826D2B* configMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_B0F768D7B0826D2B*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET))(this, configMap);
		}

		::System::Int32 MoleMole_Arcade_AbGame_ABMapConfigTemplateInterface_get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET))(this);
		}
	};
}

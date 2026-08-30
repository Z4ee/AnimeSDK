#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ElfFarmCellData; }

#define RPG_CLIENT_ELFRUNTIMECELL__CTOR_OFFSET UNITYSDK_OFFSET(0xCE915A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRuntimeCell_TypeDefinitionIndex = 68631;

	class ElfRuntimeCell : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ElfFarmCellData* CellData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRUNTIMECELL__CTOR_OFFSET))(this);
		}
	};
}

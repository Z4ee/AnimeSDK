#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0DC66B515DA14A6;
namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFCELL_CLEARCELL_OFFSET UNITYSDK_OFFSET(0xA221580)
#define RPG_CLIENT_ELFCELL_FILLCELL_OFFSET UNITYSDK_OFFSET(0xA2213B0)
#define RPG_CLIENT_ELFCELL__CTOR_OFFSET UNITYSDK_OFFSET(0xA221600)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCell_TypeDefinitionIndex = 63325;

	class ElfCell : public ::System::Object
	{
	public:
		::System::UInt32 ConfigID; // 0x10
		::UnityEngine::Transform* AttachPoint; // 0x18
		::System::String* _ModelPath; // 0x20
		::Class_1_E0DC66B515DA14A6* _CellSpawnAsyncCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL__CTOR_OFFSET))(this);
		}

		::System::Void FillCell(::RPG::Client::ElfFarmCellData* cellData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL_FILLCELL_OFFSET))(this, cellData);
		}

		::System::Void ClearCell()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL_CLEARCELL_OFFSET))(this);
		}
	};
}

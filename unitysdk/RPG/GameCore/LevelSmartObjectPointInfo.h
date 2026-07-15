#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SORestartMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_LEVELSMARTOBJECTPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B089F10)
#define RPG_GAMECORE_LEVELSMARTOBJECTPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08A120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectPointInfo_TypeDefinitionIndex = 16671;

	class LevelSmartObjectPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PosX; // 0x10
		::System::Single PosY; // 0x14
		::System::Single PosZ; // 0x18
		::System::Single RotY; // 0x1C
		::RPG::GameCore::SORestartMode RestartMode; // 0x20
		::RPG::GameCore::SOTaskConfig* RootTask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelSmartObjectPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSmartObjectPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

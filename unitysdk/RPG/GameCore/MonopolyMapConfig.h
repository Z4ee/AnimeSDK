#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyMapCell; }
namespace RPG::GameCore { class MonopolyMapCellUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYMAPCONFIG_METHOD_2_E9FA686D75135BB9_OFFSET UNITYSDK_OFFSET(0x1D2C1440)
#define RPG_GAMECORE_MONOPOLYMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C1650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapConfig_TypeDefinitionIndex = 16071;

	class MonopolyMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MapID; // 0x10
		::System::UInt32 StartCellID; // 0x14
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapCell*>* MonopolyCellMap; // 0x18
		::RPG::MVector3 StartCellPosition; // 0x20
		::RPG::GameCore::MonopolyMapCellUnit* NextCellUnitList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E9FA686D75135BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCONFIG_METHOD_2_E9FA686D75135BB9_OFFSET))(a1, a2);
		}
	};
}

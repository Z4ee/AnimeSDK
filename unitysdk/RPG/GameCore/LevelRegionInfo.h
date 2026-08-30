#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeInnerGraphEditorInfo; }
namespace RPG::GameCore { class LevelRegionConnectivity; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELREGIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1305D0)
#define RPG_GAMECORE_LEVELREGIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1307B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionInfo_TypeDefinitionIndex = 17195;

	class LevelRegionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RegionID; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelRegionConnectivity*>* ConnectivityList; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelRegionStateConfig*>* StateConfigList; // 0x20
		::System::Boolean DisableGroupLoadWhenHLOD; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*>* InnerGraphEditorInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

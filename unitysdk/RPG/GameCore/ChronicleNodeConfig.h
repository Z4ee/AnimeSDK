#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleNodeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChronicleConnectionConfig; }
namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHRONICLENODECONFIG_METHOD_2_93143C5D14A4B476_OFFSET UNITYSDK_OFFSET(0x1C250340)
#define RPG_GAMECORE_CHRONICLENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C250960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleNodeConfig_TypeDefinitionIndex = 18229;

	class ChronicleNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 World; // 0x14
		::System::Single PosX; // 0x18
		::System::Single PosY; // 0x1C
		::RPG::GameCore::ChronicleNodeType NodeType; // 0x20
		::System::UInt32 NodeNameParam; // 0x24
		::System::String* ImagePath; // 0x28
		::System::String* ImagePathFemale; // 0x30
		::System::UInt32 LastMission; // 0x38
		::System::UInt32 FinishMission; // 0x3C
		::System::UInt32 BelongingLine; // 0x40
		::Il2CppArray<::System::UInt32>* CompationPartnerList; // 0x48
		::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* CustomUnlockConditionList; // 0x50
		::System::String* SubGraphPath; // 0x58
		::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>* ConnectionList; // 0x60
		::System::Boolean IsBaseLine; // 0x68
		::System::Boolean IsForceExpand; // 0x69
		::System::UInt32 StartMission; // 0x6C
		::Il2CppArray<::RPG::GameCore::ChronicleCustomShowCondition*>* CustomShowConditionList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLENODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_93143C5D14A4B476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChronicleNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChronicleNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLENODECONFIG_METHOD_2_93143C5D14A4B476_OFFSET))(a1, a2);
		}
	};
}

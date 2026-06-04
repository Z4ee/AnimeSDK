#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeInnerConnectInfo; }
namespace RPG::GameCore { class LevelNavNodeInnerNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeInnerTransitInfo; }

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987E940)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1987EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphInfo_TypeDefinitionIndex = 16308;

	class LevelNavNodeInnerGraphInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelNavNodeInnerNodeInfo*>* InnerNodeList; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelNavNodeInnerTransitInfo*>* InnerTransitList; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelNavNodeInnerConnectInfo*>* ConnectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerGraphInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerGraphInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeInfo; }

#define RPG_GAMECORE_LEVELNAVGRAPHINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4D680)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavGraphInfo_TypeDefinitionIndex = 16276;

	class LevelNavGraphInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelNavNodeInfo*>* NavNodeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavGraphInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavGraphInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}

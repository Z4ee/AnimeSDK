#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeInfo; }

#define RPG_GAMECORE_LEVEL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1986C310)
#define RPG_GAMECORE_LEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1986C400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Level_TypeDefinitionIndex = 16299;

	class Level : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelNavNodeInfo*>* NavNodeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Level*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Level*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVEL_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELINITSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1D5A50)
#define RPG_GAMECORE_LEVELINITSEQUECECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D5B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInitSequeceConfig_TypeDefinitionIndex = 18084;

	class LevelInitSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINITSEQUECECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelInitSequeceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelInitSequeceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINITSEQUECECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

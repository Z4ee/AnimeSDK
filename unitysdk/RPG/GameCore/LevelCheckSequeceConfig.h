#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17330300)
#define RPG_GAMECORE_LEVELCHECKSEQUECECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17330400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCheckSequeceConfig_TypeDefinitionIndex = 16796;

	class LevelCheckSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHECKSEQUECECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelCheckSequeceConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCheckSequeceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHECKSEQUECECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DD58A10)
#define RPG_GAMECORE_LEVELSTARTSEQUECECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD58BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelStartSequeceConfig_TypeDefinitionIndex = 18085;

	class LevelStartSequeceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsLoop; // 0x10
		::System::Int32 Order; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTARTSEQUECECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelStartSequeceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelStartSequeceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTARTSEQUECECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

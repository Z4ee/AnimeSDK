#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiddleMissionPackConfig; }

#define RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_METHOD_2_E9FD1BB0073C5D68_OFFSET UNITYSDK_OFFSET(0x1E3441F0)
#define RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3442B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleMiddleMissionPackConfig_TypeDefinitionIndex = 18758;

	class ChronicleMiddleMissionPackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiddleMissionPackConfig*>* MissionPackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E9FD1BB0073C5D68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChronicleMiddleMissionPackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChronicleMiddleMissionPackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_METHOD_2_E9FD1BB0073C5D68_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHRONICLELOGICCONNECTIONNODECONFIG_METHOD_2_0C14E553D0F4ED9A_OFFSET UNITYSDK_OFFSET(0x1964F1D0)
#define RPG_GAMECORE_CHRONICLELOGICCONNECTIONNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1964F2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleLogicConnectionNodeConfig_TypeDefinitionIndex = 18026;

	class ChronicleLogicConnectionNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::System::UInt32>* NextLineIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLELOGICCONNECTIONNODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0C14E553D0F4ED9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChronicleLogicConnectionNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChronicleLogicConnectionNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLELOGICCONNECTIONNODECONFIG_METHOD_2_0C14E553D0F4ED9A_OFFSET))(a1, a2);
		}
	};
}

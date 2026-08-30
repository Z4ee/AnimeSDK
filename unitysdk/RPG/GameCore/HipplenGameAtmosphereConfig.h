#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_METHOD_2_016FC56D324233D2_OFFSET UNITYSDK_OFFSET(0x1D3E2060)
#define RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E23D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameAtmosphereConfig_TypeDefinitionIndex = 16607;

	class HipplenGameAtmosphereConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::Il2CppArray<::System::UInt32>* NpcIDs; // 0x18
		::Il2CppArray<::System::UInt32>* PropIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_016FC56D324233D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameAtmosphereConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameAtmosphereConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_METHOD_2_016FC56D324233D2_OFFSET))(a1, a2);
		}
	};
}

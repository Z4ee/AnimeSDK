#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCSETHIDDEN_METHOD_3_B6F514041B8A9F79_OFFSET UNITYSDK_OFFSET(0x1CDCFA30)
#define RPG_GAMECORE_ADVNPCSETHIDDEN_METHOD_3_FC18D9AD8B46FA82_OFFSET UNITYSDK_OFFSET(0x1CDCFA70)
#define RPG_GAMECORE_ADVNPCSETHIDDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCSetHidden_TypeDefinitionIndex = 19995;

	class AdvNPCSetHidden : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHidden; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6F514041B8A9F79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSetHidden*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSetHidden*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN_METHOD_3_B6F514041B8A9F79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC18D9AD8B46FA82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSetHidden* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSetHidden*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN_METHOD_3_FC18D9AD8B46FA82_OFFSET))(a1, a2);
		}
	};
}

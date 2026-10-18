#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE_METHOD_3_6035F9FC37D8AFB8_OFFSET UNITYSDK_OFFSET(0x1D2FB6D0)
#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE_METHOD_3_CA25C5BE506BEE5B_OFFSET UNITYSDK_OFFSET(0x1D2FB690)
#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FB6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarStopMove_TypeDefinitionIndex = 10282;

	class PlanetFesAvatarStopMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA25C5BE506BEE5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesAvatarStopMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesAvatarStopMove*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE_METHOD_3_CA25C5BE506BEE5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6035F9FC37D8AFB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesAvatarStopMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesAvatarStopMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE_METHOD_3_6035F9FC37D8AFB8_OFFSET))(a1, a2);
		}
	};
}

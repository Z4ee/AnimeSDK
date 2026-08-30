#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_2F7C2546A7136363_OFFSET UNITYSDK_OFFSET(0x1D312DC0)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_9492EA95D6901E22_OFFSET UNITYSDK_OFFSET(0x1D312E00)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D312DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPlaySpinAnim_TypeDefinitionIndex = 10265;

	class PlanetFesPlaySpinAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PlanetFesAnimTypeEnum AnimType; // 0x18
		::System::String* AnimName; // 0x20
		::System::Boolean WaitAnimFinish; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F7C2546A7136363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesPlaySpinAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesPlaySpinAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_2F7C2546A7136363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9492EA95D6901E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_9492EA95D6901E22_OFFSET))(a1, a2);
		}
	};
}

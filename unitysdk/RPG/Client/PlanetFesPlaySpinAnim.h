#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_8C9A31F9B5800A33_OFFSET UNITYSDK_OFFSET(0x185EBF60)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_9492EA95D6901E22_OFFSET UNITYSDK_OFFSET(0x185EBFE0)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x185EBFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPlaySpinAnim_TypeDefinitionIndex = 10149;

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

		static ::System::Void Method_3_8C9A31F9B5800A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesPlaySpinAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesPlaySpinAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_8C9A31F9B5800A33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9492EA95D6901E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_METHOD_3_9492EA95D6901E22_OFFSET))(a1, a2);
		}
	};
}

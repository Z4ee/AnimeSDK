#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PLANETFESAVATARMOVETO_METHOD_3_5B19D22B475C30C1_OFFSET UNITYSDK_OFFSET(0x193BBA00)
#define RPG_CLIENT_PLANETFESAVATARMOVETO_METHOD_3_C6A7ED31A42B57FD_OFFSET UNITYSDK_OFFSET(0x193BBA80)
#define RPG_CLIENT_PLANETFESAVATARMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x193BBA50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveTo_TypeDefinitionIndex = 9953;

	class PlanetFesAvatarMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Position; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B19D22B475C30C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesAvatarMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesAvatarMoveTo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO_METHOD_3_5B19D22B475C30C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6A7ED31A42B57FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesAvatarMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesAvatarMoveTo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO_METHOD_3_C6A7ED31A42B57FD_OFFSET))(a1, a2);
		}
	};
}

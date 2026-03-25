#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_0AE9144B683146C5_OFFSET UNITYSDK_OFFSET(0x16E84710)
#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_8922315BEA21C8EF_OFFSET UNITYSDK_OFFSET(0x16E847E0)
#define RPG_CLIENT_BYPLANTFESISINMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E84790)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInMove_TypeDefinitionIndex = 9979;

	class ByPlantFesIsInMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0AE9144B683146C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_0AE9144B683146C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8922315BEA21C8EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_8922315BEA21C8EF_OFFSET))(a1, a2);
		}
	};
}

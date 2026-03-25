#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK_METHOD_3_3E2015404BF1064A_OFFSET UNITYSDK_OFFSET(0x1704CF10)
#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK_METHOD_3_72DF6D6BDE7BE683_OFFSET UNITYSDK_OFFSET(0x1704CE90)
#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1704CEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceLookAtCatByRank_TypeDefinitionIndex = 22347;

	class CakeRaceLookAtCatByRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CatRank; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72DF6D6BDE7BE683(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceLookAtCatByRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK_METHOD_3_72DF6D6BDE7BE683_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E2015404BF1064A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceLookAtCatByRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK_METHOD_3_3E2015404BF1064A_OFFSET))(a1, a2);
		}
	};
}

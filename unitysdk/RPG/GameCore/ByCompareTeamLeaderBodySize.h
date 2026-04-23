#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_3A5B2F9C4760CC2D_OFFSET UNITYSDK_OFFSET(0x1873FD40)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET UNITYSDK_OFFSET(0x1873FE10)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873FDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderBodySize_TypeDefinitionIndex = 20079;

	class ByCompareTeamLeaderBodySize : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3A5B2F9C4760CC2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_3A5B2F9C4760CC2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_948AF340B74934C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET))(a1, a2);
		}
	};
}

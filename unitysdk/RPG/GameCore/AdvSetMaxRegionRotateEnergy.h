#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_METHOD_3_703101615B37F54B_OFFSET UNITYSDK_OFFSET(0x194374C0)
#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_METHOD_3_94EBAE5A74DC3F7B_OFFSET UNITYSDK_OFFSET(0x19437430)
#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x19437490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetMaxRegionRotateEnergy_TypeDefinitionIndex = 19774;

	class AdvSetMaxRegionRotateEnergy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94EBAE5A74DC3F7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_METHOD_3_94EBAE5A74DC3F7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_703101615B37F54B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_METHOD_3_703101615B37F54B_OFFSET))(a1, a2);
		}
	};
}

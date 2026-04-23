#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_METHOD_3_CF44DB7B58D2D0FD_OFFSET UNITYSDK_OFFSET(0x187B54A0)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_METHOD_3_EAE0336F73D24EE0_OFFSET UNITYSDK_OFFSET(0x187B5420)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x187B5470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitDragPropByCatRank_TypeDefinitionIndex = 23314;

	class CakeRaceWaitDragPropByCatRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CatRank; // 0x18
		::System::Int32 Step; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 ItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EAE0336F73D24EE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_METHOD_3_EAE0336F73D24EE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF44DB7B58D2D0FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_METHOD_3_CF44DB7B58D2D0FD_OFFSET))(a1, a2);
		}
	};
}

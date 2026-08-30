#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITDRAGPROP_METHOD_3_CD2FB5707335E510_OFFSET UNITYSDK_OFFSET(0x1D105420)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROP_METHOD_3_EBB77624CE7D9975_OFFSET UNITYSDK_OFFSET(0x1D1053E0)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D105410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitDragProp_TypeDefinitionIndex = 24023;

	class CakeRaceWaitDragProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 GridPosX; // 0x18
		::System::Int32 GridPosZ; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 ItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBB77624CE7D9975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitDragProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitDragProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP_METHOD_3_EBB77624CE7D9975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD2FB5707335E510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitDragProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitDragProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP_METHOD_3_CD2FB5707335E510_OFFSET))(a1, a2);
		}
	};
}

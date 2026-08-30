#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM_METHOD_3_BB148F1002866015_OFFSET UNITYSDK_OFFSET(0x1DCB2520)
#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM_METHOD_3_DA3B33BB29F61544_OFFSET UNITYSDK_OFFSET(0x1DCB2570)
#define RPG_GAMECORE_FORMATIONMOVEADDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveAddStream_TypeDefinitionIndex = 21008;

	class FormationMoveAddStream : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CurveList; // 0x18
		::Il2CppArray<::System::UInt32>* GroupList; // 0x20
		::System::Single Speed; // 0x28
		::System::Int32 SplitCount; // 0x2C
		::System::Single AheadDistance; // 0x30
		::System::Int32 TeleportLod; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB148F1002866015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveAddStream*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveAddStream*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM_METHOD_3_BB148F1002866015_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA3B33BB29F61544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveAddStream* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveAddStream*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDSTREAM_METHOD_3_DA3B33BB29F61544_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_1_OFFSET UNITYSDK_OFFSET(0xFF01160)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_OFFSET UNITYSDK_OFFSET(0xFF010D0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6D6250)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_1_OFFSET UNITYSDK_OFFSET(0xFF01110)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_2_OFFSET UNITYSDK_OFFSET(0xFF01220)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_3_OFFSET UNITYSDK_OFFSET(0xFF01270)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_4_OFFSET UNITYSDK_OFFSET(0xFF012C0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_5_OFFSET UNITYSDK_OFFSET(0xFF01310)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_OFFSET UNITYSDK_OFFSET(0xFF01080)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6D6240)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMove_GamePlayIndex_TypeDefinitionIndex = 81259;

	struct alignas(4) CurveMove_GamePlayIndex
	{
		::System::Int32 _value; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_OFFSET))(a1, a2);
		}

		static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_2_113D492E8CB1C3A7(::System::Int32 a1)
		{
			return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_1(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_2_113D492E8CB1C3A7_1(::MoleMole::Battle::CurveMove_GamePlayIndex a1)
		{
			return ((::System::Int32(*)(::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_1_OFFSET))(a1);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_2(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_3(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_4(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_5(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_5_OFFSET))(a1, a2);
		}
	};
}

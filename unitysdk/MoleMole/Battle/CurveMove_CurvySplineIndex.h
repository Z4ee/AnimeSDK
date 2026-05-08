#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6AFE20)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_7458A09AF41B5037_1_OFFSET UNITYSDK_OFFSET(0xF95C3A0)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_7458A09AF41B5037_OFFSET UNITYSDK_OFFSET(0xF95C360)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_1_OFFSET UNITYSDK_OFFSET(0xF95C150)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_2_OFFSET UNITYSDK_OFFSET(0xF95C1A0)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_3_OFFSET UNITYSDK_OFFSET(0xF95C1F0)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_4_OFFSET UNITYSDK_OFFSET(0xF95C2C0)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_5_OFFSET UNITYSDK_OFFSET(0xF95C310)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_OFFSET UNITYSDK_OFFSET(0xF95C100)
#define MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6AFE10)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMove_CurvySplineIndex_TypeDefinitionIndex = 71482;

	struct alignas(4) CurveMove_CurvySplineIndex
	{
		::System::Int32 _value; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Method_2_A43044913126BD48(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_A43044913126BD48_1(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_A43044913126BD48_2(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_A43044913126BD48_3(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_3_OFFSET))(a1, a2);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}

		static ::System::Boolean Method_2_A43044913126BD48_4(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_A43044913126BD48_5(::MoleMole::Battle::CurveMove_CurvySplineIndex a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_A43044913126BD48_5_OFFSET))(a1, a2);
		}

		static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_2_7458A09AF41B5037(::System::Int32 a1)
		{
			return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_7458A09AF41B5037_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_7458A09AF41B5037_1(::MoleMole::Battle::CurveMove_CurvySplineIndex a1)
		{
			return ((::System::Int32(*)(::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_CURVYSPLINEINDEX_METHOD_2_7458A09AF41B5037_1_OFFSET))(a1);
		}
	};
}

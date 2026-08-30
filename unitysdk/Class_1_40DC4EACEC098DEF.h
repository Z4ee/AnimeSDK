#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_40DC4EACEC098DEF_METHOD_1_1CB0618159446D62_OFFSET UNITYSDK_OFFSET(0x19748850)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_222F76C72C597CBF_OFFSET UNITYSDK_OFFSET(0x197489D0)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_25FEAF91C5DED4E2_OFFSET UNITYSDK_OFFSET(0x19747F50)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_43D5EB46B9A7CC2F_OFFSET UNITYSDK_OFFSET(0x19748480)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_457771A85CC39410_OFFSET UNITYSDK_OFFSET(0x19748610)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_7640C0030930953C_OFFSET UNITYSDK_OFFSET(0x19747AE0)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_A0DE63EB877F8E90_OFFSET UNITYSDK_OFFSET(0x19747A70)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_AE7430D862771099_OFFSET UNITYSDK_OFFSET(0x19748B00)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_B1169044DAD54EDF_OFFSET UNITYSDK_OFFSET(0x19748270)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_C946C83AA3C6AF43_OFFSET UNITYSDK_OFFSET(0x19748710)
#define CLASS_1_40DC4EACEC098DEF_METHOD_1_EB4B924E30284D0E_OFFSET UNITYSDK_OFFSET(0x19748140)

inline static constexpr unsigned int Class_1_40DC4EACEC098DEF_TypeDefinitionIndex = 36589;

class Class_1_40DC4EACEC098DEF : public ::System::Object
{
public:
	static ::RPG::GameCore::CakeRaceCurveType Method_1_A0DE63EB877F8E90(::RPG::GameCore::CakeRaceAIState a1, ::RPG::GameCore::CakeRaceMoveState a2)
	{
		return ((::RPG::GameCore::CakeRaceCurveType(*)(::RPG::GameCore::CakeRaceAIState, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_A0DE63EB877F8E90_OFFSET))(a1, a2);
	}

	static ::RPG::MVector3 Method_1_7640C0030930953C(::RPG::GameCore::CakeRaceCurveType a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::MVector3 a5, ::System::Single a6, ::RPG::MVector3 a7, ::RPG::GameCore::FloatCurve* a8)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceCurveType, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_7640C0030930953C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::RPG::MVector3 Method_1_B1169044DAD54EDF(::RPG::GameCore::FloatCurve* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::MVector3 a5, ::System::Single a6)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::FloatCurve*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_B1169044DAD54EDF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::MVector3 Method_1_43D5EB46B9A7CC2F(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_43D5EB46B9A7CC2F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::MVector3 Method_1_25FEAF91C5DED4E2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::MVector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_25FEAF91C5DED4E2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::RPG::MVector3 Method_1_457771A85CC39410(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_457771A85CC39410_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_C946C83AA3C6AF43(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Single(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_C946C83AA3C6AF43_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_1CB0618159446D62(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Single(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_1CB0618159446D62_OFFSET))(a1, a2);
	}

	static ::RPG::MVector3 Method_1_222F76C72C597CBF(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector3 a4)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_222F76C72C597CBF_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::MVector3 Method_1_EB4B924E30284D0E(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::MVector3 a4)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_EB4B924E30284D0E_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::MVector3 Method_1_AE7430D862771099(::RPG::MVector3 a1, ::System::Single a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::GameCore::FloatCurve* a5)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_40DC4EACEC098DEF_METHOD_1_AE7430D862771099_OFFSET))(a1, a2, a3, a4, a5);
	}
};

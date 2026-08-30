#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveKeyframe; }

#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_2536FAB3F457CC6E_OFFSET UNITYSDK_OFFSET(0x1C905970)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_42A85AECDB27B1B2_OFFSET UNITYSDK_OFFSET(0x1C906060)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_6A803506E964196E_OFFSET UNITYSDK_OFFSET(0x1C905BC0)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_94537392CFEE3AB0_OFFSET UNITYSDK_OFFSET(0x1C905F40)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_9DD4C1629C4C2D36_1_OFFSET UNITYSDK_OFFSET(0x1C906000)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_9DD4C1629C4C2D36_OFFSET UNITYSDK_OFFSET(0x1C905FC0)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_AA358000AEA77C21_OFFSET UNITYSDK_OFFSET(0x1C905F50)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_AEC855A846971F89_OFFSET UNITYSDK_OFFSET(0x1C905E30)
#define CLASS_1_5FEBD6F8E3110D7D_METHOD_1_BFAEB801E734411D_OFFSET UNITYSDK_OFFSET(0x1C905DB0)

inline static constexpr unsigned int Class_1_5FEBD6F8E3110D7D_TypeDefinitionIndex = 24563;

class Class_1_5FEBD6F8E3110D7D : public ::System::Object
{
public:
	static ::System::Single Method_1_2536FAB3F457CC6E(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_2536FAB3F457CC6E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_6A803506E964196E(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_6A803506E964196E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_BFAEB801E734411D(::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>* a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_BFAEB801E734411D_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AEC855A846971F89(::RPG::GameCore::FloatCurveKeyframe* a1, ::RPG::GameCore::FloatCurveKeyframe* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurveKeyframe*, ::RPG::GameCore::FloatCurveKeyframe*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_AEC855A846971F89_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_94537392CFEE3AB0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_94537392CFEE3AB0_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_AA358000AEA77C21(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_AA358000AEA77C21_OFFSET))(a1);
	}

	static ::System::Single Method_1_9DD4C1629C4C2D36(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_9DD4C1629C4C2D36_OFFSET))(a1);
	}

	static ::System::Single Method_1_9DD4C1629C4C2D36_1(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_9DD4C1629C4C2D36_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_42A85AECDB27B1B2(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FEBD6F8E3110D7D_METHOD_1_42A85AECDB27B1B2_OFFSET))(a1, a2);
	}
};

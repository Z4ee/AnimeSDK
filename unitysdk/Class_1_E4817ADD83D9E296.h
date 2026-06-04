#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590_1;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace RPG::GameCore { class DiceCombatPresetConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4817ADD83D9E296_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AED6C0)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x18AED390)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_26843121CAECBCDC_OFFSET UNITYSDK_OFFSET(0x18AEDB00)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x18AED050)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_5661B8C9259A5003_OFFSET UNITYSDK_OFFSET(0x18AEDA60)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_87689B8E696E3BCF_OFFSET UNITYSDK_OFFSET(0x18AEDBA0)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_98B817B7553BB38A_OFFSET UNITYSDK_OFFSET(0x18AEDC20)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18AED750)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_DC71FF2FECBDC4D9_OFFSET UNITYSDK_OFFSET(0x18AED7D0)
#define CLASS_1_E4817ADD83D9E296_METHOD_1_F6AA5BF35264121E_OFFSET UNITYSDK_OFFSET(0x18AED850)
#define CLASS_1_E4817ADD83D9E296__CTOR_OFFSET UNITYSDK_OFFSET(0x18AED040)

inline static constexpr unsigned int Class_1_E4817ADD83D9E296_TypeDefinitionIndex = 34565;

class Class_1_E4817ADD83D9E296 : public ::System::Object
{
public:
	::Class_4_38B51614211CBC7D* Field_1_0; // 0x10
	::Class_2_3616FDE8A71D0590_1* Field_1_1; // 0x18
	::RPG::GameCore::DiceCombatPresetConfig* Field_1_2; // 0x20

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatPresetTurnConfig* Method_1_DC71FF2FECBDC4D9(::System::Int32 a1)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_DC71FF2FECBDC4D9_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorConfig* Method_1_F6AA5BF35264121E(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorConfig*(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_F6AA5BF35264121E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* Method_1_5661B8C9259A5003(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_5661B8C9259A5003_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_26843121CAECBCDC(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_26843121CAECBCDC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* Method_1_87689B8E696E3BCF(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_87689B8E696E3BCF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_98B817B7553BB38A(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_E4817ADD83D9E296_METHOD_1_98B817B7553BB38A_OFFSET))(this, a1, a2);
	}
};

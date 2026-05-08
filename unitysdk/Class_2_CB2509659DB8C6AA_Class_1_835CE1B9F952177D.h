#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C376DB68B1C74261;
class Class_1_D78EEB0971654883;
class Class_1_E5B7864412CDC074;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x13515970)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13515960)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_E90E34E126AFD16F_OFFSET UNITYSDK_OFFSET(0x13515940)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13515950)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D__CTOR_OFFSET UNITYSDK_OFFSET(0x13515930)

inline static constexpr unsigned int Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_TypeDefinitionIndex = 38711;

class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_8; // 0x10
	::Class_1_E5B7864412CDC074* Field_1_6; // 0x18
	::System::Action_1<::Class_5_AF65C3A968E836D2*>* Field_1_2; // 0x20
	::MoleMole::Config::ConfigHollowChessboard* Field_1_4; // 0x28
	::MoleMole::Config::ConfigHollowChessboardCamera* Field_1_5; // 0x30
	::Class_1_D78EEB0971654883* Field_1_0; // 0x38
	::Class_1_C376DB68B1C74261* Field_1_7; // 0x40
	::System::Boolean Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x49
	::System::Boolean Field_1_15; // 0x4A
	::System::Boolean Field_1_11; // 0x4B
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x4C
	::System::Boolean Field_1_12; // 0x5C
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_16; // 0x60
	::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E Field_1_13; // 0x68
	::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 Field_1_14; // 0x6C
	::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E Field_1_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E90E34E126AFD16F(::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_E90E34E126AFD16F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 Method_1_40C5968D970A15A2()
	{
		return ((::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_40C5968D970A15A2_OFFSET))(this);
	}
};

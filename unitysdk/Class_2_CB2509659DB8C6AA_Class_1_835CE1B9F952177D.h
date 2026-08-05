#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3581D8A71834B25;
class Class_1_D78EEB0971654883;
class Class_1_E5B7864412CDC074;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x12756E40)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12756E30)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_E90E34E126AFD16F_OFFSET UNITYSDK_OFFSET(0x12756E50)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12756E20)
#define CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D__CTOR_OFFSET UNITYSDK_OFFSET(0x12756E10)

inline static constexpr unsigned int Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_TypeDefinitionIndex = 70592;

class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_11; // 0x10
	::Class_1_D3581D8A71834B25* Field_1_4; // 0x18
	::Class_1_E5B7864412CDC074* Field_1_5; // 0x20
	::Class_1_D78EEB0971654883* Field_1_3; // 0x28
	::System::Action_1<::Class_5_DCFF91E03A93C03C*>* Field_1_1; // 0x30
	::MoleMole::Config::ConfigHollowChessboardCamera* Field_1_6; // 0x38
	::MoleMole::Config::ConfigHollowChessboard* Field_1_7; // 0x40
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_19; // 0x48
	::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E Field_1_2; // 0x50
	::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E Field_1_14; // 0x54
	::System::Boolean Field_1_10; // 0x58
	::System::Boolean Field_1_12; // 0x59
	::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 Field_1_13; // 0x5C
	::System::Boolean Field_1_9; // 0x60
	::System::Boolean Field_1_15; // 0x61
	::System::Boolean Field_1_8; // 0x62
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_0; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D__CTOR_OFFSET))(this);
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

	::System::Void Method_1_E90E34E126AFD16F(::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_CLASS_1_835CE1B9F952177D_METHOD_1_E90E34E126AFD16F_OFFSET))(this, a1);
	}
};

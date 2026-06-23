#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCameraMoveNode_ChessboardCameraMoveType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_4_85827D4A652CE321_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x12690910)
#define CLASS_4_85827D4A652CE321_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x12690920)
#define CLASS_4_85827D4A652CE321_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1268E6A0)
#define CLASS_4_85827D4A652CE321_METHOD_4_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x1268E6E0)
#define CLASS_4_85827D4A652CE321_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x126909B0)
#define CLASS_4_85827D4A652CE321_METHOD_4_F485AE7370063313_OFFSET UNITYSDK_OFFSET(0x1268E470)
#define CLASS_4_85827D4A652CE321__CTOR_OFFSET UNITYSDK_OFFSET(0x126908C0)

inline static constexpr unsigned int Class_4_85827D4A652CE321_TypeDefinitionIndex = 61858;

class Class_4_85827D4A652CE321 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::UnityEngine::AnimationCurve* Field_4_5; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_9; // 0x48
	::System::String* Field_4_2; // 0x50
	::System::String* Field_4_1; // 0x58
	::UnityEngine::Vector3 Field_4_6; // 0x60
	::MoleMole::Config::ConfigSetSection_Order Field_4_7; // 0x6C
	::System::Boolean Field_4_12; // 0x70
	::System::Boolean Field_4_13; // 0x71
	::System::Boolean Field_4_11; // 0x72
	::System::Boolean Field_4_10; // 0x73
	::System::Single Field_4_4; // 0x74
	::MoleMole::Config::ConfigChessboardCameraMoveNode_ChessboardCameraMoveType Field_4_0; // 0x78
	::UnityEngine::Vector3 Field_4_3; // 0x7C
	::MoleMole::Vector2Int Field_4_8; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F485AE7370063313(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_F485AE7370063313_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85827D4A652CE321_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};

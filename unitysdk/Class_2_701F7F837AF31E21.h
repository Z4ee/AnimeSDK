#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_701F7F837AF31E21_RaidTargetStatus.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class RaidTargetConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_701F7F837AF31E21_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1592F1A0)
#define CLASS_2_701F7F837AF31E21_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1592F290)
#define CLASS_2_701F7F837AF31E21_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1592E390)
#define CLASS_2_701F7F837AF31E21_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1592E450)
#define CLASS_2_701F7F837AF31E21_METHOD_2_3528E5AEECF3EE4B_OFFSET UNITYSDK_OFFSET(0x1592EA80)
#define CLASS_2_701F7F837AF31E21_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1592EEE0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1592E510)
#define CLASS_2_701F7F837AF31E21_METHOD_2_546B2709DA17C51F_OFFSET UNITYSDK_OFFSET(0x1592EBF0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1592F060)
#define CLASS_2_701F7F837AF31E21_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1592E4B0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x1592E680)
#define CLASS_2_701F7F837AF31E21_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1592E6D0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1592F0B0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1592ED00)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DB9193A51A3468D8_OFFSET UNITYSDK_OFFSET(0x1592EF30)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x1592EA20)
#define CLASS_2_701F7F837AF31E21_METHOD_2_E4CA96892168D5CE_OFFSET UNITYSDK_OFFSET(0x1592EFF0)
#define CLASS_2_701F7F837AF31E21__CTOR_OFFSET UNITYSDK_OFFSET(0x1592F360)
#define CLASS_2_701F7F837AF31E21__ONBIND_OFFSET UNITYSDK_OFFSET(0x1592E250)
#define CLASS_2_701F7F837AF31E21__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1592EBB0)

inline static constexpr unsigned int Class_2_701F7F837AF31E21_TypeDefinitionIndex = 71772;

class Class_2_701F7F837AF31E21 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Transform* LKHHMNJKLJH; // 0x60
	::UnityEngine::Animator* CFNGLMDMENE; // 0x68
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
	::UnityEngine::UI::Text* KJOELFMHMII; // 0x78
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* IKBDNACFFAO; // 0x80
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* POFPGBJGPPI; // 0x88
	::UnityEngine::UI::Text* CJFEKFECNMK; // 0x90
	::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x98
	::UnityEngine::UI::Text* ELHNGLBLMNI; // 0xA0
	::System::UInt32 IHCPGAIAJBL; // 0xA8
	::System::Int32 GHGGLAKNLAD; // 0xAC
	::System::Int32 FLECKDIKDJA; // 0xB0
	::Class_2_701F7F837AF31E21_RaidTargetStatus LODNGAGNLCB; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3528E5AEECF3EE4B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_3528E5AEECF3EE4B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_DB9193A51A3468D8(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_DB9193A51A3468D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_E4CA96892168D5CE(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_E4CA96892168D5CE_OFFSET))(this, a1, a2);
	}

	::Class_2_701F7F837AF31E21_RaidTargetStatus Method_2_546B2709DA17C51F(::RPG::GameCore::RaidTargetConfigRow* a1)
	{
		return ((::Class_2_701F7F837AF31E21_RaidTargetStatus(*)(::PVOID, ::RPG::GameCore::RaidTargetConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_546B2709DA17C51F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

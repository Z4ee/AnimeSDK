#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_701F7F837AF31E21_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA945670)
#define CLASS_2_701F7F837AF31E21_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA945760)
#define CLASS_2_701F7F837AF31E21_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA9448D0)
#define CLASS_2_701F7F837AF31E21_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xA944990)
#define CLASS_2_701F7F837AF31E21_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xA9455A0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_3528E5AEECF3EE4B_OFFSET UNITYSDK_OFFSET(0xA944FD0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA945420)
#define CLASS_2_701F7F837AF31E21_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA944A50)
#define CLASS_2_701F7F837AF31E21_METHOD_2_546B2709DA17C51F_OFFSET UNITYSDK_OFFSET(0xA945140)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA945C80)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA945C20)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA945BC0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xA9449F0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xA944BD0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xA944C20)
#define CLASS_2_701F7F837AF31E21_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xA945CE0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xA945250)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DB9193A51A3468D8_OFFSET UNITYSDK_OFFSET(0xA945470)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0xA944F70)
#define CLASS_2_701F7F837AF31E21_METHOD_2_E4CA96892168D5CE_OFFSET UNITYSDK_OFFSET(0xA945530)
#define CLASS_2_701F7F837AF31E21_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA9455B0)
#define CLASS_2_701F7F837AF31E21__CTOR_OFFSET UNITYSDK_OFFSET(0xA945830)
#define CLASS_2_701F7F837AF31E21__ONBIND_OFFSET UNITYSDK_OFFSET(0xA944790)
#define CLASS_2_701F7F837AF31E21__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA945100)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA945DA0)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA945E00)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA945B60)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA945D40)

inline static constexpr unsigned int Class_2_701F7F837AF31E21_TypeDefinitionIndex = 67131;

class Class_2_701F7F837AF31E21 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_3; // 0x70
	::UnityEngine::Animator* Field_2_4; // 0x78
	::RPG::GameCore::LevelDataComponent* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::UnityEngine::UI::Text* Field_2_7; // 0x90
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* Field_2_8; // 0x98
	::RPG::GameCore::BattleInstance* Field_2_9; // 0xA0
	::Class_2_701F7F837AF31E21_RaidTargetStatus Field_2_10; // 0xA8
	::System::Int32 Field_2_11; // 0xAC
	::System::UInt32 Field_2_12; // 0xB0
	::System::Int32 Field_2_13; // 0xB4

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

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

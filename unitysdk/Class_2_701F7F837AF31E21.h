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

#define CLASS_2_701F7F837AF31E21_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8754060)
#define CLASS_2_701F7F837AF31E21_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8754120)
#define CLASS_2_701F7F837AF31E21_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8753370)
#define CLASS_2_701F7F837AF31E21_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x8753430)
#define CLASS_2_701F7F837AF31E21_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x8753F60)
#define CLASS_2_701F7F837AF31E21_METHOD_2_3528E5AEECF3EE4B_OFFSET UNITYSDK_OFFSET(0x8753990)
#define CLASS_2_701F7F837AF31E21_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8753DE0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8753500)
#define CLASS_2_701F7F837AF31E21_METHOD_2_546B2709DA17C51F_OFFSET UNITYSDK_OFFSET(0x8753B00)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8754620)
#define CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x87545C0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x8753670)
#define CLASS_2_701F7F837AF31E21_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x87536C0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x87534A0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8754550)
#define CLASS_2_701F7F837AF31E21_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8754680)
#define CLASS_2_701F7F837AF31E21_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x8753C10)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DB9193A51A3468D8_OFFSET UNITYSDK_OFFSET(0x8753E30)
#define CLASS_2_701F7F837AF31E21_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x8753930)
#define CLASS_2_701F7F837AF31E21_METHOD_2_E4CA96892168D5CE_OFFSET UNITYSDK_OFFSET(0x8753EF0)
#define CLASS_2_701F7F837AF31E21_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x8753F70)
#define CLASS_2_701F7F837AF31E21__CTOR_OFFSET UNITYSDK_OFFSET(0x87541C0)
#define CLASS_2_701F7F837AF31E21__ONBIND_OFFSET UNITYSDK_OFFSET(0x87530B0)
#define CLASS_2_701F7F837AF31E21__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8753AC0)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8754750)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x87547B0)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x87544F0)
#define CLASS_2_701F7F837AF31E21___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x87546F0)

inline static constexpr unsigned int Class_2_701F7F837AF31E21_TypeDefinitionIndex = 58827;

class Class_2_701F7F837AF31E21 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::Animator* Field_2_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* Field_2_12; // 0x68
	::RPG::GameCore::LevelDataComponent* Field_2_7; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x78
	::System::Collections::Generic::Dictionary_2<::Class_2_701F7F837AF31E21_RaidTargetStatus, ::System::String*>* Field_2_13; // 0x80
	::UnityEngine::UI::Text* Field_2_3; // 0x88
	::UnityEngine::Transform* Field_2_1; // 0x90
	::UnityEngine::UI::Text* Field_2_0; // 0x98
	::UnityEngine::UI::Text* Field_2_2; // 0xA0
	::Class_2_701F7F837AF31E21_RaidTargetStatus Field_2_11; // 0xA8
	::System::Int32 Field_2_9; // 0xAC
	::System::UInt32 Field_2_8; // 0xB0
	::System::Int32 Field_2_10; // 0xB4

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

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
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

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
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

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_701F7F837AF31E21_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
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

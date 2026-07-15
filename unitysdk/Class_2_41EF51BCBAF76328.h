#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_3FF51CE8B91EFA1B;
class Class_1_56F79B35BC444FE2;
class Class_2_10FECA76F4010EF3;
class Class_2_ABB406266ACF9A2E;
class Class_2_ED349B47CFEDF9B8;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_41EF51BCBAF76328_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x152989F0)
#define CLASS_2_41EF51BCBAF76328_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15298B70)
#define CLASS_2_41EF51BCBAF76328_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15296A10)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET UNITYSDK_OFFSET(0x15298660)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x15298310)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x152985F0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_2EE5451A8927066E_OFFSET UNITYSDK_OFFSET(0x15297DF0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15298130)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x152974A0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15297100)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x152984F0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x152988C0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0x15297340)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_5031A97BC9F22DE2_OFFSET UNITYSDK_OFFSET(0x15297F10)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_56FE2EA783DDD2BA_OFFSET UNITYSDK_OFFSET(0x15297930)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_67600FA8688BAD61_OFFSET UNITYSDK_OFFSET(0x15297820)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x15297250)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_6DE4075AAE6438BC_OFFSET UNITYSDK_OFFSET(0x152975F0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x152979D0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x15297A90)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_8800E8CC95B74FDB_OFFSET UNITYSDK_OFFSET(0x15297BE0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x15297500)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x152973B0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x152983D0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_B07FEF75B659E00F_OFFSET UNITYSDK_OFFSET(0x152972F0)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_B2C8D4ADAD1FAB0A_OFFSET UNITYSDK_OFFSET(0x15298430)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15298800)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15298740)
#define CLASS_2_41EF51BCBAF76328_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15297B20)
#define CLASS_2_41EF51BCBAF76328_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15296A20)
#define CLASS_2_41EF51BCBAF76328__CTOR_OFFSET UNITYSDK_OFFSET(0x15298CD0)
#define CLASS_2_41EF51BCBAF76328__ONBIND_OFFSET UNITYSDK_OFFSET(0x15296A30)
#define CLASS_2_41EF51BCBAF76328__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x152970B0)
#define CLASS_2_41EF51BCBAF76328__ONTICK_OFFSET UNITYSDK_OFFSET(0x15298180)
#define CLASS_2_41EF51BCBAF76328___ONBIND_B__5_0_OFFSET UNITYSDK_OFFSET(0x15298DD0)

inline static constexpr unsigned int Class_2_41EF51BCBAF76328_TypeDefinitionIndex = 68988;

class Class_2_41EF51BCBAF76328 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_41EF51BCBAF76328** StaticGet__Instance_k__BackingField()
	{
		return (::Class_2_41EF51BCBAF76328**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41EF51BCBAF76328_TypeDefinitionIndex)->GetStaticField(0x44FF0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::UInt32 Field_2_6 = 0xD1; // 0x0
	// static const ::System::UInt32 Field_2_7 = 0xD2; // 0x0
	// static const ::System::UInt32 Field_2_8 = 0x1; // 0x0
	::UnityEngine::Transform* Field_2_9; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_10; // 0x68
	::UnityEngine::Transform* Field_2_11; // 0x70
	::UnityEngine::UI::Button* Field_2_12; // 0x78
	::UnityEngine::UI::Button* Field_2_13; // 0x80
	::UnityEngine::Animation* Field_2_14; // 0x88
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_15; // 0x90
	::UnityEngine::Animation* Field_2_16; // 0x98
	::UnityEngine::RectTransform* Field_2_17; // 0xA0
	::UnityEngine::Transform* Field_2_18; // 0xA8
	::RPG::Client::MonoClickOutsideDetect* Field_2_19; // 0xB0
	::Class_1_56F79B35BC444FE2* Field_2_20; // 0xB8
	::Class_2_ABB406266ACF9A2E* Field_2_21; // 0xC0
	::RPG::Client::BattleGamePhase* Field_2_22; // 0xC8
	::RPG::UINavigation::UINavigationZoneManager* Field_2_23; // 0xD0
	::Class_1_3FF51CE8B91EFA1B* Field_2_24; // 0xD8
	::Class_2_10FECA76F4010EF3* Field_2_25; // 0xE0
	::System::Boolean Field_2_26; // 0xE8
	::System::Boolean Field_2_27; // 0xE9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328__CTOR_OFFSET))(this);
	}

	static ::Class_2_41EF51BCBAF76328* get_Instance()
	{
		return ((::Class_2_41EF51BCBAF76328*(*)())((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_2_41EF51BCBAF76328* a1)
	{
		return ((::System::Void(*)(::Class_2_41EF51BCBAF76328*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B07FEF75B659E00F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_B07FEF75B659E00F_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DC99A0E8033A1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_4DC99A0E8033A1A2_OFFSET))(this);
	}

	::Class_2_ED349B47CFEDF9B8* Method_2_6DE4075AAE6438BC()
	{
		return ((::Class_2_ED349B47CFEDF9B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_6DE4075AAE6438BC_OFFSET))(this);
	}

	::System::Void Method_2_67600FA8688BAD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_67600FA8688BAD61_OFFSET))(this, a1);
	}

	::System::Void Method_2_56FE2EA783DDD2BA(::Class_2_ED349B47CFEDF9B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED349B47CFEDF9B8*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_56FE2EA783DDD2BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8800E8CC95B74FDB(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_8800E8CC95B74FDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2EE5451A8927066E(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_2EE5451A8927066E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5031A97BC9F22DE2(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_5031A97BC9F22DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C8D4ADAD1FAB0A(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_B2C8D4ADAD1FAB0A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__5_0(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_2_41EF51BCBAF76328___ONBIND_B__5_0_OFFSET))(this, a1);
	}
};

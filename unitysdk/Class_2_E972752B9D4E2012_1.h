#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_1EEA34A9E9EED962;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E972752B9D4E2012_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3FA730)
#define CLASS_2_E972752B9D4E2012_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA3FA850)
#define CLASS_2_E972752B9D4E2012_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA3F91B0)
#define CLASS_2_E972752B9D4E2012_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xA3F91D0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_1_OFFSET UNITYSDK_OFFSET(0xA3FA660)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xA3FA590)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xA3FA3C0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_1BDE9D8CAFA3B867_OFFSET UNITYSDK_OFFSET(0xA3FA050)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xA3F99B0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_368B5D43181B5CF0_OFFSET UNITYSDK_OFFSET(0xA3FA0E0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_3787E953EE385D05_OFFSET UNITYSDK_OFFSET(0xA3F9EB0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xA3F9AB0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_39EF8484D354ADC7_OFFSET UNITYSDK_OFFSET(0xA3F9750)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xA3F9390)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA3FAA30)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA3FAAF0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA3FA9D0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0xA3F9540)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0xA3FA520)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_B2FD964C82B25DEB_OFFSET UNITYSDK_OFFSET(0xA3F9960)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0xA3F9230)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_C6835D0742A4900A_OFFSET UNITYSDK_OFFSET(0xA3FA1A0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3F91E0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xA3FA2E0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xA3F9C10)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xA3F9D30)
#define CLASS_2_E972752B9D4E2012_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA3F91C0)
#define CLASS_2_E972752B9D4E2012_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FA940)
#define CLASS_2_E972752B9D4E2012_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xA3F90B0)
#define CLASS_2_E972752B9D4E2012_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F9CF0)
#define CLASS_2_E972752B9D4E2012_1__ONTICK_OFFSET UNITYSDK_OFFSET(0xA3F9A00)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3FABB0)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA3FAC10)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA3FA970)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3FAB50)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA3FAA90)

inline static constexpr unsigned int Class_2_E972752B9D4E2012_1_TypeDefinitionIndex = 67567;

class Class_2_E972752B9D4E2012_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::RPG::Client::AnimatorButton* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::UnityEngine::UI::Text* Field_2_5; // 0x70
	::RPG::Client::UIStateCtrl* Field_2_6; // 0x78
	::UnityEngine::UI::Image* Field_2_7; // 0x80
	::Class_3_1EEA34A9E9EED962* Field_2_8; // 0x88
	::UnityEngine::UI::Image* Field_2_9; // 0x90
	::System::Single Field_2_10; // 0x98
	::System::Boolean Field_2_11; // 0x9C
	::System::Single Field_2_12; // 0xA0
	::System::Single Field_2_13; // 0xA4
	::System::Int32 _Index_k__BackingField; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3787E953EE385D05(::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_3787E953EE385D05_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6835D0742A4900A(::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_C6835D0742A4900A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_39EF8484D354ADC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_39EF8484D354ADC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FD964C82B25DEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_B2FD964C82B25DEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_368B5D43181B5CF0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_368B5D43181B5CF0_OFFSET))(this, a1);
	}

	::Class_3_1EEA34A9E9EED962* Method_2_BAFE8DC12CA1CDF9()
	{
		return ((::Class_3_1EEA34A9E9EED962*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_1BDE9D8CAFA3B867(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_1BDE9D8CAFA3B867_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

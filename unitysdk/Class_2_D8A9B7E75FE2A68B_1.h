#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_D8A9B7E75FE2A68B_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB473500)
#define CLASS_2_D8A9B7E75FE2A68B_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB473620)
#define CLASS_2_D8A9B7E75FE2A68B_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB471CD0)
#define CLASS_2_D8A9B7E75FE2A68B_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB471CF0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_1_OFFSET UNITYSDK_OFFSET(0xB4733F0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xB4732E0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB473080)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_368B5D43181B5CF0_OFFSET UNITYSDK_OFFSET(0xB472700)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_3787E953EE385D05_OFFSET UNITYSDK_OFFSET(0xB472CC0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xB4728C0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39EF8484D354ADC7_OFFSET UNITYSDK_OFFSET(0xB472410)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xB471EE0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xB4727C0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9690E21CE863FF6C_OFFSET UNITYSDK_OFFSET(0xB472670)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0xB472200)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0xB473270)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_B2FD964C82B25DEB_OFFSET UNITYSDK_OFFSET(0xB472620)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0xB471D80)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_C6835D0742A4900A_OFFSET UNITYSDK_OFFSET(0xB472E60)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB471D30)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xB472FA0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0xB472B40)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xB472A20)
#define CLASS_2_D8A9B7E75FE2A68B_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB471CE0)
#define CLASS_2_D8A9B7E75FE2A68B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB473710)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xB471BD0)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB472B00)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONTICK_OFFSET UNITYSDK_OFFSET(0xB472810)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_1_TypeDefinitionIndex = 72321;

class Class_2_D8A9B7E75FE2A68B_1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single HGBCBJKAAMM; // 0x0
	// static const ::System::Single HNMKCGJBIII; // 0x0
	::UnityEngine::UI::Image* BHMFMBBLADC; // 0x60
	::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x68
	::UnityEngine::UI::Image* GFOKEABGEIO; // 0x70
	::Class_3_1EEA34A9E9EED962* NFCHKIHENAE; // 0x78
	::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x80
	::UnityEngine::UI::Text* KKNGAEAKKAM; // 0x88
	::UnityEngine::UI::Image* EDOPBFJNDBF; // 0x90
	::System::Single BFKCADADNCA; // 0x98
	::System::Int32 _Index_k__BackingField; // 0x9C
	::System::Boolean HAFCOEMEHNH; // 0xA0
	::System::Single FAFIAGJFGEF; // 0xA4
	::System::Single CLEBBBABPEI; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3787E953EE385D05(::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_3787E953EE385D05_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6835D0742A4900A(::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_C6835D0742A4900A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_39EF8484D354ADC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39EF8484D354ADC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FD964C82B25DEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_B2FD964C82B25DEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_368B5D43181B5CF0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_368B5D43181B5CF0_OFFSET))(this, a1);
	}

	::Class_3_1EEA34A9E9EED962* Method_2_BAFE8DC12CA1CDF9()
	{
		return ((::Class_3_1EEA34A9E9EED962*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_9690E21CE863FF6C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9690E21CE863FF6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

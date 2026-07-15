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

#define CLASS_2_D8A9B7E75FE2A68B_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18588F50)
#define CLASS_2_D8A9B7E75FE2A68B_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18589070)
#define CLASS_2_D8A9B7E75FE2A68B_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18587890)
#define CLASS_2_D8A9B7E75FE2A68B_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x185878B0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_1_OFFSET UNITYSDK_OFFSET(0x18588E40)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x18588D30)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x18588AD0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_368B5D43181B5CF0_OFFSET UNITYSDK_OFFSET(0x185887F0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_3787E953EE385D05_OFFSET UNITYSDK_OFFSET(0x185885C0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x185881C0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_39EF8484D354ADC7_OFFSET UNITYSDK_OFFSET(0x18587E60)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x18587AA0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x185880C0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9690E21CE863FF6C_OFFSET UNITYSDK_OFFSET(0x18588760)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x18587C50)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x18588CC0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_B2FD964C82B25DEB_OFFSET UNITYSDK_OFFSET(0x18588070)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0x18587940)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_C6835D0742A4900A_OFFSET UNITYSDK_OFFSET(0x185888B0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185878F0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x185889F0)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x18588440)
#define CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x18588320)
#define CLASS_2_D8A9B7E75FE2A68B_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x185878A0)
#define CLASS_2_D8A9B7E75FE2A68B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18589160)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x18587790)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18588400)
#define CLASS_2_D8A9B7E75FE2A68B_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x18588110)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_1_TypeDefinitionIndex = 69049;

class Class_2_D8A9B7E75FE2A68B_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::UnityEngine::UI::Text* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::RPG::Client::AnimatorButton* Field_2_5; // 0x70
	::UnityEngine::UI::Image* Field_2_6; // 0x78
	::RPG::Client::UIStateCtrl* Field_2_7; // 0x80
	::Class_3_1EEA34A9E9EED962* Field_2_8; // 0x88
	::UnityEngine::UI::Image* Field_2_9; // 0x90
	::System::Single Field_2_10; // 0x98
	::System::Int32 _Index_k__BackingField; // 0x9C
	::System::Single Field_2_12; // 0xA0
	::System::Boolean Field_2_13; // 0xA4
	::System::Single Field_2_14; // 0xA8

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

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_1_METHOD_2_7646FFE662147970_OFFSET))(this);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PlayerMotionProviderCameraMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4AF7185FBAAE5D87;
namespace RPG::Client::Prop { class PuzzleCameraControllerBase; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_26CC4FDC0664CC03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EF9870)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_00004B41EFDB322F_OFFSET UNITYSDK_OFFSET(0x9EFA450)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x9EF9B80)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_180CBD5001B70839_OFFSET UNITYSDK_OFFSET(0x9EF95B0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0x9EFAC20)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9EF9AA0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9EF99E0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x9EFA1A0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x9EFAF00)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x9EFA0C0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9EFA580)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9EFA540)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9EFA400)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x9EFA4C0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9EFAF10)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_F0B312081E495CE7_OFFSET UNITYSDK_OFFSET(0x9EFA5C0)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_FA1B25BB95EBDC41_OFFSET UNITYSDK_OFFSET(0x9EF9C20)
#define CLASS_1_26CC4FDC0664CC03_METHOD_1_FF4074F1212BC77E_OFFSET UNITYSDK_OFFSET(0x9EF96A0)
#define CLASS_1_26CC4FDC0664CC03__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF9480)

inline static constexpr unsigned int Class_1_26CC4FDC0664CC03_TypeDefinitionIndex = 64249;

class Class_1_26CC4FDC0664CC03 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::UnityEngine::Coroutine* Field_1_12; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::RPG::Client::Prop::PuzzleCameraControllerBase* Field_1_1; // 0x30
	::Class_1_4AF7185FBAAE5D87* Field_1_6; // 0x38
	::System::Boolean Field_1_0; // 0x40
	::System::Single Field_1_10; // 0x44
	::UnityEngine::Vector3 Field_1_2; // 0x48
	::UnityEngine::Quaternion Field_1_9; // 0x54
	::System::Single Field_1_11; // 0x64
	::System::Int32 Field_1_7; // 0x68
	::System::Single Field_1_8; // 0x6C

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_180CBD5001B70839(::RPG::Client::Prop::PlayerMotionProviderCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PlayerMotionProviderCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_180CBD5001B70839_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF4074F1212BC77E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_FF4074F1212BC77E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_1_FA1B25BB95EBDC41(::Class_1_4AF7185FBAAE5D87* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_FA1B25BB95EBDC41_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_00004B41EFDB322F(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_00004B41EFDB322F_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_414A270E91E4BF2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_F0B312081E495CE7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_F0B312081E495CE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26CC4FDC0664CC03_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

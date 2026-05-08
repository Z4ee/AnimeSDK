#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_156BE44D1D984E46;
class Class_1_86D95124687A23B0;
class Class_1_C0D373E596B22681;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCameraScopedFront; }
namespace MoleMole::Config { class ConfigCameraScopedFrontEmotion; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_1_OFFSET UNITYSDK_OFFSET(0xDAC51C0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_2_OFFSET UNITYSDK_OFFSET(0xDAC5790)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_3_OFFSET UNITYSDK_OFFSET(0xDAC4E90)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_4_OFFSET UNITYSDK_OFFSET(0xDAC48B0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_5_OFFSET UNITYSDK_OFFSET(0xDAC5D80)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0xDAC55F0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xDAC5360)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_36BD97F4F7471A55_OFFSET UNITYSDK_OFFSET(0xDAC2E40)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_376CBBDAF0B05B12_OFFSET UNITYSDK_OFFSET(0xDAC3060)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414BB1FBFACD7919_OFFSET UNITYSDK_OFFSET(0xDAC5030)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xDAC5930)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0xDAC4600)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xDAC4580)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xDAC4B20)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0xDAC31F0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0xDAC4800)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0xDAC4A50)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0xDAC2BE0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xDAC2850)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A0D926FAA558D73C_OFFSET UNITYSDK_OFFSET(0xDAC5BE0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A246752FB05092D1_1_OFFSET UNITYSDK_OFFSET(0xDAC59E0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A246752FB05092D1_OFFSET UNITYSDK_OFFSET(0xDAC5450)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDAC2B80)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDAC3A90)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CEEC03EFD89445AA_OFFSET UNITYSDK_OFFSET(0xDAC3240)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_1_OFFSET UNITYSDK_OFFSET(0xDAC4680)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0xDAC4740)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xDAC2AB0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xDAC3000)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_F2DA1806168C2B48_OFFSET UNITYSDK_OFFSET(0xDAC3AD0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xDAC5980)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xDAC5B80)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xDAC5160)
#define CLASS_2_0F0FB67B9BFE83E8_ONDRAG_OFFSET UNITYSDK_OFFSET(0xDAC4CD0)
#define CLASS_2_0F0FB67B9BFE83E8__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC4AC0)

inline static constexpr unsigned int Class_2_0F0FB67B9BFE83E8_TypeDefinitionIndex = 58631;

class Class_2_0F0FB67B9BFE83E8 : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::MoleMole::Photo::ScopedFrontCameraControlConfig* Field_2_4; // 0x20
	::Class_1_86D95124687A23B0* Field_2_1; // 0x28
	::Class_1_C0D373E596B22681* Field_2_3; // 0x30
	::MoleMole::Config::ConfigCameraScopedFront* Field_2_0; // 0x38
	::System::Single Field_2_9; // 0x40
	::UnityEngine::Vector2 Field_2_7; // 0x44
	::System::UInt32 Field_2_5; // 0x4C
	::System::Single Field_2_8; // 0x50
	::UnityEngine::Vector2 Field_2_6; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_7F20D9555862CF22(::Class_1_156BE44D1D984E46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_156BE44D1D984E46*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEEC03EFD89445AA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CEEC03EFD89445AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F2DA1806168C2B48(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_F2DA1806168C2B48_OFFSET))(this, a1);
	}

	::System::Void Method_2_376CBBDAF0B05B12(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_376CBBDAF0B05B12_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_414BB1FBFACD7919(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414BB1FBFACD7919_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_23EFCEB999C1D825_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A246752FB05092D1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A246752FB05092D1_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_1_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_2_OFFSET))(this);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_86D95124687A23B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86D95124687A23B0*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_36BD97F4F7471A55(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_36BD97F4F7471A55_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_3_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_4_OFFSET))(this);
	}

	::System::Void Method_2_DCCF63B007FEBD16_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_2_A0D926FAA558D73C(::MoleMole::Config::ConfigCameraScopedFrontEmotion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScopedFrontEmotion*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A0D926FAA558D73C_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A246752FB05092D1_1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_A246752FB05092D1_1_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_1B609003A2DB539A_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_1B609003A2DB539A_5_OFFSET))(this);
	}
};

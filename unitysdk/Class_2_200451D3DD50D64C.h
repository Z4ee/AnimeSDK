#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_156BE44D1D984E46;
class Class_1_73226DA8C2187016;
class Class_1_86D95124687A23B0;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_1_OFFSET UNITYSDK_OFFSET(0x18180A30)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x18182270)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET UNITYSDK_OFFSET(0x18183120)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET UNITYSDK_OFFSET(0x18182D70)
#define CLASS_2_200451D3DD50D64C_METHOD_2_414BB1FBFACD7919_OFFSET UNITYSDK_OFFSET(0x18182B80)
#define CLASS_2_200451D3DD50D64C_METHOD_2_4B49CDA568F1F7F4_OFFSET UNITYSDK_OFFSET(0x181812A0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x181825A0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET UNITYSDK_OFFSET(0x181811A0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET UNITYSDK_OFFSET(0x181811F0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET UNITYSDK_OFFSET(0x18180E70)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET UNITYSDK_OFFSET(0x18181DD0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0x18182130)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x18182040)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7DF1DC345886EBDA_OFFSET UNITYSDK_OFFSET(0x18181640)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET UNITYSDK_OFFSET(0x18181F20)
#define CLASS_2_200451D3DD50D64C_METHOD_2_82540ED13FE909B0_OFFSET UNITYSDK_OFFSET(0x18182FA0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x181807D0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_9B8206603CE8CF13_OFFSET UNITYSDK_OFFSET(0x18183000)
#define CLASS_2_200451D3DD50D64C_METHOD_2_A27DC2C5A103933A_1_OFFSET UNITYSDK_OFFSET(0x18180880)
#define CLASS_2_200451D3DD50D64C_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x18182750)
#define CLASS_2_200451D3DD50D64C_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x181814F0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BA0CFC6A675C2791_OFFSET UNITYSDK_OFFSET(0x18181480)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET UNITYSDK_OFFSET(0x18181150)
#define CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18180E20)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x18182F30)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x18182EC0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET UNITYSDK_OFFSET(0x18183190)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18182B20)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET UNITYSDK_OFFSET(0x18182DE0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18180D50)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x181815D0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18181240)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x18182D10)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x181830C0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x18182CB0)
#define CLASS_2_200451D3DD50D64C_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18182910)
#define CLASS_2_200451D3DD50D64C__CTOR_OFFSET UNITYSDK_OFFSET(0x18182220)

inline static constexpr unsigned int Class_2_200451D3DD50D64C_TypeDefinitionIndex = 53982;

class Class_2_200451D3DD50D64C : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_1_73226DA8C2187016* Field_2_3; // 0x20
	::MoleMole::Config::UIConfigPhotoCamera* Field_2_0; // 0x28
	::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* Field_2_5; // 0x30
	::Class_1_86D95124687A23B0* Field_2_1; // 0x38
	::MoleMole::Battle::Entity* Field_2_6; // 0x40
	::MoleMole::Cameras::FirstPersonCameraConfig* Field_2_4; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::UnityEngine::Vector2 Field_2_8; // 0x54
	::System::Single Field_2_10; // 0x5C
	::System::Single Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_6BE7DAB5DA40BCFF(::Class_1_156BE44D1D984E46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_156BE44D1D984E46*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA0CFC6A675C2791(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_BA0CFC6A675C2791_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Boolean Method_2_7DF1DC345886EBDA(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7DF1DC345886EBDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B49CDA568F1F7F4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_4B49CDA568F1F7F4_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_414BB1FBFACD7919(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_414BB1FBFACD7919_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_BD9CFCDCFFA614DD(::MoleMole::Config::UIConfigPhotoCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIConfigPhotoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_A27DC2C5A103933A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_A27DC2C5A103933A_1_OFFSET))(this);
	}

	::System::Void Method_2_7301533EE4FBBAD2(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_2_62C193B7BE96C914(::MoleMole::Cameras::FirstPersonCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET))(this, a1);
	}

	::System::Void Method_2_82540ED13FE909B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_82540ED13FE909B0_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_86D95124687A23B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86D95124687A23B0*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_2_64CCEC54F9F4C372(::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_9B8206603CE8CF13(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_9B8206603CE8CF13_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1B1897755057184(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0_1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_7FDE31EDE47E1969(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET))(this);
	}
};

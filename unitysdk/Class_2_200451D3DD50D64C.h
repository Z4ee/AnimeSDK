#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1F23F8E340B3325C;
class Class_1_5D2B428E9D4BC4BD;
class Class_1_73226DA8C2187016;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET UNITYSDK_OFFSET(0x17167C60)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET UNITYSDK_OFFSET(0x17167A70)
#define CLASS_2_200451D3DD50D64C_METHOD_2_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x17165640)
#define CLASS_2_200451D3DD50D64C_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x17166E80)
#define CLASS_2_200451D3DD50D64C_METHOD_2_2D21061F7B6DA307_OFFSET UNITYSDK_OFFSET(0x17167D20)
#define CLASS_2_200451D3DD50D64C_METHOD_2_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x17167AD0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_414BB1FBFACD7919_OFFSET UNITYSDK_OFFSET(0x17167790)
#define CLASS_2_200451D3DD50D64C_METHOD_2_4B49CDA568F1F7F4_OFFSET UNITYSDK_OFFSET(0x17165EC0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x171671A0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_52D1125272656980_1_OFFSET UNITYSDK_OFFSET(0x17166C60)
#define CLASS_2_200451D3DD50D64C_METHOD_2_52D1125272656980_OFFSET UNITYSDK_OFFSET(0x17166D40)
#define CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET UNITYSDK_OFFSET(0x17165DC0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET UNITYSDK_OFFSET(0x17165E10)
#define CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET UNITYSDK_OFFSET(0x17165A90)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET UNITYSDK_OFFSET(0x17166A10)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7DF1DC345886EBDA_OFFSET UNITYSDK_OFFSET(0x17166280)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET UNITYSDK_OFFSET(0x17166B50)
#define CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x171653D0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x17166120)
#define CLASS_2_200451D3DD50D64C_METHOD_2_B2C52ACF9D9B435B_1_OFFSET UNITYSDK_OFFSET(0x17165490)
#define CLASS_2_200451D3DD50D64C_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x17167360)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BA0CFC6A675C2791_OFFSET UNITYSDK_OFFSET(0x171660B0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET UNITYSDK_OFFSET(0x17165D70)
#define CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17165A30)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x17167B90)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x17167730)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET UNITYSDK_OFFSET(0x17167CC0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x171678C0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET UNITYSDK_OFFSET(0x17167990)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17165960)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x17166210)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17165E60)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x17167C00)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x17167D80)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x17167930)
#define CLASS_2_200451D3DD50D64C_ONDRAG_OFFSET UNITYSDK_OFFSET(0x17167520)
#define CLASS_2_200451D3DD50D64C__CTOR_OFFSET UNITYSDK_OFFSET(0x17166E20)

inline static constexpr unsigned int Class_2_200451D3DD50D64C_TypeDefinitionIndex = 74747;

class Class_2_200451D3DD50D64C : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::Class_1_1F23F8E340B3325C* Field_2_2; // 0x20
	::MoleMole::Config::UIConfigPhotoCamera* Field_2_3; // 0x28
	::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* Field_2_6; // 0x30
	::MoleMole::Cameras::FirstPersonCameraConfig* Field_2_7; // 0x38
	::MoleMole::Battle::Entity* Field_2_5; // 0x40
	::Class_1_73226DA8C2187016* Field_2_0; // 0x48
	::System::Single Field_2_9; // 0x50
	::System::Boolean Field_2_4; // 0x54
	::UnityEngine::Vector2 Field_2_11; // 0x58
	::System::Single Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_6BE7DAB5DA40BCFF(::Class_1_5D2B428E9D4BC4BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D2B428E9D4BC4BD*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET))(this, a1);
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

	::System::Void Method_2_52D1125272656980(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_52D1125272656980_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_7301533EE4FBBAD2(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_7FDE31EDE47E1969(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET))(this, a1);
	}

	::System::Void Method_2_39ABFA75105CA1F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_39ABFA75105CA1F6_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_289F28027FF47717_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0_1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET))(this);
	}

	::System::Void Method_2_64CCEC54F9F4C372(::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_2_52D1125272656980_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_52D1125272656980_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_B2C52ACF9D9B435B_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET))(this);
	}

	::System::Void Method_2_2D21061F7B6DA307(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_2D21061F7B6DA307_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_2_62C193B7BE96C914(::MoleMole::Cameras::FirstPersonCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_1F23F8E340B3325C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F23F8E340B3325C*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1B1897755057184(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD9CFCDCFFA614DD(::MoleMole::Config::UIConfigPhotoCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIConfigPhotoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET))(this, a1);
	}
};

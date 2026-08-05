#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1F23F8E340B3325C;
class Class_1_5D2B428E9D4BC4BD;
class Class_1_9454BFF647B56E9E;
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Config { class ConfigCameraScopedTacticalCombat; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_F89977FC983372BB_METHOD_2_15E27781A1522662_OFFSET UNITYSDK_OFFSET(0x141B2F50)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_1_OFFSET UNITYSDK_OFFSET(0x141B3C50)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_2_OFFSET UNITYSDK_OFFSET(0x141B3990)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_3_OFFSET UNITYSDK_OFFSET(0x141B4190)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_4_OFFSET UNITYSDK_OFFSET(0x141B4490)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_5_OFFSET UNITYSDK_OFFSET(0x141B37F0)
#define CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0x141B33B0)
#define CLASS_2_F89977FC983372BB_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x141B3B70)
#define CLASS_2_F89977FC983372BB_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x141B1D80)
#define CLASS_2_F89977FC983372BB_METHOD_2_2A829551B42C81EF_OFFSET UNITYSDK_OFFSET(0x141B3270)
#define CLASS_2_F89977FC983372BB_METHOD_2_2E2DC98B50F3CCB1_OFFSET UNITYSDK_OFFSET(0x141B3320)
#define CLASS_2_F89977FC983372BB_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x141B1900)
#define CLASS_2_F89977FC983372BB_METHOD_2_313B9215A0410EC4_OFFSET UNITYSDK_OFFSET(0x141B2A40)
#define CLASS_2_F89977FC983372BB_METHOD_2_36BD97F4F7471A55_OFFSET UNITYSDK_OFFSET(0x141B19C0)
#define CLASS_2_F89977FC983372BB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x141B15E0)
#define CLASS_2_F89977FC983372BB_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x141B3DF0)
#define CLASS_2_F89977FC983372BB_METHOD_2_551D1813B33CFC79_OFFSET UNITYSDK_OFFSET(0x141B4630)
#define CLASS_2_F89977FC983372BB_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0x141B1D30)
#define CLASS_2_F89977FC983372BB_METHOD_2_7E645F57C18A1446_OFFSET UNITYSDK_OFFSET(0x141B2340)
#define CLASS_2_F89977FC983372BB_METHOD_2_84B875B78EEDAAD8_OFFSET UNITYSDK_OFFSET(0x141B3C40)
#define CLASS_2_F89977FC983372BB_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x141B1DE0)
#define CLASS_2_F89977FC983372BB_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x141B1BE0)
#define CLASS_2_F89977FC983372BB_METHOD_2_AB77F47AC22558FB_OFFSET UNITYSDK_OFFSET(0x141B40F0)
#define CLASS_2_F89977FC983372BB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141B3B30)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x141B4050)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x141B4330)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_3_OFFSET UNITYSDK_OFFSET(0x141B43E0)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_4_OFFSET UNITYSDK_OFFSET(0x141B4970)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_5_OFFSET UNITYSDK_OFFSET(0x141B4A20)
#define CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x141B3FB0)
#define CLASS_2_F89977FC983372BB_METHOD_2_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x141B3620)
#define CLASS_2_F89977FC983372BB_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x141B3550)
#define CLASS_2_F89977FC983372BB_METHOD_2_E484621534821291_OFFSET UNITYSDK_OFFSET(0x141B1760)
#define CLASS_2_F89977FC983372BB_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x141B1660)
#define CLASS_2_F89977FC983372BB_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x141B1B80)
#define CLASS_2_F89977FC983372BB_METHOD_2_F2DA1806168C2B48_OFFSET UNITYSDK_OFFSET(0x141B26E0)
#define CLASS_2_F89977FC983372BB_ONDRAG_OFFSET UNITYSDK_OFFSET(0x141B32D0)
#define CLASS_2_F89977FC983372BB__CTOR_OFFSET UNITYSDK_OFFSET(0x141B3380)

inline static constexpr unsigned int Class_2_F89977FC983372BB_TypeDefinitionIndex = 54367;

class Class_2_F89977FC983372BB : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	::Class_1_1F23F8E340B3325C* Field_2_7; // 0x20
	::MoleMole::Config::ConfigCameraScopedTacticalCombat* Field_2_8; // 0x28
	::Class_1_9454BFF647B56E9E* Field_2_14; // 0x30
	::MoleMole::Cameras::TacticalCombatCameraConfig* Field_2_15; // 0x38
	::UnityEngine::Vector2 Field_2_2; // 0x40
	::UnityEngine::Vector2 Field_2_3; // 0x48
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_19; // 0x50
	::System::Nullable_1<::System::Single> Field_2_5; // 0x5C
	::System::Nullable_1<::System::Single> Field_2_13; // 0x64
	::System::Nullable_1<::System::Single> Field_2_9; // 0x6C
	::System::Nullable_1<::System::Single> Field_2_4; // 0x74
	::System::Boolean Field_2_1; // 0x7C
	::System::Nullable_1<::System::Single> Field_2_10; // 0x80
	::System::Nullable_1<::System::Single> Field_2_6; // 0x88
	::System::Nullable_1<::System::Single> Field_2_11; // 0x90
	::System::Nullable_1<::System::Single> Field_2_12; // 0x98
	::Enum_3_A019F766F8C74696 Field_2_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E484621534821291(::Class_1_5D2B428E9D4BC4BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D2B428E9D4BC4BD*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Boolean Method_2_7E645F57C18A1446(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_7E645F57C18A1446_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E2DC98B50F3CCB1(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2E2DC98B50F3CCB1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F2DA1806168C2B48(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_F2DA1806168C2B48_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_1F23F8E340B3325C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F23F8E340B3325C*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_313B9215A0410EC4(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_313B9215A0410EC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Void Method_2_1BC72208CAFF7D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1BC72208CAFF7D4E_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigCameraScopedTacticalCombat* Method_2_84B875B78EEDAAD8()
	{
		return ((::MoleMole::Config::ConfigCameraScopedTacticalCombat*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_84B875B78EEDAAD8_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_1_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_2_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_15E27781A1522662(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_15E27781A1522662_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_2_AB77F47AC22558FB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_AB77F47AC22558FB_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_3_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_36BD97F4F7471A55(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_36BD97F4F7471A55_OFFSET))(this, a1);
	}

	::System::Single Method_2_1B609003A2DB539A_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_3_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_4_OFFSET))(this);
	}

	::Struct_2_6188FB36C2269853 Method_2_551D1813B33CFC79(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::MoleMole::Cameras::TacticalCombatCameraConfig* a4)
	{
		return ((::Struct_2_6188FB36C2269853(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_551D1813B33CFC79_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_2A829551B42C81EF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2A829551B42C81EF_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_4_OFFSET))(this);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_D64FD9A228A1C4E0_5_OFFSET))(this);
	}

	::System::Single Method_2_1B609003A2DB539A_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1B609003A2DB539A_5_OFFSET))(this);
	}
};

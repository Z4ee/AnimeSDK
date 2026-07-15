#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3100354E684764E9_2;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161063C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x16107270)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x16107650)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0x16106400)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_3D2B77EBCAE390AB_1_OFFSET UNITYSDK_OFFSET(0x16106D90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x161073C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0x16106920)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x16106A50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x161072C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETENABLE_OFFSET UNITYSDK_OFFSET(0x161071C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETSELECT_OFFSET UNITYSDK_OFFSET(0x16107220)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x16107030)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16107660)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleSwitch_TypeDefinitionIndex = 74884;

	class RubikCubePuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleSwitch_TypeDefinitionIndex)->GetStaticField(0x4D40);
		}
		::UnityEngine::Material* SwitchNormal; // 0x18
		::UnityEngine::Material* SwitchSelect; // 0x20
		::RPG::GameCore::OptionTriggerInfo* RotateOption; // 0x28
		::RPG::Client::Prop::RubikCubeGroup Field_5_4; // 0x30
		::RPG::Client::Prop::RubikCubePuzzleCube* Field_5_5; // 0x38
		::Class_3_3100354E684764E9_2* Field_5_6; // 0x40
		::RPG::Client::MonoTriggerRegion* Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x50
		::RPG::GameCore::GameEntity* Field_5_9; // 0x58
		::System::String* Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleSwitchData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleSwitchData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_7AAD06186762BE3C(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_7AAD06186762BE3C_OFFSET))(this, a1);
		}

		::System::Void Method_5_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void Method_5_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Void Method_5_3D2B77EBCAE390AB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_3D2B77EBCAE390AB_1_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_GET_ISENABLED_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_559FD6C5998F578D.h"

namespace InControl { class PlayerTwoAxisAction; }
namespace InControl { class TwoAxisInputControl; }
namespace System { class String; }

#define RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_CAMERAROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1C2DB550)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_ISCAMERAACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1C2DB760)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_INIT_OFFSET UNITYSDK_OFFSET(0x1C2DA8F0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_RESETCAMERAROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1C2DB4A0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_SETCAMERAROTATIONACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1C2DB100)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2DB770)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DA8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerAdventureActions_TypeDefinitionIndex = 61425;

	class PlayerAdventureActions : public ::Class_2_559FD6C5998F578D
	{
	public:
		static ::System::String** StaticGet_RightStickLeft()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3DF0);
		}
		static ::System::String** StaticGet_RightStickDown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3DF8);
		}
		static ::System::String** StaticGet_LeftStickDown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E00);
		}
		static ::System::String** StaticGet_LeftStickRight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E08);
		}
		static ::System::String** StaticGet_RightStickUp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E10);
		}
		static ::System::String** StaticGet_RightStickRight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E18);
		}
		static ::System::String** StaticGet_LeftStickUp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E20);
		}
		static ::System::String** StaticGet_LeftStickLeft()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions_TypeDefinitionIndex)->GetStaticField(0x3E28);
		}
		::InControl::PlayerTwoAxisAction* _CameraRotationActionOverride; // 0x98
		::InControl::PlayerTwoAxisAction* _CameraRotationAction; // 0xA0
		::InControl::TwoAxisInputControl* _CameraRotationActionOverridePsPlatform; // 0xA8
		::System::Boolean _IsCameraRotationActionOverride; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_INIT_OFFSET))(this);
		}

		::System::Void SetCameraRotationActionOverride(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::InControl::TwoAxisInputControl* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_SETCAMERAROTATIONACTIONOVERRIDE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetCameraRotationAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_RESETCAMERAROTATIONACTION_OFFSET))(this);
		}

		::InControl::TwoAxisInputControl* get_CameraRotationAction()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_CAMERAROTATIONACTION_OFFSET))(this);
		}

		::System::Boolean get_IsCameraActionOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_ISCAMERAACTIONOVERRIDE_OFFSET))(this);
		}
	};
}

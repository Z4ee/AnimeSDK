#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextSize.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1BD02AD0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BD027C0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BD027F0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_TEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1BD027D0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BD02AB0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1BD02AF0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1BD02AE0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_TEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1BD027E0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BD02AC0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1BD02B10)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD02B20)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD02790)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__TRYLOADSIZETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x1BD028B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirJumpTextMessage_TypeDefinitionIndex = 78724;

	class PixAirJumpTextMessage : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SizeThresholdLarge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PixAirJumpTextMessage_TypeDefinitionIndex)->GetStaticField(0x13B30);
		}
		static ::System::Int32* StaticGet__SizeThresholdMedium()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PixAirJumpTextMessage_TypeDefinitionIndex)->GetStaticField(0x13B34);
		}
		static ::System::Boolean* StaticGet__IsSizeThresholdConfigLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PixAirJumpTextMessage_TypeDefinitionIndex)->GetStaticField(0x13B38);
		}
		::System::Int32 _Value_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirJumpTextType _TextType_k__BackingField; // 0x14
		::System::Boolean _IsPlayer_k__BackingField; // 0x18
		::System::Int32 _SenderRuntimeID_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _WorldPosition_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::PixAir::PixAirJumpTextType a2, ::System::Boolean a3, ::System::Int32 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirJumpTextType, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__CCTOR_OFFSET))();
		}

		::System::Int32 get_SenderRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_SENDERRUNTIMEID_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirJumpTextType get_TextType()
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_TEXTTYPE_OFFSET))(this);
		}

		::System::Void set_TextType(::RPG::Client::PixAir::PixAirJumpTextType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_TEXTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirJumpTextSize get_Size()
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextSize(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Void set_IsPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_ISPLAYER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_WorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_GET_WORLDPOSITION_OFFSET))(this);
		}

		::System::Void set_WorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE_SET_WORLDPOSITION_OFFSET))(this, a1);
		}

		static ::System::Void _TryLoadSizeThresholdConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTMESSAGE__TRYLOADSIZETHRESHOLDCONFIG_OFFSET))();
		}
	};
}

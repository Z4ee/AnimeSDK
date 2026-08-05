#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolWithJoypad; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA1C230)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1C270)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__SHOW_B__42_0_OFFSET UNITYSDK_OFFSET(0x1DA1C280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolWithJoypad___c_TypeDefinitionIndex = 20139;

	class ProtocolWithJoypad___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::ProtocolWithJoypad*>** StaticGet___9__42_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::ProtocolWithJoypad*>**)Il2CppClass::FromTypeDefinitionIndex(ProtocolWithJoypad___c_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::MiHoYo::SDK::ProtocolWithJoypad___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ProtocolWithJoypad___c**)Il2CppClass::FromTypeDefinitionIndex(ProtocolWithJoypad___c_TypeDefinitionIndex)->GetStaticField(0xAB08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__42_0(::MiHoYo::SDK::ProtocolWithJoypad* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolWithJoypad*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__SHOW_B__42_0_OFFSET))(this, dialog);
		}
	};
}

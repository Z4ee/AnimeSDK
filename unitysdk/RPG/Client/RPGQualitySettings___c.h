#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PCResolution; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RPGQUALITYSETTINGS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDDC420)
#define RPG_CLIENT_RPGQUALITYSETTINGS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDDDC450)
#define RPG_CLIENT_RPGQUALITYSETTINGS___C__GETALLDEVICERESOLUTIONS_B__76_0_OFFSET UNITYSDK_OFFSET(0xDDDC460)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings___c_TypeDefinitionIndex = 67919;

	class RPGQualitySettings___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGQualitySettings___c** StaticGet___9()
		{
			return (::RPG::Client::RPGQualitySettings___c**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings___c_TypeDefinitionIndex)->GetStaticField(0x5EA30);
		}
		static ::System::Comparison_1<::RPG::Client::PCResolution*>** StaticGet___9__76_0()
		{
			return (::System::Comparison_1<::RPG::Client::PCResolution*>**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings___c_TypeDefinitionIndex)->GetStaticField(0x5EA38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllDeviceResolutions_b__76_0(::RPG::Client::PCResolution* a1, ::RPG::Client::PCResolution* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS___C__GETALLDEVICERESOLUTIONS_B__76_0_OFFSET))(this, a1, a2);
		}
	};
}

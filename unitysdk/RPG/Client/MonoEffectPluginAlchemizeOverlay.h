#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xA957360)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xA957810)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9577C0)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0xA957700)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex = 64464;

	class MonoEffectPluginAlchemizeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xDF70);
		}
		static ::System::Int32* StaticGet_Field_8_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xDF74);
		}
		::System::Boolean EnableGradientColor; // 0x220
		::System::Single GradientRange; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET))();
		}

		::System::Void Method_8_1AD3CAF2B0982C3F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_1AD3CAF2B0982C3F_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}

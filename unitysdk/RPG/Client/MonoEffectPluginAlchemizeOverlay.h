#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0xC0A3410)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xC0A3870)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0A3820)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A3760)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex = 65385;

	class MonoEffectPluginAlchemizeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0x12D10);
		}
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0x12D14);
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

		::System::Void Method_8_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_39FD7185C859CEAD_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xC0E4EF0)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xC0E5370)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0E5330)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E5270)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex = 65460;

	class MonoEffectPluginOverlayCharaExtraData : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex)->GetStaticField(0x132B0);
		}
		::System::Boolean RootPos; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET))();
		}

		::System::Void Method_8_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}

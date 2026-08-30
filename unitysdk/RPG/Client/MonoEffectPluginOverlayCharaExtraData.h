#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1B38DEC0)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B38E2E0)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38E220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex = 69976;

	class MonoEffectPluginOverlayCharaExtraData : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_KIOEMCMACBD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex)->GetStaticField(0x7910);
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

		::System::Void Method_8_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_33E2FA8E6403B93D_OFFSET))(this);
		}
	};
}

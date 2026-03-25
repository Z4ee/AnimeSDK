#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x9CD5300)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x9CD5790)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CD5750)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD5690)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex = 57285;

	class MonoEffectPluginOverlayCharaExtraData : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex)->GetStaticField(0x110E0);
		}
		::System::Boolean RootPos; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET))();
		}

		::System::Void Method_8_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_4857357D5C1BFCE8_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}

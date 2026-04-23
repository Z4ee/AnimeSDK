#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHADOWPROXYINFO_METHOD_2_034CA48B389E4C24_OFFSET UNITYSDK_OFFSET(0x18E4FA40)
#define RPG_GAMECORE_SHADOWPROXYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShadowProxyInfo_TypeDefinitionIndex = 18110;

	class ShadowProxyInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseProxy; // 0x10
		::System::Int32 ShadowCastingMode; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADOWPROXYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_034CA48B389E4C24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShadowProxyInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShadowProxyInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADOWPROXYINFO_METHOD_2_034CA48B389E4C24_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_METHOD_2_90438499B23FA9BA_OFFSET UNITYSDK_OFFSET(0x1721F240)
#define RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1721F380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventInfoConfig_TypeDefinitionIndex = 14920;

	class FreeStyleAnimEventInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>* FreeStyleClipGroupEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimEventConfig*>* FreeStyleClipEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_90438499B23FA9BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimEventInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimEventInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_METHOD_2_90438499B23FA9BA_OFFSET))(a1, a2);
		}
	};
}

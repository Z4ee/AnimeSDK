#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }

#define RPG_GAMECORE_FREESTYLEANIMZONECONFIG_METHOD_2_935ED42C4AB1D762_OFFSET UNITYSDK_OFFSET(0x1976CF60)
#define RPG_GAMECORE_FREESTYLEANIMZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976D090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimZoneConfig_TypeDefinitionIndex = 15493;

	class FreeStyleAnimZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* ClipGroupZones; // 0x10
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* ClipZones; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_935ED42C4AB1D762(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMZONECONFIG_METHOD_2_935ED42C4AB1D762_OFFSET))(a1, a2);
		}
	};
}

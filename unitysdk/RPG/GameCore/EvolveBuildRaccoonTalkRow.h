#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/RaccoonStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F94F0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196F9BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRaccoonTalkRow_TypeDefinitionIndex = 10977;

	class EvolveBuildRaccoonTalkRow : public ::System::Object
	{
	public:
		::System::String* RaccoonPicPath; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* TextmapList; // 0x18
		::RPG::GameCore::RaccoonStateType RaccoonState; // 0x20
		::RPG::GameCore::EvolveBuildSeason Season; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

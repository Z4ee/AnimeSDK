#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BATTLESKILLCUSTOMTOASTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBE530)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillCustomToastParam_TypeDefinitionIndex = 68685;

	class BattleSkillCustomToastParam : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::RPG::Client::TextID CustomTextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLCUSTOMTOASTPARAM__CTOR_OFFSET))(this);
		}
	};
}

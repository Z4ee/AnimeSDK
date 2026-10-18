#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE71E5F0)
#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS5_0__INITPUZZLE_B__0_OFFSET UNITYSDK_OFFSET(0xE7326A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent___c__DisplayClass5_0_TypeDefinitionIndex = 57371;

	class PropComponent___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* __4__this; // 0x10
		::System::Int32 loadId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPuzzle_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS5_0__INITPUZZLE_B__0_OFFSET))(this, a1);
		}
	};
}

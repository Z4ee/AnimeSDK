#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_C95A10C506447F87;

#define MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17020E20)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVABattleSpecialContext_TypeDefinitionIndex = 49555;

	class ActivityOVABattleSpecialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_C95A10C506447F87* entryData; // 0x28
		::Foundation::AssetPath BackGroundPic; // 0x30
		::System::Int32 selectLevel; // 0x40
		::System::Boolean selectHard; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

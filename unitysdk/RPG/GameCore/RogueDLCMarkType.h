#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCMARKTYPE_METHOD_2_D101620D901E7C82_OFFSET UNITYSDK_OFFSET(0x19B34D50)
#define RPG_GAMECORE_ROGUEDLCMARKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B34E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkType_TypeDefinitionIndex = 17022;

	class RogueDLCMarkType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TypeID; // 0x10
		::System::UInt32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D101620D901E7C82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCMarkType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMarkType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPE_METHOD_2_D101620D901E7C82_OFFSET))(a1, a2);
		}
	};
}

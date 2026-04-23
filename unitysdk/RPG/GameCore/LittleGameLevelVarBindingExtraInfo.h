#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_METHOD_2_86986A9C1D00BC17_OFFSET UNITYSDK_OFFSET(0x18A6C940)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_METHOD_2_B2CE864EC95C5F55_OFFSET UNITYSDK_OFFSET(0x18A6C850)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6C9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarBindingExtraInfo_TypeDefinitionIndex = 17936;

	class LittleGameLevelVarBindingExtraInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B2CE864EC95C5F55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_METHOD_2_B2CE864EC95C5F55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_86986A9C1D00BC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_METHOD_2_86986A9C1D00BC17_OFFSET))(a1, a2);
		}
	};
}

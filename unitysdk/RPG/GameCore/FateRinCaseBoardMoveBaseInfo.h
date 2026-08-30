#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_METHOD_2_0D5F69DADCDAF908_OFFSET UNITYSDK_OFFSET(0x1E0D0AA0)
#define RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardMoveBaseInfo_TypeDefinitionIndex = 19690;

	class FateRinCaseBoardMoveBaseInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single OffsetX; // 0x14
		::System::Single OffsetY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D5F69DADCDAF908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardMoveBaseInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardMoveBaseInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_METHOD_2_0D5F69DADCDAF908_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_METHOD_2_4E45B7E421561919_OFFSET UNITYSDK_OFFSET(0x1D090130)
#define RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0904B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardHouguInfo_TypeDefinitionIndex = 16054;

	class FateRinCaseBoardHouguInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean IsShow; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4E45B7E421561919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardHouguInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardHouguInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_METHOD_2_4E45B7E421561919_OFFSET))(a1, a2);
		}
	};
}

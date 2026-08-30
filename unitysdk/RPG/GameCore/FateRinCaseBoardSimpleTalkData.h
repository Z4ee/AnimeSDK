#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_METHOD_2_92BEBE2D40199FBB_OFFSET UNITYSDK_OFFSET(0x1E0D0C30)
#define RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardSimpleTalkData_TypeDefinitionIndex = 19702;

	class FateRinCaseBoardSimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x10
		::System::Single BlockTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_92BEBE2D40199FBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardSimpleTalkData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardSimpleTalkData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_METHOD_2_92BEBE2D40199FBB_OFFSET))(a1, a2);
		}
	};
}

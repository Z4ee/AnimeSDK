#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDBUFF_METHOD_3_339EAA54CD749477_OFFSET UNITYSDK_OFFSET(0x1D22D420)
#define RPG_GAMECORE_MARBLEADDBUFF_METHOD_3_779E96715C3DC3DF_OFFSET UNITYSDK_OFFSET(0x1D22D480)
#define RPG_GAMECORE_MARBLEADDBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22D470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddBuff_TypeDefinitionIndex = 16655;

	class MarbleAddBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14
		::System::UInt32 StackCount; // 0x18
		::System::Boolean UseTargetAsSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_339EAA54CD749477(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF_METHOD_3_339EAA54CD749477_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_779E96715C3DC3DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF_METHOD_3_779E96715C3DC3DF_OFFSET))(a1, a2);
		}
	};
}

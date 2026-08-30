#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_METHOD_2_75F0A7B16914EA57_OFFSET UNITYSDK_OFFSET(0x1CCEFD90)
#define RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEFE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSummonCharacterExtraDataBase_TypeDefinitionIndex = 23848;

	class RtSummonCharacterExtraDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75F0A7B16914EA57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSummonCharacterExtraDataBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSummonCharacterExtraDataBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_METHOD_2_75F0A7B16914EA57_OFFSET))(a1, a2);
		}
	};
}

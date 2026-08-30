#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_METHOD_3_95759BF1E9F89D26_OFFSET UNITYSDK_OFFSET(0x1D062D50)
#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_METHOD_3_F9EEE9669172F565_OFFSET UNITYSDK_OFFSET(0x1D062D90)
#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D062D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableHugeMonsterHalfDither_TypeDefinitionIndex = 22424;

	class EnableHugeMonsterHalfDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95759BF1E9F89D26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableHugeMonsterHalfDither*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_METHOD_3_95759BF1E9F89D26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9EEE9669172F565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableHugeMonsterHalfDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_METHOD_3_F9EEE9669172F565_OFFSET))(a1, a2);
		}
	};
}

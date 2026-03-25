#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameCoreParamFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_07EDC543498380A3_OFFSET UNITYSDK_OFFSET(0x1701E1B0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET UNITYSDK_OFFSET(0x1701E280)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1701E230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsParamFlag_TypeDefinitionIndex = 21767;

	class ByContainsParamFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameCoreParamFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_07EDC543498380A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_07EDC543498380A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EBADACA5D1A9845(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET))(a1, a2);
		}
	};
}

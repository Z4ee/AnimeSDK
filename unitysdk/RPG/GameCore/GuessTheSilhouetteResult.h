#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT_METHOD_3_12D8D67AF20D8406_OFFSET UNITYSDK_OFFSET(0x1728D9E0)
#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT_METHOD_3_C74B0655A9FB0B42_OFFSET UNITYSDK_OFFSET(0x1728DA60)
#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1728DA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuessTheSilhouetteResult_TypeDefinitionIndex = 19473;

	class GuessTheSilhouetteResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SilhouetteID; // 0x18
		::System::Boolean IsExecuting; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12D8D67AF20D8406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GuessTheSilhouetteResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuessTheSilhouetteResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT_METHOD_3_12D8D67AF20D8406_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C74B0655A9FB0B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GuessTheSilhouetteResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuessTheSilhouetteResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT_METHOD_3_C74B0655A9FB0B42_OFFSET))(a1, a2);
		}
	};
}

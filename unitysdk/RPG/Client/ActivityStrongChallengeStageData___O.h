#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeStageData___O_TypeDefinitionIndex = 57899;

	class ActivityStrongChallengeStageData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>** StaticGet__0___CreateByID()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___O_TypeDefinitionIndex)->GetStaticField(0x5AF10);
		}
	};
}

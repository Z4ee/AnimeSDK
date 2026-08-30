#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___O_TypeDefinitionIndex = 68082;

	class TeamBuildCalculator___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__0____HasAvatarChecker()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___O_TypeDefinitionIndex)->GetStaticField(0x43230);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__1____TrueChecker()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___O_TypeDefinitionIndex)->GetStaticField(0x43238);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindObjectType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindAchievement___O_TypeDefinitionIndex = 15712;

	class TimeRewindAchievement___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindObjectType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindObjectType>**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindAchievement___O_TypeDefinitionIndex)->GetStaticField(0xD140);
		}
	};
}

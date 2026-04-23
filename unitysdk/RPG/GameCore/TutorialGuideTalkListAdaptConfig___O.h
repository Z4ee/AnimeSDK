#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkListAdaptConfig___O_TypeDefinitionIndex = 23416;

	class TutorialGuideTalkListAdaptConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideDirectionType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkListAdaptConfig___O_TypeDefinitionIndex)->GetStaticField(0x10C60);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceAudioEventConfig___O_TypeDefinitionIndex = 15003;

	class PerformanceAudioEventConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VoicePlayType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VoicePlayType>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceAudioEventConfig___O_TypeDefinitionIndex)->GetStaticField(0x2F940);
		}
	};
}

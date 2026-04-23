#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_AttachAIStatus___O_TypeDefinitionIndex = 19047;

	class ST_Side_AttachAIStatus___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIStatus>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIStatus>**)Il2CppClass::FromTypeDefinitionIndex(ST_Side_AttachAIStatus___O_TypeDefinitionIndex)->GetStaticField(0x4C560);
		}
	};
}

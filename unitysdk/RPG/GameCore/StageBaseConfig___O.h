#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBaseConfig___O_TypeDefinitionIndex = 18158;

	class StageBaseConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicQuality>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicQuality>**)Il2CppClass::FromTypeDefinitionIndex(StageBaseConfig___O_TypeDefinitionIndex)->GetStaticField(0x53250);
		}
	};
}

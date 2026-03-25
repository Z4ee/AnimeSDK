#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindMaterialOverlayConfig___O_TypeDefinitionIndex = 16134;

	class TimeRewindMaterialOverlayConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindView>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindView>**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindMaterialOverlayConfig___O_TypeDefinitionIndex)->GetStaticField(0x1A640);
		}
	};
}

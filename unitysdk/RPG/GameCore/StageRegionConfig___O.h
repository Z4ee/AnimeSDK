#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionConfig___O_TypeDefinitionIndex = 17610;

	class StageRegionConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(StageRegionConfig___O_TypeDefinitionIndex)->GetStaticField(0x11DF0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropRow___O_TypeDefinitionIndex = 10720;

	class ActivityFarmMultipleDropRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MultipleDropTypeConfig>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MultipleDropTypeConfig>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropRow___O_TypeDefinitionIndex)->GetStaticField(0x1EF90);
		}
	};
}
